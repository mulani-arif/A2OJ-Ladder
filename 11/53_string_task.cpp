#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[110];
    fgets(arr,110,stdin);
    for(int i=0;i<strlen(arr)-1;i++)
    {
        char temp=tolower(arr[i]);
        if(!(temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u' || temp=='y'))
        {
            cout<<"."<<temp;
        }
        else
        {
            continue;
        }
    }
}
