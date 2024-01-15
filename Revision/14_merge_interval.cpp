#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";

struct interval{
    int s;
    int e;
};
//method 1
bool myComp(interval a,interval b){
    return a.s<b.s;
}

// vector<interval> mergeInterval(vector<interval> arr){
//    sort(arr.begin(),arr.end(),myComp);
//    vector<interval> q;
//    stack<interval> s;
//    s.push(arr[0]);
//    for(int i=1;i<arr.size();i++){
//       if(arr[i].s<=s.top().e)
//       {
       
//         interval t=s.top();
//         t.e=max(t.e,arr[i].e);
//         s.pop();
//         s.push(t);
       

//       }
//       else
//       s.push(arr[i]);
//    }
//    while(!s.empty()){
//      q.push_back(s.top());
//      s.pop();
//    }
//    return q;
// }

//method 2

vector<interval> mergeInterval(vector<interval>arr){
sort(arr.begin(),arr.end(),myComp);
int index=0;
interval temp=arr[index];
for(int i=1;i<arr.size();i++){
if(arr[i].s<=temp.e){
    arr[index].e=max(temp.e,arr[i].e);
}else{
    swap(arr[i],arr[++index]);
    temp=arr[index];
}
}
vector<interval> p;
for(int i=0;i<=index;i++)
p.push_back(arr[i]);

return p;

}

int main(){
vector<interval> a={{1,3},{2,4},{6,8},{9,10}};

vector<interval> ans=mergeInterval(a);
for(auto i:ans){
    cout<<i.s<<" "<<i.e<<endl;
}
el;

return 0;
}