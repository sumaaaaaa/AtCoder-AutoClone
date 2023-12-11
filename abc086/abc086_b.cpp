#include<bits/stdc++.h>

using namespace std;

int a,b,ans,p,q;

int main(){
  cin>>a>>b;
  for(int i=b;i>=10;i++){
    i/=10;
    p++;
  }
  for(int i=0;i<=p;i++){
    a*=10;
  }
  ans=a+b;

  for(int i=1;i*i<=ans;i++){
    if(i*i==ans){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
}
