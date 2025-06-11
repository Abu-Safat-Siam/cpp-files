#include<iostream>

using namespace std;

int rowSum(int arr[][2],int row ,int col){
int sum[row]={0,0,0,0,0};

    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){
     sum[i] += arr[i][j]; 

        }
        
    }
int max=sum[0];
for(int k=1;k<row;k++){
    if(max<sum[k]){
        max=sum[k];
    }
}
cout<<max<<endl;
    return 0;
}


int main(){
int row=5;
int col =2;

int arr[row][2]={
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8},
        {9, 10}
    };
rowSum(arr,row,col);
    return 0;
}