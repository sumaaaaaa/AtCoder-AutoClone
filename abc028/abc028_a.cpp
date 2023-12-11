#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e;
int l[13]={0,1,3,1,2,1,2,1,1,2,1,2,1};
char A,B,C;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> a;
  a=a/10;
  if(a==10)o("Perfect");
  else if(a<6)o("Bad");
  else if(a>=6&&a<9)o("Good");
  else o("Great");
}