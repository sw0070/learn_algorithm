//bվ��Խ���ѵ����ݽṹ���㷨 
//p1.1.3

//clock���Ժ�������ʱ��
/* 
#include<time.h>
#include<stdio.h>

clock_t start, stop;
//clock_t��clock()�������صı�������

double duration;
//��¼���⺯������ʱ�䣬��Ϊ��λ 

int main(){
	//���ڲ��Է�Χ�ڵĺ���׼������д��clocl����ǰ
	 
	start = clock();  
	TestFunction();  //���⺯�� 
	stop = clock();
	duration = ((double)(start - stop)) / CLK_TCK;
	
	//�������ڲ��Է�Χ�Ĵ��� 
	return 0;
}

*/

#include<stdio.h>
#include<time.h>
#include<math.h>
/*�������ʽ��ֵ
ʹ���ؾ����㷨
*/ 

clock_t start, stop;
double duration;

#define MAXN 10
#define MAXK 1e7

double f1(int n, double a[], double x);
double f2(int n, double a[], double x);

int main(){
	int i;
	double a[MAXN];
	for(i=0; i<MAXN; i++)
		a[i] = (double)i;
		
	start = clock();
	for(i=0; i<MAXK; i++)
		f1(MAXN, a, 1.1);    //a[i]*x^i x=1.1

	stop = clock();
	duration = ((double)(stop-start)) / CLK_TCK / MAXK; //�������� 
	printf("ticks1 = %f\n", (double)(stop - start));
	printf("ticks1 = %6.2e\n", duration);
	
	//�ؾ����㷨
	start = clock();
	for(i=0; i<MAXK; i++)
		f2(MAXN, a, 1.1);    

	stop = clock();
	duration = ((double)(stop-start)) / CLK_TCK / MAXK; //�������� 
	printf("ticks2 = %f\n", (double)(stop - start));
	printf("ticks2 = %6.2e\n", duration);

}

double f1(int n, double a[], double x){
	int i;
	double p = a[0];
	p += (a[i] * pow(x, i));
	return p;
}

double f2(int n, double a[], double x){
	int i;
	double p = a[n];
	for(i=n; i>0; i--){
		p = a[i-1] + p*x;
	}
	return p;
}





























































 



