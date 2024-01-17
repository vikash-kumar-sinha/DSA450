#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";

int max_profit(vi a){
    vi p(a.size(),0);
    int max_val=a[a.size()-1];
    for(int i=a.size()-2;i>=0;i--){
        if(a[i]>max_val)
        max_val=a[i];

        p[i]=max(p[i+1],max_val-a[i]);
    }
    int min_val=a[0];
    for(int i=1;i<a.size();i++)
    {
        if(a[i]<min_val)
        min_val=a[i];

        p[i]=max(p[i-1],p[i]+(a[i]-min_val));
    }
    return p[a.size()-1];
}

int main(){
    vi a={90, 80, 70, 60, 50};
    cout<<max_profit(a);

return 0;
}