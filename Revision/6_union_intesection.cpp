#include<bits/stdc++.h>
using namespace std;
//method 1

// vector<int> getUnion(vector<int> u,vector<int>v){
//     vector<int>ans;
//     set<int>s;
//     for(int i=0;i<u.size();i++)
//     s.insert(u[i]);
//     for(int i=0;i<v.size();i++)
//     s.insert(v[i]);

//    set<int>::iterator it=s.begin();
//    while(it!=s.end())
//    {ans.push_back(*it);
  
//    it++;
//    }

//     return ans;
// }
//method 2

// vector<int> getUnion(vector<int> u,vector<int> v){
//     vector<int>ans;
//     map<int,int> m;
//     for(int i=0;i<u.size();i++)
//     m[u[i]]++;
//     for(int i=0;i<v.size();i++)
//     m[v[i]]++;

//     map<int,int> ::iterator it=m.begin();
//     while(it!=m.end()){
//         ans.push_back(it->first);
//         it++;

//     }
//     return ans;
// }
//method 2 my method
// vector<int> getUnion(vector<int> u,vector<int>v){
//     vector<int> ans;

//     int i=0,j=0;
//     while(i<u.size()&&j<v.size()){
//         if(u[i]<=v[j])
//         {
//             if(ans.size()>0 && ans[ans.size()-1]!=u[i])
//             ans.push_back(u[i]);
//             else if(ans.size()==0)
//             ans.push_back(u[i]);
//             i++;

//         }else{
//             if(ans.size()>0 && ans[ans.size()-1]!=v[j])
//             ans.push_back(v[j]);
//             else if(ans.size()==0)
//             ans.push_back(v[j]);
//             j++;
//         }
//     }
//     while(i<u.size())
//     {
//         if(ans.size()>0 && ans[ans.size()-1]!=u[i])
//             ans.push_back(u[i]);
//             else if(ans.size()==0)
//             ans.push_back(u[i]);
//             i++;
//     }
//     while(j<v.size())
//     {
//         if(ans.size()>0 && ans[ans.size()-1]!=v[j])
//             ans.push_back(v[j]);
//             else if(ans.size()==0)
//             ans.push_back(v[j]);
//             j++;
//     }
//     return ans;
// }

//method 4
// vector<int> getUnion(vector<int> u,vector<int>v){
//     vector<int> uni;
//     set_union(u.begin(),u.end(),v.begin(),v.end(),back_inserter(uni));
//     return uni;

// }
//method 1 intersection
// vector<int> getInter(vector<int> u,vector<int>v){
//     vector<int> inter;
//     set_intersection(u.begin(),u.end(),v.begin(),v.end(),back_inserter(inter));
//     return inter;

// }
//method 2 intersection my method
// vector<int> getInter(vector<int> u,vector<int> v){
//     vector<int> ans;
//     if(u.size()<v.size())
//     {
//         for(int i=0;i<u.size();i++)
//         {
//             if(binary_search(v.begin(),v.end(),u[i]))
//             ans.push_back(u[i]);
            
//         }
//       return ans;
//     }
//     else{
//          for(int i=0;i<v.size();i++)
//         {
//             if(binary_search(u.begin(),u.end(),v[i]))
//             ans.push_back(v[i]);
            
//         }
//       return ans;
//     }
// }

//method 3
vector<int> getInter(vector<int> u,vector<int> v){
    vector<int> ans;
    int i=0,j=0;
    while(i<u.size()&&j<v.size()){
        if(u[i]==v[i]){
           ans.push_back(u[i++]);
        }else if(u[i]<v[i])
        i++;
        else
        j++;

    }
    return ans;
}

int main(){
    vector<int> u={1,2,3};
    vector<int> v={1,2,3,4,5,6};
   // vector<int> ans=getUnion(u,v);
   vector<int> ans=getInter(u,v);
    for(int i:ans)
    cout<<i<<" ";
    cout<<endl;


    return 0;
}