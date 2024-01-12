#include<iostream>
#include<algorithm>
using namespace std;

struct maxmin
{
   int max;
   int min;
};
//method 1
// maxmin getMaxMin(int arr[],int n){
//     maxmin ans;
//     sort(arr,arr+n);
//     ans.max=arr[n-1];
//     ans.min=arr[0];
//     return ans;

// }

//method 2

maxmin getMaxMin(int arr[],int n){
    maxmin ans;

    if(arr[0]>arr[1]){
        ans.max=arr[0];
        ans.min=arr[1];
    }else{
        ans.max=arr[1];
        ans.min=arr[0];
    }

    for(int i=2;i<n;i++){
        if(arr[i]>ans.max)
        ans.max=arr[i];
        else if(arr[i]<ans.min)
        ans.min=arr[i];
    }
    return ans;
}


int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    maxmin ans=getMaxMin(a,n);
    cout<<"max= "<<ans.max<<" min= "<<ans.min<<endl;


    return 0;
}