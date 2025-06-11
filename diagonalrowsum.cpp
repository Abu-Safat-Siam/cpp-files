#include<iostream>
using namespace std;

//This code uses
//approach	
//Single loop O(n)	✅ Yes	Best & optimal
//Nested loop O(n²)	❌ No	Wasteful iteration (slow)

int diagonalRowSum(int arr[][2],int n){
int sum=0;

    for(int i=0;i<n;i++){
int j=n-1-i;
     sum += arr[i][j]; 
        
    }
cout<<sum<<endl;
    return 0;
}


int main(){
int n =2;

int arr[n][2]={
        {1, 2},
        {3, 4},
    };
diagonalRowSum(arr,n);
    return 0;
}