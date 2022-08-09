#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> v;
  int count=0;
  for(int i=0;i<n;i++)
  {
    int temp;
    cin>>temp;
    v.push_back(temp);
  }
  sort(v.begin(),v.end());
  if(n>=m)
  {
  for(int i=0;i<m;i++)
  {
    if(v[i]<0)
    {
        count+=v[i];
    }
  }
  }
  else
  {
    for(int i=0;i<n;i++)
  {
    if(v[i]<0)
    {
        count+=v[i];
    }
  }
  }
  cout<<count*(-1)<<endl;
}
