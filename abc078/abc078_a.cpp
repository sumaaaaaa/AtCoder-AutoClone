#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s;
int a,b,c,d;
char A,B;

int main(){
  cin >> A>> B;
  if(A>B){
    o(">");
  }else if(A==B){
    o("=");
  }else{
    o("<");
  }
}