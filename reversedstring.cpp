#include<iostream>
#include<string>
using namespace std;

int main(){

string str;
getline(cin,str);    

for(int i=0;i<(str.length())/2;i++){
   
swap(str[i],str[str.length()-1-i]);
    
}

cout<<str<<endl;

    return 0;
}