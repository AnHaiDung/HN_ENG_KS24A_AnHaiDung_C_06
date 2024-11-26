#include <stdio.h>

int main() {
    int day,month,year;
    printf("Nhap nam : ");
    scanf("%d", &year);
    printf("Nhap thang : ");
    scanf("%d", &month);
    switch (month) {
        case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
            printf("31 ngay\n");
            break;
        case 4: 
		case 6: 
		case 9: 
		case 11:
            printf("30 ngay\n");
            break;
        case 2:
		    if(year%400==0||(year%4==0&&year%100!=0)){
		    	printf("29 ngay\n");
			}else{
				printf("28 ngay\n");
			}
			break;
        default:
            printf("thang khong hop le");
    }
    printf("nam da nhap : %d", year);
    
    return 0;
}
