
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr,int size){
    //base
    if(size==0 ||size==1)
    return true;
    if(arr[0]>arr[1]){
        return false;
    }else {
    bool remainingpart=isSorted(arr+1,size-1);
    return remainingpart;
    }

}
int main(){
   int arr[5]={2,4,12,8,9};
   int size=5;

   bool ans=isSorted(arr,size);
   cout<<ans;

}
