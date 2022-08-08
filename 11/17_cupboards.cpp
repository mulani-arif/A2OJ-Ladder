#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int left[t],right[t];
    int count1_left=0,count0_left=0,count0_right=0,count1_right=0;
    for(int i=0;i<t;i++)
    {
        cin>>left[i];
        if(left[i]==0)
        {
            count0_left++;
        }
        else
        {
            count1_left++;
        }
        cin>>right[i];
        if(right[i]==0)
        {
            count0_right++;
        }
        else
        {
            count1_right++;
        }

    }
    int x=(count0_left<count1_left?count0_left:count1_left)+(count0_right<count1_right?count0_right:count1_right);
    cout<<x<<endl;

    return 0;
}