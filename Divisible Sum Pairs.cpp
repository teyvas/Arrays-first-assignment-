#include<iostream>
using namespace std;
int main(){
      int n,k,a[10000],count=0;
      cin>>n>>k;
      for (int i = 0; i <n; i++)
      {
            cin>>a[i];
      }
      for (int i = 0; i <n; i++)
      {
            for (int j = i+1; j <n; j++)
            {
                  if((a[i]+a[j])%k==0){
                        count++;
                  }
            }
      }
      
      cout<<count;
}