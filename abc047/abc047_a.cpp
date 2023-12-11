#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin>>a>>b>>c;
  small.push(a);
  small.push(b);
  small.push(c);
  a=small.top();
  small.pop();
  b=small.top();
  small.pop();
  c=small.top();
  if(a+b==c)o("Yes");
  else o("No");
}