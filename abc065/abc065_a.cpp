#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s;
int a,b,c,d;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> a >> b >>c;
  if(b>=c) o("delicious");
  else if(a>=abs(b-c)) o("safe");
  else o("dangerous");
}
