#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,A,x;
    char op;
    scanf("%d %d",&N,&A);
    for (int i=1;i<=N;i++){
        scanf(" %c %d",&op,&x);

        if(op == '+'){
            A += x;
            printf("%d:%d\n",i,A);
        }
        if(op == '-'){
            A -= x;
            printf("%d:%d\n",i,A);
        }
        if(op == '*'){
            A *= x;
            printf("%d:%d\n",i,A);
        }
        if(op == '/'){
            if (x == 0){
                printf("error\n");
                break;
            }
            A /= x;
            printf("%d:%d\n",i,A);
        }
    }
}
