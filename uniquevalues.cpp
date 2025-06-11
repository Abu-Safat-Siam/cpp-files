#include<iostream>
using namespace std;

int findUniqueValues(int arr[],int sz){

   int isUnique[sz];
int uniqueCount = 0;
   int i,j;
   for(i=0;i<sz;++i){
int count = 0;
    for(j=0;j<sz;++j){
        if(arr[j]==arr[i]){
      ++count;
            
        }
      
    }
      if(count==1){
           isUnique[uniqueCount++]=arr[i];
        }
   }
   for(int k=0;k<uniqueCount;++k){
    cout<<isUnique[k]<<" ";
   }
   return uniqueCount;
    
}
int main(){

   int sz;
   cin>>sz;

int arr[sz];
cin>>arr[sz];


cout<<findUniqueValues<<endl;
findUniqueValues(arr,sz);
    return 0;
}