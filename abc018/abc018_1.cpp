#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e,f;
int g[2];
priority_queue<int,vector<int>,greater<int> >small;
vector<int> vec;

int main(){
  d=1;
  f=1;
  e=1;
  cin>>a>>b>>c;
  if(a>b)e++;
  else d++;
  if(a>c)f++;
  else d++;
  if(b>c)f++;
  else e++;
  o(d);
  o(e);
  o(f);
}
