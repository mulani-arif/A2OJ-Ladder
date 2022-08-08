#include<bits/stdc++.h>
using namespace std;
int main()
{
    int frnds,total_fing=0;
    cin>>frnds;
    for(int i=0;i<frnds;i++)
    {
        int fingers;
        cin>>fingers;
        total_fing+=fingers;
    }
    int count=0;
    for(int i=1;i<=5;i++)
    {
        if(!((i+total_fing)%(frnds+1)==1))
        {
            count++;
        }
    }
   cout<<count<<endl;
}