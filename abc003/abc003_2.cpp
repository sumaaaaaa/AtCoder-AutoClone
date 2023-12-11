#include <bits/stdc++.h>

using namespace std;

string s,t;

int main(){
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if(s[i]=='@'){
            if(t[i]!='a'&&t[i]!='t'&&t[i]!='c'&&t[i]!='o'&&t[i]!='d'&&t[i]!='e'&&t[i]!='r'&&t[i]!='@'){
                    cout<<"You will lose"<<endl;
                    return 0;
            }
        }
        if(t[i]=='@'){
            if(s[i]!='a'&&s[i]!='t'&&s[i]!='c'&&s[i]!='o'&&s[i]!='d'&&s[i]!='e'&&s[i]!='r'&&s[i]!='@'){
                    cout<<"You will lose"<<endl;
                    return 0;
            }
        }
        if(s[i]!=t[i]&&s[i]!='@'&&t[i]!='@'){
            cout<<"You will lose"<<endl;
            return 0;
        }
    }
    cout<<"You can win"<<endl;
}
