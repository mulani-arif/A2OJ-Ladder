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
  int n;
  cin>>n;
  ll even=0,odd=0,sum=0;
  for(int i=0;i<n;i++)
  {
    ll temp;cin>>temp;
    if(temp&1) odd+=1;
    else even+=1;
    sum+=temp;
  }
  if(sum&1) cout<<odd<<endl;
  else cout<<even<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
        solve();
    
}
