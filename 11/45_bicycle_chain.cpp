#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int m;
    cin>>m;
    int b[m];

    int max=0,count=0;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        for(int j=0;j<n;j++)
        {
            if(b[i]%a[j]==0)
            {
                int temp=b[i]/a[j];
                if(temp>max)
                {
                    max=temp;
                    count=1;
                }
                if(temp==max)
                {
                    count+=1;
                }
            }
        }
    }
    cout<<count-1<<endl;

}
