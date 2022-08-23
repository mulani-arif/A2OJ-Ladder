#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  map<int,vector<int>> mp;
  for(int i=0;i<n;i++)
  {
    int temp;
    cin>>temp;
    mp[temp].push_back(i);
  }
  set<pair<int,int>> ans;
  for(auto &it:mp)
  {
    if(it.second.size()==1)
    {
        ans.insert({it.first,0});
    }
    else if(it.second.size()==2)
    {
        ans.insert({it.first,it.second[1]-it.second[0]});
    }
    else
    {
        bool flag=true;
        int period=it.second[1]-it.second[0];
        for(int i=2;i<it.second.size();i++)
        {
          if(it.second[i]-it.second[i-1]!=period)
          {
            flag=false;
            break;
          }
        }
        if(flag)
        {
            ans.insert({it.first,period});
        }
    }
  }
  cout<<ans.size()<<"\n";
  for(auto &it:ans)
  {
    cout<<it.first<<" "<<it.second<<"\n";
  }

}
