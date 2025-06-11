#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){

    int t;
    cin>>t;
    
    while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;
int x1=min(a,c);
int x2=min(b,d);

int maximum = max(x1,x2);
if(maximum == x1){
    cout<<"Gellyfish"<<endl;
    continue;
}
cout<<"Flower"<<endl;

    }

    return 0;

}