#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
float a1,b1,c1,a2,b2,c2;
cin>>a1>>b1>>c1>>a2>>b2>>c2;

float det=(a1*b2)-(a2*b1);


if(det!=0){
float x=((b1*c2)-(b2*c1))/((a1*b2)-(a2*b1));
float y=((c1*a2)-(c2*a1))/((a1*b2)-(a2*b1));
    if (fabs(x) < 1e-9) x = 0;
    if (fabs(y) < 1e-9) y = 0;

cout<<fixed<<setprecision(6)<<x<<" "<<y<<endl;
}
else{
if((a1*c2)==(c1*a2)){cout<<"Infinite Intersections"<<endl;}
else {cout<<"Never Intersect"<<endl;}
}
    return 0;
}