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
const int M=1e9+10;

void solve()
{
  ll n,k;
  cin>>n>>k;
  ll mx=INT_MIN;
  ll f,t;
  for(int i=0;i<n;i++)
  {
    cin>>f>>t;
    ll temp=f-(t-k);
    if(t>k)
    {
        mx=max(mx,temp);
    }
    else mx=max(mx,f);
  }
  cout<<mx<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
        solve();
    
}
