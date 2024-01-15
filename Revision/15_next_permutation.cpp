#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";

//method 1

// bool checkPermute(string &s){
//     return next_permutation(s.begin(),s.end());
// }

void reverseString(string &s,int l,int r){
    while(l<r)
    swap(s[l++],s[r--]);

}

int binary_search(int s,int e,int key,string word){
int index=-1;
while(s<=e){
    int mid=(s+(e-s)/2);
    if(word[mid]<=key){
        e=mid-1;
    }else{
        s=mid+1;
        if(index==-1||word[index]>=word[mid])
        index=mid;
    }
}
return index;
}

bool checkPermute(string &s){
   
int i=s.size()-2;
while(s[i+1]<s[i]&&i>=0)
--i;
if(i<0)
return false;
else{
   
int index=binary_search(i+1,s.size()-1,s[i],s);

swap(s[i],s[index]);

reverse(s.begin()+i+1,s.end());
//reverseString(s,i+1,s.size()-1);


return true;
}

}

int main(){
    string s="abedc";
    if(checkPermute(s))
    cout<<s<<endl;
    else
    cout<<"not possible"<<endl;

return 0;
}