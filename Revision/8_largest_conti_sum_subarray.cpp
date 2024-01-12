#include<bits/stdc++.h>
using namespace std;

//this just give the largest sum possible
// int largest_sum(int arr[],int n){
//     int maxi=arr[0];
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         maxi=max(maxi,sum);
//         if(sum<0)
//         sum=0;
//     }
//     return maxi;
// }

//this will give index of subarray of largest sum
struct ans{
    int s;
    int e;
};

ans largest_sum(int arr[],int n){
int max_sum_till_now=arr[0];
int max_sum_ending_here=0;
int start,end,s;
for(int i=0;i<n;i++){
    max_sum_ending_here+=arr[i];
    if(max_sum_ending_here>max_sum_till_now){
        max_sum_till_now=max_sum_ending_here;
        start=s;
        end=i;
    }
    if(max_sum_ending_here<0)
    {
        max_sum_ending_here=0;
        s=i+1;
    }
}
ans p;
p.s=start;
p.e=end;
return p;
}
int main(){
    int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=8;
   // cout<<largest_sum(a,n)<<endl;
   ans b=largest_sum(a,n);
   cout<<b.s<<" "<<b.e<<endl;
    return 0;
}