#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,i,j;
    cin >> A >> B;
    i=0;
    j=0;
    string C,D;
    C="A:";
    D="B:";

    while (i<A){
        C += ']';
        i++;
    }
    while (j<B){
        D += ']';
        j++;
    }
    cout << C << "\n" << D << endl;
}

