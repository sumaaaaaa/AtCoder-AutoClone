#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
double e;
int a,b,c,d;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin>>a;
  for(int i=a-1;i>0;i--){
    a+=i;
  }
  o(a);
}