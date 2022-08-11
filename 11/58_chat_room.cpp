#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[110];
    fgets(arr,110,stdin);
    int flagh=0,flage=0,flagl=0,flago=0;
    for(int i=0;i<strlen(arr)-1;i++)
    {
        if(arr[i]=='h')
        {
            flagh=1;
           // cout<<"lvl 1 clear\n";
        }
        else if(arr[i]=='e' && flagh==1)
        {
            flage=1;
           // cout<<"lvl 2 clear\n";
        }
        else if(flage==1 && arr[i]=='l' && flagl==0)
        {
            flagl=1;
           // cout<<"lvl 3 clear\n";
        }
        else if(flagl==1 && arr[i]=='l')
        {
            flagl=2;
            // cout<<"lvl 4 clear\n";
        }
        else if(flagl==2 && arr[i]=='o')
        {
            flago=1;
           // cout<<"lvl 5 clear\n";
            break;
        }
        
    }
    if(flago==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
