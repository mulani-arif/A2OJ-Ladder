#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[210];
    fgets(arr,210,stdin);
    int flag=0;
    for(int i=0;i<strlen(arr)-1;i++)
    {
        
            if(arr[i]=='W' && arr[i+1]=='U' && arr[i+2]=='B' && i<strlen(arr)-3)
            {   i+=2;
                if(flag==1)
                {
                    cout<<" ";
                }
                
            }
            else
            {
                cout<<arr[i];
                flag=1;
            }
        
    }
}
