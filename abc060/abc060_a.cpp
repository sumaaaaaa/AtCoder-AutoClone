#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d;
int l[13]={0,1,3,1,2,1,2,1,1,2,1,2,1};
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> s >> t >>u;
  if(s.back()==t.front()&&t.back()==u.front())o("YES");
  else o("NO");
}