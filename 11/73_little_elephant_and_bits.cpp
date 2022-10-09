#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   string s;
   cin>>s;
   string ans;
   int count=0;
   for(int i=0;i<s.size();i++)
   {
    if(count==1 && s[i]=='0')
    {
        ans.push_back(s[i]);
    }
    else if(s[i]=='0' && count==0)
     {
        count=1;
     }
    if(s[i]=='1')
    {
     if(s[i]=='1' && count==0 && i==s.size()-1)
     {
        continue;
     }
     else
     {
        ans.push_back(s[i]);
     }
    }
   }
   cout<<ans<<endl;
}
