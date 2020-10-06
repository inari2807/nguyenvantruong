#include <stdio.h>
#include <math.h>
int chuvi(int a,int b,int c){
	int Cv;
	Cv=a+b+c;
	return Cv;
}
double dientich(int a,int b,int c){
	double S,p;
	p=(float)(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	
	return S;
}

int main(){
	int a, b, c, S, CV, p;
	
	
	printf("nhap a= ");
	scanf("%d",&a);
	
	printf("nhap b= ");
	scanf("%d",&b);
	
	printf("nhap c= ");
	scanf("%d",&c);
	
	if(a+b>c){
		printf("a,b,c la 3 canh cua tam giac\n");
	}
	else{
		printf("a,b,c khong phai la 3 canh cua tam giac\n");
		return 0;
	    
	}
	
	CV = a+b+c;
	printf("Chu vi = %d\n",CV);
	
	p = CV/2;
	
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Dien tich = %d",S);
	
	return 0;
	
}

