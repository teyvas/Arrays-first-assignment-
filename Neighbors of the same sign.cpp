#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]>0 and a[i-1]>0){
            cout<<a[i-1]<<" "<<a[i]<<endl;
        }
        else if(a[i]<0 and a[i-1]<0){
            cout<<a[i-1]<<" "<<a[i]<<endl;
        }
    }
}