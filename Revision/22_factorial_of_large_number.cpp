#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define el cout<<endl;
#define pall(a) for(int i:a)cout<<i<<" ";
#define piw(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";

vi getFactorial(int n){
    vi ans;
    int x=n;
    
        while(x!=0)
        {         
            ans.push_back(x%10);
            x/=10;
        }
       n--;
    while(n!=0){
        
        int carry=0;
        
       
        for(int i=0;i<ans.size();i++){
            int digit=ans[i]*n+carry;
            if(digit<10)
            {
                ans[i]=digit;
                carry=0;
            }else{
                ans[i]=digit%10;
                carry=digit/10;
            }
        }
        while(carry!=0)
        {
            int a=carry%10;
           ans.push_back(a);
           carry/=10;

        }
        n--;
    }
    return ans;
}

int main(){
    int n=50;
    vi ans=getFactorial(n);
    reverse(ans.begin(),ans.end());
    pall(ans);
    el;

return 0;
}