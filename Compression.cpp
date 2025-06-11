#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sortRemove(int n,vector<int> vec){

sort(vec.begin(),vec.end());

for(int i=0;i<n;i++){

    for(int j=1;j<n;j++){
if(vec[j]==vec[i]){
    vec.erase(vec.begin()+i);

}
}
}

return vec.size();
}


int main(){

int n;
cin>>n;
vector<int> vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}

cout<<sortRemove(n,vec);
for(int i:vec)cout<<i<<" ";

    return 0;
}