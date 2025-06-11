#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int sumWinning(int l,int r){
    int sumB=(r/2)-((l-1)/2);

return sumB;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int main(){
int t;
cin>>t;

while(t--){
int l,r;
cin>>l>>r;
int d=r-l+1;
int sum = sumWinning(l,r);
int result_gcd = gcd(sum,d);

if(sum==0){
    cout<<"0"<<endl;
    continue;
}

else if(sum==d){
    cout<<"1"<<endl;
}

else{
d=d/result_gcd;
sum=sum/result_gcd;
cout<<sum<<"/"<<d<<endl;
}

}

    return 0;
}