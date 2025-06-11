#include<iostream>
#include<math.h>
using namespace std;

int main(){

int q;
cin>>q;
while(q--){

long long l,r;
cin>>l>>r;
long long codd = (long long)sqrtl(r) - (long long)sqrtl(l-1) ;

cout<<codd<<endl;

}

    return 0;
}