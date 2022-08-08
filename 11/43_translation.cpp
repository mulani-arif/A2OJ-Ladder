#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110];
    fgets(s,110,stdin);
    char t[110];
    fgets(t,110,stdin);
    int flag=0;
    //cout<<s<<strlen(s)<<endl;
    //cout<<t<<strlen(t)<<endl;
    if(strlen(s)==strlen(t))
    {
    for(int i=0;i<strlen(s)-1;i++)
    {
       if(s[i]!=t[strlen(t)-i-2])
       {
        flag=1;
        cout<<"NO\n";
        break;
       }
    }
    }
    else
    {
        flag=1;
        cout<<"NO\n";
    }
    if(flag==0) cout<<"YES\n";
}
