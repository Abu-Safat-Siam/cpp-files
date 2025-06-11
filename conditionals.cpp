#include<iostream>
using namespace std;
int main(){

int sum=0, number;
cout<<"Enter your number:";
cin>>number;

for(int i=1;i<=number && number%i==0;i++){
sum+=i;
    }

cout<<"The sum is "<< sum <<endl;
    return 0;
}