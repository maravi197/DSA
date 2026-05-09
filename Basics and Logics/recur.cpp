#include<bits/stdc++.h>
using namespace std;

void rahul(int n ,int i){
    if(i>n)return;
    cout<<i<<" ";
    rahul(n,i+1);
}

int main(){


    int n;cin>>n;
    rahul(n,1);
}