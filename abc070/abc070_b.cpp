#include <bits/stdc++.h>

#define o(output) cout << output << endl
#define priolity_queue pq
#define push p
#define top t

using namespace std;

string s;
int a,b,c,d;
char A,B;
map<char,int> mp;

int main(){
  cin>>a>> b>>c>>d;
  min(b,d)-max(a,c)>=0?o(min(b,d)-max(a,c)):o(0);}