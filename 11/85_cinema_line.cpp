#pragma GCC optimize ("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll ct25=0,ct50=0;
    ll temp;
    bool flag=true;
    while(n--)
    {
        cin>>temp;
       if(temp==25) ct25+=1;
       if(temp==50)
       {
        ct50+=1;
        if(ct25>0)
        {
            ct25-=1;
        }
        else flag=false;
       }
       if(temp==100)
       {
        if(ct50>0 && ct25>0)
        {
            ct50-=1;ct25-=1;
        }
        else if(ct25>2)
        {
            ct25-=3;
        }
        else flag=false;
       }

    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
