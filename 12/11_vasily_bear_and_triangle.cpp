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
  ll x,y;
  cin>>x>>y;
  vpll v;pll p;
  v.push_back({0,(abs(x)+abs(y))*(y/abs(y))});
  v.push_back({(abs(x)+abs(y))*(x/abs(x)),0});
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i].first<<" "<<v[i].second<<" ";
  }
  cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
        solve();
    
}
