#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll min=1e11,max=-1;
    ll temp1,temp2;
    pair<ll,ll> ans;
    ll pos;
    for(int i=1;i<=n;i++)
    {
       cin>>temp1>>temp2;
       if(temp1<=min && temp2>=max)
       {
        
        ans.first=temp1;ans.second=temp2;
        pos=i;
       }
       if(temp1<min)
       {
        min=temp1;
       }
       if(temp2>max)
       {
        max=temp2;
       }
       
    }
    if(min==ans.first && max==ans.second)
    {
        cout<<pos<<endl;
    }
    else cout<<-1<<endl;
}
