#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//method 1
// int countMajority(vi a,int k){
//     int ans=0;
//     for(int i=0;i<a.size();i++){
//          int c=1;
//          for(int j=i+1;j<a.size();j++){
//             if(a[j]==a[i])
//             c++;
//          }
//          if(c>(a.size()/k))
//          ans++;

//     }
//     return ans;
// }
//method 2

// int countMajority(vi a,int k){
//     int ans=0;
//     int j=0;
//     sort(a.begin(),a.end());
//     for(int i=1;i<a.size();i++){
//         if(a[i]==a[i-1])
//         {
//         continue;
//         }else{
//           if((i-j)>(a.size()/k))
//           ans++;
//           j=i;
//         }

//     }
//     if(a[a.size()-1]==a[a.size()-2])
//     if(a.size()-j>(a.size()/k))
//     ans++;

//     return ans;
// }
//method 3
int countMajority(vi a,int k){
    int ans=0;
    unordered_map<int,int> m;
    for(int i=0;i<a.size();i++)
    m[a[i]]++;

    

    for(auto i:m)
    if(i.second>(a.size()/k))
    {ans++;
   }
   
    

    return ans;

}

int main(){
    vi a={9, 8, 7, 9, 2, 9, 7};
    int k=3;
    cout<<countMajority(a,k);

return 0;
}