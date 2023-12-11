#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s;
int a,b,c,d,e;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> a >> b >>c;
  if(c>=a&&c<=b)o("Yes");
  else o("No");
}