#pragma GCC optimize ("Ofast")

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
typedef map<pll,ll> mpll;
typedef map<ll,ll> mll;
typedef map<char,ll> mcll;
typedef map<pair<char,ll>,ll> mpcll;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

const int M=1e9+7;

void solve()
{
   ll n;cin>>n;
   vll v(n+1);v[0]=0;
   for(int i=1;i<=n;i++)
   {
    cin>>v[i];
   }
   sort(v.begin(),v.end());
   for(int i=0;i<=n;i++)
   {
    if(v[i]!=i)
    {
        cout<<i<<endl;
        return;
    }
   }
   cout<<n+1<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
       int t=1;//cin>>t;
       while(t--) 
       {
        solve();
       }
    
}
