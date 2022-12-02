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
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
const int M=1e9+7;

void solve()
{
  mcll m;
  ll n,k;cin>>n>>k;
  string s;cin>>s;
  for(ll i=0;i<n;i++)
  {
    m[s[i]]++;
  }
  vll v;
  for(auto &it:m)
  {
    //cout<<it.first<<" "<<it.second<<endl;
    v.push_back(it.second);
  }
  sort(v.rbegin(),v.rend());
  ll ans=0;
  for(ll i=0;i<v.size();i++)
  {
    if(k-v[i]>=0)
    {
        k-=v[i];
        ans+=v[i]*v[i];
    }
    else if(v[i]-k>=0)
    {
        ans+=k*k;
        break;
    }
  }
  cout<<ans<<endl;
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
