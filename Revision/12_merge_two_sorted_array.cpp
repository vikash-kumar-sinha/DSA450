#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";

//method 1

// vi mergeSortedArray(vi a,vi b){
//     vi c;
//     int i=0;
//     int j=0;
//     while(i<a.size()&&j<b.size()){
//         c.push_back(a[i++]);
//         c.push_back(b[j++]);
//     }
//     while(i<a.size())
//     c.push_back(a[i++]);
//     while(j<b.size())
//     c.push_back(b[j++]);

//     sort(c.begin(),c.end());
//     return c;
// }

//method 2

// vi mergeSortedArray(vi a, vi b){
//     int i=0;
//     int j=0;
//     vi c;
//     while(i<a.size()&&j<b.size()){
//         if(a[i]<=b[j])
//         c.push_back(a[i++]);
//         else
//         c.push_back(b[j++]);
//     }
//     while(i<a.size())
//     c.push_back(a[i++]);
//     while(j<b.size())
//     c.push_back(b[j++]);

//     return c;

// }
//method 3
vi mergeSortedArray(vi a,vi b){
    map<int,int> m;
    int i=0;
    int j=0;
    while(i<a.size()&&j<b.size())
    {m[a[i++]]++;
    m[b[j++]]++;}
    while(i<a.size())
    m[a[i++]]++;
    while(j<b.size())
    m[b[j++]]++;
    vi c;
    map<int,int>:: iterator p=m.begin();
    while(p!=m.end()){
        for(int i=0;i<p->second;i++)
        {c.push_back(p->first);}
        p++;
    }
return c;
}

int main(){
    vi a={1,12,23,33,34,35};
    vi b={2,7,14,20,23,33,33};
    vi ans=mergeSortedArray(a,b);
    pall(ans);
    el;

return 0;
}