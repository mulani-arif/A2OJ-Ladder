#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> v;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(s>v[i].first)
        {
           s+=v[i].second;
        }
        else
        {
            flag=1;
            cout<<"NO\n";
            break;
        }
    }
    if(flag==0) cout<<"YES\n";
}
