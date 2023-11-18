#include<iostream>
using namespace std;
int main(){
    int n,mn=101,block=0,q,w;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(mn>a[i]) mn=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(mn==a[i]) block=i;
    }
    q=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[block])
        {
            w=a[i];
            a[i]=q;
            break;
        } 
        
    }
    a[0]=w;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    //new
}