#include<iostream>
#include<algorithm>
using namespace std;

//method 1
// void reverseArray(int arr[],int n){
//     int i=0;
//     int j=n-1;

//     while(i<j){
//         int temp=arr[i];
//          arr[i]=arr[j];
//         arr[j]=temp;
//         i++;j--;
//     }
// }

//method 2
// void reverseArray(int arr[],int s,int e){
//     if(s>e)
//     return;

//     int temp=arr[s];
//     arr[s]=arr[e];
//     arr[e]=temp;

//     return reverseArray(arr,s+1,e-1);

// }

int main(){
   
    int a[]={1,2,3,4,5};
    int n=5;
    //method 3 using reverse function
    reverse(a,a+n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
  

    return 0;
}