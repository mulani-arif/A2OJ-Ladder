#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110];
    fgets(s,110,stdin);
    int count_1=0,count_2=0,count_3=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='1') count_1++;
        else if(s[i]=='2') count_2++;
        else if(s[i]=='3') count_3++;
    }
    for(int i=1;i<=count_1;i++)
    {
        if(i==count_1) cout<<1;
        else cout<<1<<"+";
    }
    for(int i=1;i<=count_2;i++)
    {
        if(count_1==0 && i<count_2) cout<<2<<"+";
        else if(count_1==0 && i==count_2) cout<<2;
        else cout<<"+"<<2;
    }
    for(int i=1;i<=count_3;i++)
    {
        if(count_1==0 && count_2==0 && i<count_3)
        {
            cout<<3<<"+";
        }
        else if(count_1==0 && count_2==0 && i==count_3)
        {
            cout<<3;
        }
        else cout<<"+"<<3;
    }

    cout<<endl;

    return 0;
}