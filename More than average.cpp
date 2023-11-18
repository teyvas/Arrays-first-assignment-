#include<iostream>
using namespace std;
int main(){
    double n,sum=0,count=0,s;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    double aver=sum/n;
    
    for(int i=0;i<n;i++){
        if(a[i]>aver){
            s+=a[i];
            count++;
        } 
    }
    cout<<s<<" "<<count;





}