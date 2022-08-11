#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    int min=1000;
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m-n+1;i++)
    {
      if((v[i+n-1]-v[i])<min) min=v[i+n-1]-v[i];
    }
    cout<<min<<endl;
}
