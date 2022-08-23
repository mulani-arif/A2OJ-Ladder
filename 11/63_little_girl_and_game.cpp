#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    map<char,vector<int>> mp;
    for(int i=0;i<s.size();i++)
    {
       mp[s[i]].push_back(i);
    }
    /*for(auto &it:mp)
    {
        cout<<it.first<<" "<<it.second.size()<<"\n";
    }*/
    int sum_odd=0;
    for(auto &it: mp)
    {
        if(it.second.size()&1)
        {
          sum_odd+=1;
        }
    }
    if(sum_odd==0) cout<<"First\n";//if all char are in even no. so removing any one char will give palindrome
    else if(sum_odd&1) cout<<"First\n";
    else cout<<"Second\n";

    

}
