#include<bits/stdc++.h>
using namespace std;
int main()
{
  char word1[110];
  fgets(word1,110,stdin);
  char word2[110];
  fgets(word2,110,stdin);
  int flag=0;
  
  for(int i=0;i<strlen(word1);i++)
  {
    int x=toupper(word1[i]);
    int y=toupper(word2[i]);
    
    if(x>y)
    {
        cout<<1<<endl;
        flag=1;
        break;
    }
    else if(y>x)
    {
        cout<<-1<<endl;
        flag=1;
        break;
    }
  }
  if(flag==0) cout<<0<<endl;
   
 return 0;   
}