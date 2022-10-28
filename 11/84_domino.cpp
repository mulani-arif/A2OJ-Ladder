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
    ll a,b;
    ll suma=0,sumb=0;
    bool diffparity=false;
    while(n--)
    {
        cin>>a>>b;
        suma+=a;sumb+=b;
        if((a+b)&1) diffparity=true;
    }
    if((suma+sumb)&1) cout<<-1<<endl;
    else if(suma&1 && sumb&1)
    {
        if(diffparity) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    else cout<<0<<endl;

}
