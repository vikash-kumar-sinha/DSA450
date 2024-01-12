#include<bits/stdc++.h>
using namespace std;
//method 1
// void sort012(int arr[],int n){
//     sort(arr,arr+n);
// }
//method 2
void sort012(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<high){
        switch(arr[mid]){
            case 0: swap(arr[mid++],arr[low++]);
            break;
            case 1:mid++;
            break;
            case 2: swap(arr[mid],arr[high--]);
            break;
        }

    }
}

int main(){
    int a[]={0,1,1,2,0,1,2,1,0,0};
    int n=10;

    sort012(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;

}
