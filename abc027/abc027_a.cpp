#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e;
int l[13]={0,1,3,1,2,1,2,1,1,2,1,2,1};
char A,B,C;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> a>>b>>c;
  if(a==b)o(c);
  else if(a==c)o(b);
  else o(a);
}