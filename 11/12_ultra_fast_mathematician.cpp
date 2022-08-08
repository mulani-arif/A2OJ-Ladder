#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[110],b[110];
    cin>>a>>b;
    //char c[strlen(b)+1];
    for(int i=0;i<strlen(b);i++)
    {
       int x=(a[i]-'0')^(b[i]-'0');
       cout<<x;
    }
    cout<<endl;

    return 0;
}