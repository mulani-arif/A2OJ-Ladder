#pragma GCC optimize ("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
typedef map<pll,ll> mpll;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
map<char,int> m={{'#',-1},{'.',1}};
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    char grid[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>grid[i][j];
        }
    }
    bool flag=false;
    ll count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          count+=m[grid[i][j]];
          count+=m[grid[i][j+1]];
          count+=m[grid[i+1][j]];
          count+=m[grid[i+1][j+1]];
          if(count<=-2 || count>=2)
          {
            flag=true;break;
          }
          count=0;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";

}
