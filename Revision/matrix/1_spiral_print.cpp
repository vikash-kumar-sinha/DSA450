#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";

void printspiral(vector<vector<int>>a,int r,int c){
    int l=r/2;
    int m=c/2;
    int d=r;
    int i;
    for(i=0;i<l&&i<m;i++){
       
        for(int j=i;j<c-1;j++)
        cout<<a[i][j]<<" ";
        for(int j=i;j<r-1;j++)
        cout<<a[j][c-1]<<" ";
        for(int j=c-1;j>i;j--)
        cout<<a[r-1][j]<<" ";
        for(int j=r-1;j>i;j--)
        cout<<a[j][i]<<" ";

        c--;r--;
    }
    if(c>=2 &&d%2==1&&r>=2)
    {for(int l=i;l<=c-1;l++)
    cout<<a[i][l]<<" ";
    }

   else if(r>=2&&d%2==1&&c>=2)
    for(int l=i;l<=r-1;l++)
    cout<<a[l][i]<<" ";
}

int main(){
    vector<vector<int>>a={{1,2,11},
    {3,4,12},{5,6,13},{7,8,14},{9,10,15}};

                    printspiral(a,5,3);

return 0;
}