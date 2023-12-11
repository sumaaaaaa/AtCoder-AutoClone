#include<bits/stdc++.h>

using namespace std;

int ans[3];
int a,b,c,k,p,q,r;

int main(){
  cin>>a>>b>>c>>k;
  p=a;
  q=b;
  r=c;
  for(int i=0;i<k;i++){
    p*=2;
    q*=2;
    r*=2;
  }
  if(a>=b&&a>=c)cout<<p+b+c<<endl;
  else if(b>=c&&b>=a)cout<<a+q+c<<endl;
  else if(c>=b&&c>=a)cout<<a+b+r<<endl;
}
