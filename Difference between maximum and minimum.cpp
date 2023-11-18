#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int q[10000],n,mx=-101,mn=101,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q[i];
        if(mx<q[i]) mx=q[i];
        if(mn>q[i]) mn=q[i];
    }
    ans=mx-mn;
    cout<<ans;


}