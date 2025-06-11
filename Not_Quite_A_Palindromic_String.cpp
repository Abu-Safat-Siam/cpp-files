#include<iostream>
#include<string>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
string s;
cin>>s;
int c0=0,c1=0;

for(int i=0;i<n;i++){
if(s[i]=='0'){
    c0++;
}
else{c1++;}
}
int max_good = (c0 / 2) + (c1 / 2);
        int total_pairs = n / 2;
        int bad_needed = total_pairs - k;

        if (k <= max_good && bad_needed <= min(c0, c1)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

}
    return 0;
}
