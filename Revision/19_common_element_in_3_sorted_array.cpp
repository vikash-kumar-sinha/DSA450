#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//method 1
// vi getElements(vi a,vi b,vi c){
//     vi ans;
//     for(int i=0;i<a.size();i++){
//         int t=a[i];
//          auto x=binary_search(b.begin(),b.end(),t);
//          auto y=binary_search(c.begin(),c.end(),t);
//         if(x==true&&y==true)
//         ans.push_back(t);
//     }
//     return ans;
// }

//method 2
// vi getElements(vi a,vi b,vi c){
//     vi ans;
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size()&&j<b.size()&&k<c.size()){
//         if(a[i]==b[j]&&b[j]==c[k]){
//         ans.push_back(a[i]);
//         i++;j++;k++;
//         }
//         else if(a[i]<b[j]&&a[i]<c[k])
//         i++;
//         else if(b[j]<c[k])
//         j++;
//         else
//         k++;
//     }
//     return ans;
// }
//method 3 my method
vi getElements(vi a,vi b,vi c){
    vi ans1;
    vi ans2;
    set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(ans1));
    set_intersection(ans1.begin(),ans1.end(),c.begin(),c.end(),back_inserter(ans2));
    return ans2;

}

int main(){
    vi a={1, 5, 10, 20, 40, 80} ;
    vi b={6, 7, 20, 80, 100};
    vi c={3, 4, 15, 20, 30, 70, 80, 120} ;
    vi ans=getElements(a,b,c);
    pall(ans);
    el; 

return 0;
}