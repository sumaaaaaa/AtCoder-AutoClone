#include <bits/stdc++.h>

#define o(output) cout << output << endl
#define priolity_queue pq
#define push p
#define top t

using namespace std;

string s,t;
int a,b,c,d;

int main(){
  cin >> a>>b;
  if((a+b)%3==0 || a%3==0||b%3==0) o("Possible");
  else o("Impossible");
}
  