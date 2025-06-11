#include<iostream>
using namespace std;


//Time Complexity of Linenar Search is O(n)

//Time Complexity of Binary Search is O(logn)
const int COL = 2;
int linearSearch(int row,int arr[][COL],int target){
for(int i =0;i<row;i++){
    for(int j=0;j<COL;j++){
    if(arr[i][j]==target){
cout<<i<<" "<<j<<endl;
        return 1;
    }
}
}
cout<<"-1 -1"<<endl;
return 0;
}


int main(){
const int row=3;

int arr[row][COL]={{1,2},{3,9},{0,5}};
int target = 10;

cout<<linearSearch(row,arr,target)<<endl;


    return 0;
}