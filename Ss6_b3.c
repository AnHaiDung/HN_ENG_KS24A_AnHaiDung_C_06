#include <stdio.h>

int main(){
	int i=7,a;
	while(1){
		printf("nhap map khau : ");
		scanf("%d",&a);
		if(i==a){
			printf("da dung mat khau");
			break;
		}else{
			printf("sai mat khau\n");
		}
	}
	return 0;
}
