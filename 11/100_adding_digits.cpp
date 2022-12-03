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
  ll a,b,n;
  cin>>a>>b>>n;
  string s;
  a*=10;
  for(int i=0;i<10;i++)
  {
    if((a+i)%b==0)
    {
      s=to_string(a+i);
      for(int i=0;i<n-1;i++)
      {
        s.push_back('0');
      }
      cout<<s<<endl;
      return;
    }
  }
  cout<<-1<<endl;
  return;
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
