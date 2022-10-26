#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<int,vector<int>> m;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;cin>>t;
    int temp;
    for(int i=0;i<2*t;i++)
    {
      cin>>temp;
      m[temp].push_back(i+1);
    }
    bool flag=true;
    int ans1=-1;
    vector<pair<int,int>> ans2;
    for(auto &it:m)
    {
        if(it.second.size()&1)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
       for(auto &it:m)
       {
        for(int i=0;i<it.second.size()/2;i++)
        {
            ans2.push_back({it.second[i],it.second[it.second.size()-1-i]});
        }
       }
    }
    if(flag)
    {
        for(int i=0;i<ans2.size();i++)
        {
            cout<<ans2[i].first<<" "<<ans2[i].second<<endl;
        }
    }
    else cout<<ans1<<endl;
    
 
    
}
    
