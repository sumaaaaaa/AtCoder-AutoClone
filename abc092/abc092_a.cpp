#include <bits/stdc++.h>

using namespace std;

int a,b,c,d;
priority_queue<int,vector<int>,greater<int> > x,y;

int main(){
  cin >> a >> b>> c>>d;
  x.push(a);
  x.push(b);
  y.push(c);
  y.push(d);
  cout << x.top()+y.top() << endl;
}
