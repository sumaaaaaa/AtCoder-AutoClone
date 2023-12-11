#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e;
int l[13]={0,1,3,1,2,1,2,1,1,2,1,2,1};
char A,B,C;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> a>>b;
  if(b%a==0)o(b/a);
  else o(b/a+1);
}
  