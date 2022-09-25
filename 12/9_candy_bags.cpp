#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int max=pow(n,2);
    vector<vector<int>> ans;
   
    
    for(int i=1;i<=n;i++)
    {
        int index=i;
        vector<int> subset;
        for(int j=0;j<n/2;j++)
        {
           int a=index;
           subset.push_back(a);
           int b=max+1-index;
            subset.push_back(b);
           index+=n;
        }
        ans.push_back(subset);
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
