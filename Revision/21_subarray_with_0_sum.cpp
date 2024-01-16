#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//method 1

// bool chechSubarray(vi a){
//     for(int i=0;i<a.size();i++){
//         if(a[i]==0)
//         return true;
//         int s=a[i];
//         for(int j=i+1;j<a.size();j++){
//             s+=a[j];
//             if(s==0)
//             return true;
//         }
//     }
//     return false;
// }
//method 2

bool chechSubarray(vi a){
    set<int> s;
    int sum=0;
    for(int i=0;i<a.size();i++){
        if(s.find(a[i])!=s.end()){
            return true;
        }else{
            s.insert(sum+a[i]);
            sum+=a[i];
        }
    }
    return false;
}

int main(){
    vi a={4, 2, -3, 1, 6};
    cout<<chechSubarray(a)<<endl;

return 0;
}