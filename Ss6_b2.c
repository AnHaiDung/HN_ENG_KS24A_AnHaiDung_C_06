#include <stdio.h>

int main(){
	int num1, num2, num3, num4, num5, c=0, l=0;
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
	if(num1%2==0){
		c++;
	}else{
		l++;
	}
	if(num2%2==0){
		c++;
	}else{
		l++;
	}
	if(num3%2==0){
		c++;
	}else{
		l++;
	}
	if(num4%2==0){
		c++;
	}else{
		l++;
	}
	if(num5%2==0){
		c++;
	}else{
		l++;
	}
	printf("tong so luong so le la : %d",l);
	printf("tong so luong so chan la : %d",c);
	return 0;
}
