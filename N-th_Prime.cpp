#include <iostream>
#include <vector>

using namespace std;
const int MAX = 8000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> is_prime(MAX, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < MAX; i++) {
        if (is_prime[i]) {
            count++;
            if (count == n) {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}

