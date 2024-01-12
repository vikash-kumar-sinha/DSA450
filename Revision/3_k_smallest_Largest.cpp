#include<bits/stdc++.h>
using namespace std;

//method 1
// int getKlargest(int arr[],int n,int k){
//    sort(arr,arr+n);
//    return arr[k-1];

// }
//method 2
// int getKlargest(int arr[],int n,int k){
//     set<int> s;
//     for(int i=0;i<n;i++)
//     s.insert(arr[i]);

//     set<int>::iterator it=s.begin();
//     advance(it,k-1);
//     return *it;

// }
//method 3
// int getKlargest(int arr[],int n,int k){
//     priority_queue<int> p;
//     for(int i=0;i<k;i++)
//     p.push(arr[i]);

//     for(int i=k;i<n;i++){
//         if(p.top()>arr[i])
//         {
//             p.pop();
//             p.push(arr[i]);
//         }
//     }

//    return p.top();
// }

//method 1

// int getSmallest(int arr[],int n,int k){
//     sort(arr,arr+n);
//     return arr[n-k];

// }

//method 2
// int getSmallest(int arr[],int n,int k){
//     set<int> s(arr,arr+n);
//     set<int>::iterator it=s.begin();
//     advance(it,n-k);
//     return *it;

// }
//method 3
int getSmallest(int arr[],int n,int  k){
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<k;i++)
    p.push(arr[i]);

    for(int i=k;i<n;i++){
        if(arr[i]>p.top())
        {
            p.pop();
            p.push(arr[i]);
        }
    }
    return p.top();
}


int main(){
    int a[]={1,2,3,4,5};
    int n=5;

   // int ans=getKlargest(a,n,4);
   int ans=getSmallest(a,n,4);
    cout<<ans<<endl;
    return 0;
}