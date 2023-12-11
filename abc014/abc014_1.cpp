#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e,f;
int g[2];
priority_queue<int,vector<int>,greater<int> >small;
vector<int> vec;

int main(){
  cin>>a>>b;
  if(a%b==0)o("0");
  else o(b-a%b);
}