#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110];
    int count_cap=0,count_small=0;
    fgets(s,110,stdin);
    for(int i=0;i<strlen(s);i++)
    {
       if(s[i]>='A' && s[i]<='Z')
       {
        count_cap++;
       }
       if(s[i]>='a' && s[i]<='z')
       {
        count_small++;
       }
    }
    if(count_cap>count_small)
    {
        for(int i=0;i<strlen(s)-1;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {

            }
            else
            {
                s[i]=s[i]-32;
            }
            cout<<s[i];
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<strlen(s)-1;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {

            }
            else
            {
                s[i]=s[i]+32;
            }
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}