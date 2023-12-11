#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e;
int l[13]={0,1,3,1,2,1,2,1,1,2,1,2,1};
char A,B,C;
priority_queue<int,vector<int>,greater<int> >small;

int GCD(int p,int q){
  if(q==0)return p;
  return GCD(q,p%q);
}

int main(){
  int i=1;
  cin >>a>>b>>c;
  d=a*b/GCD(a,b);
  while (e<c){
    e=d*i;
    i++;
  }
  cout << e<< endl;
}
