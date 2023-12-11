#include <bits/stdc++.h>;

using namespace std;

int A,B,C;

int main(){
	scanf("%d%d%d",&A,&B,&C);
	
	if (A == B){
		printf("%d\n",C);
	}else if(A == C){
		printf("%d\n",B);
	}else{
		printf("%d\n",A);
	}
}