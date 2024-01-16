#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//method 1
// int getPair(vi a,int k){
//     int c=0;
//     for(int i=0;i<a.size();i++){
//         for(int j=i+1;j<a.size();j++){
//             if(a[i]+a[j]==k)
//             c++;
//         }
//     }
//     return c;
// }

//method 2
// int getPair(vi a,int k){
//     int c=0;
//     sort(a.begin(),a.end());
//     for(int i=0;i<a.size();i++){
//         int t=k-a[i];
//        int u=upper_bound(a.begin()+i+1,a.end(),t)-a.begin();
//        int l=lower_bound(a.begin()+i+1,a.end(),t)-a.begin();
//        c+=u-l;
        
//     }
//     return c;
// }
//method 3

int getPair(vi a,int k){
    int c=0;
    unordered_map<int,int> m;
    for(int i=0;i<a.size();i++){
        if(m.find(k-a[i])!=m.end()){c+=m[k-a[i]];}
        m[a[i]]++;
    }
    return c;
}
int main(){

    vi a= {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    int k=11;
    cout<<getPair(a,k);

return 0;
}