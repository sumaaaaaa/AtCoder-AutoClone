#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d;
int l[13]={0,1,3,1,2,1,2,1,1,2,1,2,1};
char A,B,C;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >>a>>b>>c;
  o(2*a*b+2*a*c+2*b*c);
}