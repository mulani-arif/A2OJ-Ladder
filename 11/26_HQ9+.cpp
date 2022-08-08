#include<bits/stdc++.h>
using namespace std;
int main()
{
   char word[110];
   int flag=0;
   fgets(word,110,stdin);
   for(int i=0;i<strlen(word);i++)
   {
    if(word[i]=='H' || word[i]=='Q' || word[i]=='9')
    {
        cout<<"YES\n";
        flag=1;
        break;
    }
   }
   if(flag==0)
   {
    cout<<"NO\n";
   }

}