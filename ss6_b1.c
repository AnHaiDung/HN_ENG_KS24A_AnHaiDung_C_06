#include <stdio.h>

int main(){
	int num1, num2, num3, num4, num5,sum;
	printf("nhap so nguyen thu 1 : ");
	scanf("%d",&num1);
	printf("nhap so nguyen thu 2 : ");
	scanf("%d",&num2);
	printf("nhap so nguyen thu 3 : ");
	scanf("%d",&num3);
	printf("nhap so nguyen thu 4 : ");
	scanf("%d",&num4);
	printf("nhap so nguyen thu 5 : ");
	scanf("%d",&num5);
	if(num1%2!=0){
		sum=sum+num1;
	}
	if(num2%2!=0){
		sum=sum+num2;
	}
	if(num3%2!=0){
		sum=sum+num3;
	}
	if(num4%2!=0){
		sum=sum+num4;
	}
	if(num5%2!=0){
		sum=sum+num5;
	}
	printf("tong so le la : %d",sum);
	return 0;
}
