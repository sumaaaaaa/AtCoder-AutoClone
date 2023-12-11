#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e,f;
char A,B;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin>>a>>b>>c>>d;
  if(d>=b&&d<=c)e++;
  for(int i=1;i<a;i++){
    cin >>f;
    d+=f;
    if(d>=b&&d<=c)e++;
  }
  o(e);
}
