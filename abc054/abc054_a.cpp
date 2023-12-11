#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;
int l[14]={0,13,1,2,3,4,5,6,7,8,9,10,11,12};

int main(){
  cin>>a>>b;
  if(l[a]>l[b])o("Alice");
  else if(l[a]==l[b])o("Draw");
  else o("Bob");
}