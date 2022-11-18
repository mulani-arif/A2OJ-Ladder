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
  ll r,k;
  cin>>r>>k;
  ll temp=k-r+1;
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<r;j++)
    {
        if(i==j) cout<<temp<<" ";
        else cout<<1<<" ";
    }
    cout<<"\n";
  }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
        solve();

}
