#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[210]={};
    fgets(a,210,stdin);
    for(int i=0;i<(strlen(a)-1);i++)
    {
        if(a[i]=='-' && a[i+1]=='-') 
        {
            cout<<2;
            i++;
        }
        else if(a[i]=='-' && a[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else
        {
            cout<<0;
        }
    }
    cout<<endl;

    return 0;
}