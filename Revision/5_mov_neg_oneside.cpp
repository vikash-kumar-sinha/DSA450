#include<bits/stdc++.h>
// #include<algorithm>
// #include<vector>
using namespace std;
//method 1
// void movNegOneside(vector<int> &arr){
//     // sort(arr.begin(),arr.end(),greater<int>());
//     sort(arr.begin(),arr.end());
// }

//method 2
// void movNegOneside(vector<int> &arr){
//     int i=0;
//     int j=0;
//     while(i<=arr.size()-1){
//         if(arr[i]<0){
//             if(i!=j)
//             swap(arr[i],arr[j++]);
//             i++;
//         }else
//         i++;
//     }
// }

//method 3
void movNegOneside(vector<int> &arr)
{
    int i=0;
    int j=arr.size()-1;
    while(i<=j){
        if(arr[i]<0 && arr[j]<0)
        i++;
        else if(arr[i]>=0 && arr[j]>=0)
        j--;
        else if(arr[i]>=0 && arr[j]<0)
        swap(arr[i++],arr[j--]);
        else
        {
            i++;j--;
        }
    }
}

int main(){
    vector<int> a={2,-4,5,-5,1,1,-9,-10,-2,8};
    int n=10;

    movNegOneside(a);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}