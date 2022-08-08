#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos_min,pos_max,max=0,min=1000;
    cin>>n;
    int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]>max)
    {
    max=a[i];
    pos_max=i;
    }
  }
  for(int i=n-1;i>=0;i--)
  {
    if(a[i]<min)
    {
        min=a[i];
        pos_min=i;
    }
  }
  if(pos_min<pos_max)
  {
    cout<<pos_max+n-2-pos_min<<endl;
  }
  else
  {
    cout<<pos_max+n-1-pos_min<<endl;
  }
  
    return 0;
}