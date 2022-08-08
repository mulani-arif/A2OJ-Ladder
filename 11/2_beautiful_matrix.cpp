#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    int ith,jth;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                ith=i;
                jth=j;
            }
        }
    }
    cout<<abs(ith-2)+abs(jth-2)<<endl;
    return 0;
}