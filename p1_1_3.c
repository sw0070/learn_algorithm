//b站陈越姥姥的数据结构与算法 
//p1.1.3

//clock测试函数运行时间
/* 
#include<time.h>
#include<stdio.h>

clock_t start, stop;
//clock_t是clock()函数返回的变量类型

double duration;
//记录被测函数运行时间，秒为单位 

int main(){
	//不在测试范围内的函数准备工作写在clocl调用前
	 
	start = clock();  
	TestFunction();  //被测函数 
	stop = clock();
	duration = ((double)(start - stop)) / CLK_TCK;
	
	//其他不在测试范围的处理 
	return 0;
}

*/

#include<stdio.h>
#include<time.h>
#include<math.h>
/*计算多项式的值
使用秦九韶算法
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
	duration = ((double)(stop-start)) / CLK_TCK / MAXK; //函数单次 
	printf("ticks1 = %f\n", (double)(stop - start));
	printf("ticks1 = %6.2e\n", duration);
	
	//秦九韶算法
	start = clock();
	for(i=0; i<MAXK; i++)
		f2(MAXN, a, 1.1);    

	stop = clock();
	duration = ((double)(stop-start)) / CLK_TCK / MAXK; //函数单次 
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





























































 



