#include<iostream>
using namespace std;

int main(){
int r,k,d;
cin>>r>>k>>d;

if(r==k){cout<<"Draw 0"<<endl;}

else if(r>k){
    int v = r-k;
    float t = d/v;
    cout<<"Rahim "<<t<<endl;
}

else{
    int v=k-r;
    float t =d/v;
    cout<<"Karim "<<t<<endl;
}

    return 0;
}