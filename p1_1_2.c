//b站陈越姥姥的数据结构与算法 
//p1.1.2

//循环和 递归的时间复杂度 



#include<stdio.h>

void PrintN1(int N);
void PrintN2(int N);

int main(void){
	int n;
	scanf("%d", &n);
	PrintN1(n);
	//PrintN2(n);

	return 0;
}

void PrintN1(int N){
	//循环 
	int i;
	for(i=1; i<=N; i++){
		printf("%d\n", i);
	}
}

void PrintN2(int N){
	//递归 
	if(N){
		PrintN2(N-1);
		printf("%d\n", N);
	}
}



