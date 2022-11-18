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
const int M=1e9+7;

void solve()
{
  int n,m;
  cin>>n>>m;
  int ct=1;
  int i=1;
  while(1)
  {
    if((m-ct)<0)
    {
        cout<<m<<endl;
        return;
    }
    else
    {
        m-=ct;
    }
    ct++;
    i++;
    if(i==n+1)
    {
        i=1;
        ct=1;
    }
  }
  cout<<0<<endl;
 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
        solve();

}
