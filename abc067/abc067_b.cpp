#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s;
int a,b,c,d;
char A,B;
priority_queue<int> pr;

int main(){
  cin>>a>>b;
  for(int i=0;i<a;i++){
    int dispo;
    cin>>dispo;
    pr.push(dispo);
    }
  for(int i=0;i<b;i++){
    c+=pr.top();
  pr.pop();
    }
  o(c);
}