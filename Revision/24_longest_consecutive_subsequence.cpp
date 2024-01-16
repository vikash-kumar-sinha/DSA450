#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//method 1
// int longestSubsequence(vi a){
//     int ans=1;
//     vi b;
//     int la=0;
//     set<int> s;
//     for(int i:a)
//     s.insert(i);
//    set<int>::iterator it=s.begin();

//    while(it!=s.end()){
    
//     b.push_back(*it);
//     it++;
//    }
  
//    for(int i=1;i<b.size();i++){
//     if(b[i]==b[i-1]+1)
//     ans++;
//     else{
//         la=max(la,ans);
//         ans=1;
//     }

//    }
//    return la;
// }

//method 2

int longestSubsequence(vi a){
    sort(a.begin(),a.end());
  
    int ans=0;
    int count=1;
    for(int i=1;i<a.size();i++){
       if(a[i]-a[i-1]==0)
       continue;
       else if(a[i]-a[i-1]==1)
       {
        count++;
       }else
       count=1;
       ans=max(ans,count);

    }
    return ans;
}

int main(){
    vi a= {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42};
    cout<<longestSubsequence(a);

return 0;
}