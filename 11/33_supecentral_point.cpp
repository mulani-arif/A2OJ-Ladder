#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    int count1=0,count2=0,count3=0,count4=0,final_count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
              if(v[i].first==v[j].first && v[i].second>v[j].second)
              {
                count1++;
              }
              else if(v[i].first==v[j].first && v[i].second<v[j].second)
              {
                count2++;
              }
              else if(v[i].first>v[j].first && v[i].second==v[j].second)
              {
                count3++;
              }
              else if(v[i].first<v[j].first && v[i].second==v[j].second)
              {
                count4++;
              }
              
        }
        if(count1>=1 && count2>=1 && count3>=1 && count4>=1) final_count++;
        count1=0;
        count2=0;
        count3=0;
        count4=0;
    }
    cout<<final_count<<endl;
}