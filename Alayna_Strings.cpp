#include<iostream>
#include<string>
using namespace std;

int main(){
string str;

cin>>str;
cin.ignore();
int capCount=0,smallCount=0;

for(int i=0;i<str.length();i++){
    if(str[i]>='A' && str[i]<='Z'){capCount++;}

  else if(str[i]>='a' && str[i]<='z'){smallCount++;}
    
}
    

cout<<capCount<<" "<<smallCount<<endl;

return 0;
}