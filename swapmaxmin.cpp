#include<iostream>
using namespace std;

//Resolve and Reckoning
//Approch is to find index and swap the array elements with the index
//We can't find the max and min directly without index

int findMaxIndex(int arr[],int sz){
int maxIdx=0;
for(int i=0;i<sz;i++){
    if(arr[maxIdx]<arr[i]){
        maxIdx=i;
    }
}
    return maxIdx;
}

int findMinIndex(int arr[],int sz){
int minIdx=0;
for(int i=0;i<sz;i++){
    if(arr[minIdx]>arr[i]){
        minIdx=i;
    }
}
    return minIdx;
}

int main(){
int arr[]={1,2,3,4,5};
int sz=5;
int max=findMaxIndex(arr,sz);
int min=findMinIndex(arr,sz);

swap(arr[max],arr[min]);

for(int i=0;i<sz;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}