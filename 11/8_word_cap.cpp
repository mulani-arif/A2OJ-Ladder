#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1010];
    int count_cap=0,count_small=0;
    fgets(s,1010,stdin);
    if(s[0]>='a' && s[0]<='z')
    {
       s[0]=s[0]-32;
    }
    for(int i=0;i<strlen(s);i++)
    {
      cout<<s[i];
    }
    cout<<endl;
    return 0;
}