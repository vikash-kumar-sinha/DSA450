#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";

bool check(string a,string b){
    //map<char,int>ma;
    map<char,int> mb;
    // for(int i=0;i<a.length();i++)
    // ma[a[i]]++;
    if(a.size()>b.size())
    return false;
    for(int i=0;i<b.length();i++){
     mb[b[i]]++;
    }
    map<char,int>::iterator it=mb.begin();


    for(int i=0;i<a.length();i++){
        if(mb.find(a[i])==mb.end()||mb[a[i]]==0)
        return false;
        else{
            
            mb[a[i]]--;
        }
    }

return true;
}

int main(){
    string a="roseyellow";
    string b="yellow";

    cout<<check(a,b)<<endl;

return 0;
}