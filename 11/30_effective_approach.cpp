#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main()
{
    int size;
    cin>>size;
    long long start=0;
    long long end=0;
    for(int i=0;i<size;i++)
    {
        int val;
        cin>>val;
        arr[val]=i+1;
    }
    int sizesearch;
    cin>>sizesearch;
    for(int i=0;i<sizesearch;i++)
    {
        int search;
        cin>>search;
        start+=arr[search];
        end+=size-arr[search]+1;
    }
    cout<<start<<" "<<end<<endl;
}