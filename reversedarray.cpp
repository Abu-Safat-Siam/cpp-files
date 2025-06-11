#include<iostream>
using namespace std;

//The approch is 2 pointers approch 
//The Time Complexity of the Algorithm is O(n)

void reverseArray(int array[],int sz){
int start =0;
int end = sz-1;
while(start<end){
    swap(array[start],array[end]);
    start++;
    end--;
}
}

int main(){
int array[]={1,2,3,4,5};
int sz=5;
reverseArray(array,sz);

for(int i=0;i<sz;i++){
    cout<<array[i]<<endl;
}

    return 0;
}