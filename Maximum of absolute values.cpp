#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float q[10000],n,temp=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q[i];
        if(q[i]<0) q[i]=q[i]*-1;
        if(temp<q[i]) temp=q[i];
    }
    cout<<fixed<<setprecision(2)<<temp;


}