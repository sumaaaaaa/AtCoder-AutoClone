#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,a,b,c;
    cin >> x >> a >> b;
    x++;
    cout << x << endl;

    x *= a+b;
    cout << x << endl;

    x *=x;
    cout << x << endl;
    x--;
    cout << x << endl;
}
