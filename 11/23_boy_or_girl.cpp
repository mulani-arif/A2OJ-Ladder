#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
    int a[26]={0};
    int count=0;
    cin>>name;
    for(int i=0;i<strlen(name);i++)
    {
        a[name[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]>0) count++;
    }
    if(count&1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}