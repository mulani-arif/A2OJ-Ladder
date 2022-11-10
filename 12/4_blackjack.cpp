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
  int rem=n-10;
  if(rem==1 || rem==11) cout<<4<<endl;
  else if(rem>=2 && rem<=9) cout<<4<<endl;
  else if(rem==10) cout<<15<<endl;
  else cout<<0<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
       int t;cin>>t;
        solve();
    
}
