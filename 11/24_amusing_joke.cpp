#include<bits/stdc++.h>
using namespace std;
int main()
{
  char first[110];
  fgets(first,110,stdin);
  char second[110];
  fgets(second,110,stdin);
  char mix[220];
  fgets(mix,220,stdin);
  //cout<<strlen(mix)<<endl;
  //cout<<strlen(first)<<endl;
  //cout<<strlen(second)<<endl;

int a[26]={0};
int b[26]={0};
int c[26]={0};
int flag=0;
  if(!(strlen(mix)+1==strlen(first)+strlen(second)))
  {
    cout<<"NO\n";
    //cout<<"not in else\n";
  }
  else
  {
    for(int i=0;i<strlen(first)-1;i++)
    {
        a[first[i]-65]++;
    }

    for(int i=0;i<strlen(second)-1;i++)
    {
        b[second[i]-65]++;
    }

    for(int i=0;i<strlen(mix)-1;i++)
    {
        c[mix[i]-65]++;
    }

    for(int i=0;i<26;i++)
    {
        if(c[i]!=a[i]+b[i])
        {
            cout<<"NO\n";
            flag=1;
           // cout<<"flag is 1 at"<<i<<endl;
            break;
        }
    }

if(flag==0)
{
    cout<<"YES\n";
}
  }

}