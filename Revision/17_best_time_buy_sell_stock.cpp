#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//method 1
int max_profit(vi a){
    vi b(a.size(),0);
    //int maxi=INT_MIN;
    int min_element=a[0];
    for(int i=1;i<a.size();i++){
        if(a[i]<min_element)
        min_element=a[i];
        
        b[i]=max(b[i-1],a[i]-min_element);
    }
    
    return b[a.size()-1];
}

int main(){
      vi a= {7, 6, 4, 3, 1} ;
     // reverse(a.begin(),a.end());
      cout<<max_profit(a);
      el;
return 0;
}