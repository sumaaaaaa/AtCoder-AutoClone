#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s;
int a,b,c,d;

int main(){
  cin >> a>>b>>c>>d;
  if(a+b>c+d){
    o("Left");
  }else if(a+b==c+d){
    o("Balanced");
  }else{
    o("Right");
  }
}
