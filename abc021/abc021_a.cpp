#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e,f;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin>>a;
  if(a%2==1){
    a -=1;
    o(1+a/2);
    o(1);
  }else{
    o(a/2);
  }
  for (int i=0;i<a/2;i++){
    o("2");
    a/2;
  }
}