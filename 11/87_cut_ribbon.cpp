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
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    ll mx=0;
    for(int i=0;i<=4000;i++)
    {
        for(int j=0;j<=4000;j++)
        {
            double x=(n-i*a)-j*b;
            if(x>=0 && ceil(x/c)==floor(x/c)) 
            {
                ll lol=x/c;
                mx=max(mx,lol+i+j);
            } 
        }
    }
    cout<<mx<<endl;
}
