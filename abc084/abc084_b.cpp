#include <bits/stdc++.h>

using namespace std;

int a,b;
string s;

int main(){
    cin>>a>>b>>s;

    if(s[a]!='-'){
        cout<<"No"<<endl;
        return 0;
    }

    for(int i=0;i<a;i++){
        if(s[i]<'0'||s[i]>'9'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    for(int i=a+1;i<a+b+1;i++){
        if(s[i]<'0'||s[i]>'9'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
