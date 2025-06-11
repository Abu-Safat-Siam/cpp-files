#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
string s;
cin>>s;
int num=stoi(s);
float rtf=sqrt(num);
int rti=sqrt(num);

if(rtf==rti){
    cout<<rti<<" 0"<<endl;
}

else{cout<<"-1"<<endl;}
   }
   
   
   return 0;
}