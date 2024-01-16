#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//method 1
// long long max_product(vi a){
//    //long long p=1;
//    long long maxp=1; 
//    for(int i=0;i<a.size();i++){
//       long long p=a[i];
//        maxp=max(maxp,p);
       
//     for(int j=i+1;j<a.size();j++){
//        p*=a[j];
//        maxp=max(maxp,p);
//        if(p==0)
//        p=1;
//     }
//    }
//    return maxp;
// }

//method 2 not giving correct answer always
// int max_product(vi a){
//     int min_ending_here=a[0];
//     int max_ending_here=a[0];
//     int max_so_far=a[0];
//     for(int i=1;i<a.size();i++){
//         int temp=max({a[i],a[i]*min_ending_here,a[i]*max_ending_here});
//         min_ending_here=min({a[i],a[i]*min_ending_here,a[i]*max_ending_here});
//         max_ending_here=temp;

//         max_so_far=max(max_so_far,max_ending_here);
//     }
//     return max_so_far;
// }
//method 3 best method
int max_product(vi a){
    int max_value=a[0];
    int min_value=a[0];
    int maxp=a[0];

    for(int i=1;i<a.size();i++){
        if(a[i]<0){
            swap(max_value,min_value);
        }
        max_value=max(a[i],a[i]*max_value);
        min_value=min(a[i],a[i]*min_value);

        maxp=max(maxp,max_value);
    }
    return maxp;
}

int main(){
vi a={-1, -3, -10, 0, 60};
cout<<max_product(a);
return 0;
}