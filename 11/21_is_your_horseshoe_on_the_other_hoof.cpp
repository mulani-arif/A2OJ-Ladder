#include<bits/stdc++.h>
using namespace std;

int is_repeated(int key,int b[],int len)
{
    for(int i=0;i<len;i++)
    {
        if(b[i]==key)
        {
            return 1;
        }
        
    }
    return -1;
}


int main()
{
    int a[4];
    int count=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    int b[4];
    b[0]=a[0];
    int len=1;
    for(int i=1;i<4;i++)
    {
        if(is_repeated(a[i],b,len)==1)
        {
            count++;
        }
        else
        {
           len++;
           b[len-1]=a[i];
        }
    }

  cout<<count<<endl;
    return 0;
}