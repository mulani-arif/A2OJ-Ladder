#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr1[1010];//pseudo array to eliminate problem of getting skip fgets()
    int count[26]={0};
    int flag=0;
    fgets(arr1,1010,stdin);//this will get skip
    char arr[1010];
    fgets(arr,1010,stdin);//successfull input
    arr[strlen(arr)-1]='\0';
   // cout<<arr<<endl;
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        {
        count[arr[i]-97]++;
        }
    }
    for(int i=0;i<26;i++)
    {
       // cout<<count[i]<<endl;
        if(count[i]%n!=0 && count[i]!=0)
        {
            flag=1;
            //cout<<"flag is one now"<<endl;
            cout<<-1<<endl;
            break;
        }
    }
    if(flag==0)
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(count[j]>0)
            {
                for(int k=1;k<=count[j]/n;k++)
                {
                cout<<(char)(j+97);
                }
            }
        }
    }
    cout<<endl;
    }
}
