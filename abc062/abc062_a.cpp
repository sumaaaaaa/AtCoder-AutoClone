#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s;
int a,b,c,d;
int l[13]={0,1,3,1,2,1,2,1,1,2,1,2,1};
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> a >> b;
  if(l[a]==l[b])o("Yes");
  else o("No");
}