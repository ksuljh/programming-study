#include <stdio.h>

int main(){
	int a,b,c;
	double d;
	
	printf("세 과목의 점수를 입력하세요 : ");
	scanf("%d %d %d", &a,&b,&c);
	d = (double)(a+b+c)/3;
	printf("%.1f",d);
	return 0;
}