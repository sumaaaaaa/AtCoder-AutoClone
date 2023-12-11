#include<bits/stdc++.h>
std::string s,t;main(){std::cin>>s>>t;std::sort(s.begin(),s.end());std::sort(t.rbegin(),t.rend());puts(s<t?"Yes":"No");}