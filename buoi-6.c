# include <stdio.h>

int main(){
	
	//Lenh switch (bieu thuc) dung cho cac chuong trinh nhieu hon 3 dieu kien. Duoi 3 dieu kien minh dum if. Cac cau lenh don gian thui.
	//Viet chuong trinh nhap vao so va in ra thu tuong ung.
	//VD: nhap so 2 => in ra  ' thu 2' (dung switch)
//	int n;
//	printf("Nhap n: ");
//	scanf("%d", &n);
//	
//	switch(n){
//		case 1:
//			printf("Chu nhat");
//			break; //dung de thoat khoi switch
//		case 2:
//			printf("Thu 2");
//			break;
//		case 3:
//			printf("Thu 3");
//			break;
//		case 4:
//			printf("Thu 4");
//			break;
//		case 5:
//			printf("Thu 5");
//			break;
//		case 6:
//			printf("Thu 6");
//			break;
//		case 7:
//			printf("Thu 7");
//			break;
//		default: //Cac truong hop con lai
//			printf("Khong hop le");
//	}
//
	int thang, nam;
	printf("Nhap so thang: ");
	scanf("%d", &thang);
	
	switch(thang){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang %d co 31 ngay", thang);
			break;
		case 4: case 6: case 9: case 11:
			printf("Thang %d co 30 ngay", thang);
			break;
		case 2:
			prinf("Nhap so nam: ");
			scanf("%d", &nam);
			if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
				printf("Thang %d nam %d co 29 ngay", thang, nam);
			} else {
				printf("Thang %d nam %d co 28 ngay", thang, nam);
			}
		}
		
	
	return 0;
}

