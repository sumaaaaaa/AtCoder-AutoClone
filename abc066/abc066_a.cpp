#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s;
int a,b,c,d;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> a >> b >>c;
  small.push(a);
  small.push(b);
  small.push(c);
  c=small.top();
  small.pop();
  o(c+small.top());
}