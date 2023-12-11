#include<bits/stdc++.h>
#define R for(int i=1;i<=N;i++)
using namespace std;main(){int p=2e5,a[p],t[p],N,L;cin>>N>>L;R{cin>>a[i];t[i]=L-a[i];}R if(a[i]>a[i+1])t[i+1]+=t[i];for(int i=N-1;i>0;i--)if(a[i]<a[i+1])t[i]=max(t[i],t[i+1]+(L-a[i]));R L=max(L,t[i]);cout<<L<<endl;}