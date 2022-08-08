#include<bits/stdc++.h>
using namespace std;

struct strings
{
    char word[110];
};
int main()
{
    int n;
    cin>>n;
    struct strings data[n+1];
    for(int i=0;i<n+1;i++)
    {
        fgets(data[i].word,110,stdin);
        //fgets add \n at end means new line update \n with \0 so new line can be terminated
        data[i].word[strlen(data[i].word)-1]='\0';
    }

    for(int i=0;i<n+1;i++)
    {
        if(strlen(data[i].word)<=10)
        {
            cout<<data[i].word<<endl;
        }
        else
        {
            cout<<data[i].word[0]<<strlen(data[i].word)-2<<data[i].word[strlen(data[i].word)-1]<<endl;

        }
    }
    return 0;
}