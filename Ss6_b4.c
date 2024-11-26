#include <stdio.h>
 int main(){
 	float a,b,c,del,x1,x2,x;
 	printf("nhap a : ");
 	scanf("%f",&a);
 	printf("nhap b : ");
 	scanf("%f",&b);
 	printf("nhap c : ");
 	scanf("%f",&c);
 	if(a==0){
 		if(b==0){
 			if(c==0){
 				printf("phuong trinh vo so nghiem");
			 }else if(b!=0){
			 	x=-c/b;
 		        printf("phuong trinh co nghiem x : %.2f",x);
			 }else if(c!=0){
			 	printf("phuong trinh vo nghiem");
			 }
		 }
	 }else{
	 	del=b*2-4*a*c;
	 	if(del<0){
	 		printf(" phuong trinh vo nghiem ");
		 }else if(del==0){
		 	x1=x2=-b/(2*a);
		 	printf("phuong trinh co nghiem kep x1=x2=%.2f",x1);
		 }else{
		 	x1=(-b+sqrt(del))/(2*a);
		 	x2=(-b-sqrt(del))/(2*a);
		 	printf("phuong trinh co 2 nghiem x1,x2 lan luot la : %2.f,%2.f",x1,x2);
		 }
      }
	 return 0;
 }
