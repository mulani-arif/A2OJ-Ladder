#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string l1=s1,l2=s2;

    sort(l1.begin(),l1.end());
    sort(l2.begin(),l2.end());

    bool flag=true;
    if(s1.size()!=s2.size() || l1!=l2)
    {
        flag=false;
    }
    else
    {
        int count=0;
        for(int i=0;i<s1.size();i++)
        {
             if(s1[i]!=s2[i])
             {
                count++;
             }
             if(count>2)
             {
                flag=false;
                break;
             }
        }
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
