#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;cin>>n;
    map<ll,ll> m;
    for(int i=0;i<n;i++)
    {
       ll temp;cin>>temp;
       m[temp]++;
    }
    ll max=-1;
    for(auto &it:m)
    {
      if(it.second>max)
      {
        max=it.second;
      }
    }
    if(n&1)
    {
        if((n+1)/2>=max)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    else
    {
        if(n/2>=max)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}
