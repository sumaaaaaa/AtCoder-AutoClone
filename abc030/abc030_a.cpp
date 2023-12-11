#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
double e,f;
double a,b,c,d;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> a>>b>>c>>d;
  e=b/a;
  f=d/c;
  if(e>f)o("TAKAHASHI");
  else if(e==f)o("DRAW");
  else o("AOKI");
}