#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//method 1
// int countInversion(vi a){
//     int c=0;
//     for(int i=0;i<a.size();i++){
//         for(int j=i+1;j<a.size();j++)
//         {
//             if(a[j]<a[i])
//             c++;
//         }
//     }
//     return c;
// }

//method 2
int merge(vi a,int s,int mid,int e){
    int n1=mid-s+1;
    int n2=e-mid;
    vi p,q;
    for(int i=0;i<n1;i++)
    p.push_back(a[s+i]);
    for(int i=0;i<n2;i++)
    q.push_back(a[mid+i+1]);
    int c=0;
    int i=0,j=0,k=s;

    while(i<n1&&j<n2){
        if(p[i]<=q[j])
        a[k++]=a[i++];
        else{
            a[k++]=q[j++];
            c+=n1-i;
        }
    }
    while(i<n1)
    a[k++]=p[i++];
    while(j<n2)
    a[k++]=q[j++];
    return c;

}

int mergeSort(vi a,int s,int e){
    int mid,c=0;
    if(s<e){
        mid=s+(e-s)/2;
        c+=mergeSort(a,s,mid);
        c+=mergeSort(a,mid+1,e);
        c+=merge(a,s,mid,e);
    }
    return c;
}

int countInversion(vi a){
    return mergeSort(a,0,a.size()-1);

}

int main(){
vi a= {8, 4, 2, 1};
int ans=countInversion(a);
cout<<ans;
return 0;
}