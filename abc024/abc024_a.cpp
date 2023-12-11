#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e,f;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >>a>>b>>c>>d>>e>>f;
  if(e+f>=d)o(a*e+b*f-(e+f)*c);
  else o(a*e+b*f);
}