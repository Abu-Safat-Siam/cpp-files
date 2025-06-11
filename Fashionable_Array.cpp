#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int findOperationNumber(vector<int>& vec,int n) {
    int optMin=0,optMax=0;

  for(int i=0;i<n-1;i++){
     if((vec[i]+vec[n-1])%2==0){
     break;
     }
     optMin++;
  }

for(int j=n-1;j>0;j--){
     if((vec[j]+vec[0])%2==0){
     break;
     }
     optMax++;
  }

  if(optMin>optMax){return optMax;}
  
  return optMin;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
       sort(vec.begin(),vec.end());
       cout<<findOperationNumber(vec,n)<<endl;
    }

    return 0;
}

