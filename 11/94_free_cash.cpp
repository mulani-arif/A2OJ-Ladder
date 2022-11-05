#pragma GCC optimize ("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
typedef map<pll,ll> mpll;
typedef map<ll,ll> mll;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

void solve()
{
   mpll m;
   int n;cin>>n;
   for(int i=0;i<n;i++)
   {
    int a,b;cin>>a>>b;
    m[{a,b}]++;
   }
   ll max=0;
   for(auto &it:m)
   {
       if(it.second>max) max=it.second;
   }
   cout<<max<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
        solve();
    
}
