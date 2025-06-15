#include<bits/stdc++.h>
using namespace std;


int removeDuplicates(vector<int>& vec){
 if(vec.empty())return 0;
int i=0;
for(int j=1;j<vec.size();j++){
    if(vec[j]!=vec[i]){
        i++;
        vec[i]=vec[j];
    }
}
return i+1;
}

int main(){
vector<int> vec={1,2,3,3};
int length=removeDuplicates(vec);
cout<<length<<endl;

    return 0;
}