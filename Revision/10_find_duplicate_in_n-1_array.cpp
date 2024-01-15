#include<bits/stdc++.h>
using namespace std;
#define p(a) for(int i:a)cout<<i<<" ";
#define vi vector<int>
//method 1 tc->O(nlogn)
// void find_duplicate(int arr[],int n){
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[i+1])
//         {
//             cout<<arr[i]<<" ";
//             while(arr[i]==arr[i+1])
//             i++;

//         }
//     }
// }

//method 2
void find_duplicate(vi arr){
   
    int n=arr.size();
    for(int i=0;i<arr.size();i++)
    {
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }

   for(int i=0;i<arr.size();i++){
    if(arr[i]>=2*n)
    cout<<i<<" ";
   }

    cout<<endl;
}

int main(){

    vi a={1, 2, 3, 6, 3, 6, 1};
    
    find_duplicate(a);
    return 0;
}