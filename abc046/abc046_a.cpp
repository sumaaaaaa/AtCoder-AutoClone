#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  int ans=3;
  cin>>a>>b>>c;
  if(a==b)ans--;
  if(a==c)ans--;
  if(b==c)ans--;
  if(ans==0)ans++;
  o(ans);
}