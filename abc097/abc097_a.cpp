#include<bits/stdc++.h>

using namespace std;

int a,b,c,d;

int main(){
  cin>>a>>b>>c>>d;
  if((abs(a-b)<=d&&abs(b-c)<=d)||abs(a-c)<=d)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}