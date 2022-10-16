#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll> v;
    int y,k,n;
    cin>>y>>k>>n;
    if(((y/k)+1)*k<=n)
    {
        int first=n-(n%k)-y;
       // v.push_back(first);
        while(first>0)
        {
            v.push_back(first);
            first-=k;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
    else cout<<-1<<endl;
}
