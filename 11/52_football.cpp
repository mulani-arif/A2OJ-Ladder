#include<bits/stdc++.h>
using namespace std;
int main()
{
   char arr[110];
   fgets(arr,110,stdin);
   int flag=0,count=0;
   for(int i=0;i<strlen(arr)-2;i++)
   {
     if(arr[i]==arr[i+1])
     {
        count++;
     }
     if(count==6)
     {
        flag=1;
        break;
     }
     if(arr[i]!=arr[i+1])
     {
        count=0;
     }
   }
   if(flag==1) cout<<"YES\n";
   else cout<<"NO\n";
}
