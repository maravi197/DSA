#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;cin>>n;
      for(int i=1;i<=n;i++){
                 int j=1;
                 int k=i;
                 while(k--){
                    cout<<j;
                    j++;
                 }
                 int p=2*n-2*i;
                 while(p--){
                    cout<<" ";
                    j++;
                 }
                 k=i;
                 while(k--){
                    cout<<2*n-j+1;
                    j++;
                 }
              cout<<endl;
          }
}