//bվ��Խ���ѵ����ݽṹ���㷨 
//p1.1.2

//ѭ���� �ݹ��ʱ�临�Ӷ� 



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
	//ѭ�� 
	int i;
	for(i=1; i<=N; i++){
		printf("%d\n", i);
	}
}

void PrintN2(int N){
	//�ݹ� 
	if(N){
		PrintN2(N-1);
		printf("%d\n", N);
	}
}



