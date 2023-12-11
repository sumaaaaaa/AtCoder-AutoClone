#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s,t,u;
int a,b,c,d,e;
priority_queue<int,vector<int>,greater<int> >small;

int main(){
  cin >> s>>b;
  cout << s[(b-1)/5]<<s[(b-1)%5] <<endl;
}
