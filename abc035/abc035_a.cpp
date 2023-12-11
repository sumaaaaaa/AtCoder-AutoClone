#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
double e;
int a,b,c,d;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin>>a>>b;
  if(a%16==0&&b%9==0)o("16:9");
  else o("4:3");
}