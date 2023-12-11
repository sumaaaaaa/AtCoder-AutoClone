#include <bits/stdc++.h>

using namespace std;

int A,B,X;

int main(){
  cin >> A >> B >> X;
  if(A+B>=X && A <= X){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
