#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
#define fn(a,n) for(int i=a;i<=n;i++)
// method 1
// bool checkSubset(vi a,vi b){
//     int f=1;
//     for(int i=0;i<b.size();i++){
//         for(int j=0;j<a.size();j++)
//         {
//             if(b[i]==a[j])
//             {f=1;break;}
//             else
//             f=0;
//         }
//         if(f==0)
//         return false;
//     }

//     return true;
// }
//method 2
bool checkSubset(vi a,vi b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0;int j=0;
    
    while(i<a.size()&&j<b.size()){
    if(a[i]==b[j])
    {i++;j++;
    }else if(a[i]>b[j])
    break;
    else i++;
}
if(j==b.size())
return true;
else return false;
}



int main(){
    vi a={11, 1, 13, 21, 3, 7};
    vi b={11, 3, 7, 1}  ;
    cout<<checkSubset(a,b);

return 0;
}