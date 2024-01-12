#include<bits/stdc++.h>
using namespace std;
//method 1
// void rotatearray(int arr[],int n){
//     int a=arr[n-1];
//     for(int i=n-1;i>0;i--)
//     arr[i]=arr[i-1];
//     arr[0]=a;
// }

//method 2
void rotatearray(int arr[],int n){
reverse(arr,arr+n);
reverse(arr+1,arr+n);
}

int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    rotatearray(a,n);
    for(int i:a){
        cout<<i<<" ";

    }
    cout<<endl;
    return 0;
}