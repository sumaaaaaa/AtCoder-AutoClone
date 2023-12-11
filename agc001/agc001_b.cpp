#include<stdio.h>
#include<algorithm>

long long n,m,a;

main(){
    scanf("%ld%ld",&n,&m);
    a=n-std::__gcd(n,m);
    printf("%ld",a+a+a);
}
