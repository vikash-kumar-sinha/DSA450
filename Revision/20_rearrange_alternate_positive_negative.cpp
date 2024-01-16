#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//this method is when order of elements does not matter.
// vi getAns(vi &a){
//     int c=0;
//     int i;
//     sort(a.begin(),a.end());
//     for(i=0;i<a.size();i++)
//     if(a[i]<0)
//     c++;
//     else
//     break;
//   int index=1;
//     while(c-1!=0){
//       swap(a[index],a[i]);
//       i++;
//       index+=2;
//       c--;
//     }
//     return a;

// }
//when order matters method 1
void getAns(vi &a){
    
    int f=0;
    for(int i=0;i<a.size();)
    {
        if((i%2==0&&a[i]<0)||(i%2==1&&a[i]>=0)){
            f=1;
        }
        else f=0;

        if(f==1)
        i++;
        else{
            int j;
            for(j=i+1;j<a.size();j++)
            {
               if(a[i]<0){
                if(a[j]>0)
                break;
               }else{
                if(a[j]<0)
                break;
               }
            }
            if(j>=a.size())
            break;
            int t=a[j];
            for(int k=j;k>i;k--){
                a[k]=a[k-1];
            }
            a[i]=t;
            i++;

        }
    }

}

int main(){
    vi a={-1, -2, 3, -4, -1, 4};
    getAns(a);
    pall(a);
    el;

return 0;
}