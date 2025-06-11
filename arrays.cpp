#include<iostream>
using namespace std;

int main(){
    int size =5;
int array[size]={34,34,54,5,23};
int i,max = array[0];

for(i=0;i<size;i++){
if(max < array[i]){
    max = array[i];
}

}
cout<<max;

    return 0;
}