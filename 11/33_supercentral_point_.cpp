#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    int count1=0,count2=0,count3=0,count4=0,final_count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]==x[j] && y[i]>y[j]) count1++;
                else if(x[i]==x[j] && y[i]<y[j]) count2++;
                else if(x[i]>x[j] && y[i]==y[j]) count3++;
                else if(x[i]<x[j] && y[i]==y[j]) count4++;
            }
            //cout<<"count of "<<j<<" is "<<count<<endl;
        }
        if(count1>=1 && count2>=1 && count3>=1 && count4>=1) final_count++;
        count1=0;
        count2=0;
        count3=0;
        count4=0;
    }
    cout<<final_count<<endl;
}