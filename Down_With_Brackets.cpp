#include<iostream>
#include<string>
using namespace std;

bool checkBalancement(const string &s){
int count =0;
int primitives=0;
for(char c:s){
if(c=='('){++count;}

else{
    --count;}

if(count==0){++primitives;}


}
return (primitives<=1);
}

int main(){
   ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
string s;
cin>>s;

 if(checkBalancement(s)){cout<<"No"<<endl;}
else{cout<<"Yes"<<endl;}


    }


    return 0;
}