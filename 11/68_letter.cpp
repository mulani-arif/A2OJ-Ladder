#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    map<char,int> m1,m2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=' ')
        {
            m1[s1[i]]++;
        }
    }
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]!=' ')
        {
            m2[s2[i]]++;
        }
    }
    bool flag=true;
    for(auto &it:m2)
    {
        char temp=it.first;
        if(it.second>m1[temp])
        {
            flag=false;break;
        }
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
