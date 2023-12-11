#include <bits/stdc++.h>

#define o(output) cout << output << endl
#define priolity_queue pq
#define push p
#define top t

using namespace std;

string s;
int a,b,c,d;
char A,B;

int main(){
  cin >> a >> b >> c;
  if(abs(b-a)>abs(c-a))o("B");
  else o("A");
}