#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0;
        int last = -2e9; 

        for (int i = 0; i < n; i++) {
            if (arr[i] > last + 1) {
                count++;
                last = arr[i];
            }
          
        }

        cout << count << endl;
    }

    return 0;
}
