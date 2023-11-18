#include<iostream>
using namespace std;
int main(){
    int n,mx=-101,block=0,q,w;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(mx<a[i]) mx=a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(mx==a[i]) block=i;
    }

    q=a[n-1];

    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==a[block])
        {
            w=a[i];
            a[i]=q;
            break;
        } 
        
    }
    a[n-1]=w;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}