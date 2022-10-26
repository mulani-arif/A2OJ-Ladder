#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int hsh[1000010]={0};
int divisors(int n)
{
    int ct=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ct++;
        if(n/i!=i) ct++;
        }
    }
    return ct;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   
    int a,b,c;
    cin>>a>>b>>c;
    ll ans=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                  if(hsh[i*j*k]==0)
                  {
                    hsh[i*j*k]=divisors(i*j*k);
                  }
                ans=(ans+hsh[i*j*k])%1073741824;
            }
        }
    }
    cout<<ans<<endl;
   
}
    
