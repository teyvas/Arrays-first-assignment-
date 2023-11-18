#include<iostream>
using namespace std;
int main(){
      int n,q,l;
      int a[101];
      cin>>n;
      for(int i=0;i<n;i++){
            cin>>a[i];
      }
      l=a[n-1];

      for(int i=0;i<n;i+=2){
            q=a[i];
            a[i]=a[i+1];
            a[i+1]=q;
      }
      if(n%2!=0) a[n-1]=l;
      for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
      }
}