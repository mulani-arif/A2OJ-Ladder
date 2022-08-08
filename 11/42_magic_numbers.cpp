#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    char arr[11];
    fgets(arr,11,stdin);
    arr[strlen(arr)-1]='\n';
    //cout<<arr<<endl;
    for(int i=0;i<strlen(arr)-1;i++)
    {
        
        
        if(arr[i]=='1' && arr[i+1]=='4' && arr[i+2]=='4')
        {
            flag=1;
            i+=2;
        }
        else if(arr[i]=='1' && arr[i+1]=='4')
        {
            flag=1;
            i++;
        }
       else if(arr[i]=='1')
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==0) cout<<"NO\n";
    else if(flag==1) cout<<"YES\n";

}