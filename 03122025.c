//BAI 09:
// Viet chuong trinh C de tinh cuoc dien thoai ban cho mot ho gia dinh voi cac thong so nhu sau:
//Phi thue bao bat buoc la 25.000.
//600 dong cho moi phut goi cua 10 phut dau tien.
//400 dong cho moi phut goi cua 50 phut tiep theo.
//200 dong cho bat ky phut goi nao sau 60 phut dau tien

#include <stdio.h>
#include <math.h>

int main(){
	int thueBao = 25000;
	int phutGoi, cuocDT;
	
	printf("Phut goi cua ban la: ");
	scanf("%d", &phutGoi);
	
	if (phutGoi >= 0){
		if(phutGoi <= 10){
			cuocDT= thueBao + (600 * phutGoi);
			printf("Cuoc thue bao cua ban la: %d", cuocDT);
		}else if(phutGoi > 10 && phutGoi <= 50 ){
		cuocDT= thueBao + (600 * 10) + (400 * (phutGoi - 10));
		printf("Cuoc thue bao cua ban la: %d", cuocDT);
		}else {
		cuocDT = thueBao + (600 * 10) + (400 * 50) + (200 * (phutGoi - 60));
		printf("Cuoc thue bao cua ban la: %d", cuocDT);
		}
	}else{
		printf("So phut cua ban khong hop le");
	}
	
//BAI 07:
//	int doanhSo, hoaHong;
//	printf("Doanh so cua cong ty la: ");
//	scanf("%d", &doanhSo);
//	
//	if(doanhSo > 300000000){
//		hoaHong = doanhSo * 0.2;
//		printf("Hoa hong cua toi se nhan duoc la:%d", hoaHong);
//	}else if(doanhSo >= 100000000 && doanhSo <= 300000000){
//		hoaHong = doanhSo * 0.1;
//		printf("Hoa hong cua toi se nhan duoc la:%d", hoaHong);
//	}else {
//		hoaHong = doanhSo * 0.05;
//		printf("Hoa hong cua toi se nhan duoc la:%d", hoaHong);
//	}	
//BAI 06:
//	int luong, thucLinh;
//	printf("Luong cua ban la: ");
//	scanf("%d", &luong);
//	
//	if(luong > 0){
//		
//		if(luong < 7000000){
//			thucLinh = luong - (luong * 0.1);
//			printf("So tien ban duoc nhan la:%d", thucLinh);
//		}else if (luong >= 7000000 && luong <= 15000000){
//			thucLinh = luong - (luong * 0.2);
//			printf("So tien ban duoc nhan la:%d", thucLinh);
//		}else {
//			thucLinh = luong- (luong * 0.3);
//			printf("So tien ban duoc nhan la:%d", thucLinh);
//		}
//	}else {
//		printf("Luong ban nhap khong hop le");
//	}
//	
//BAI 05: Viet chuong trinh giai phuong trinh bac 2: ax2 + bx + c = 0.	
//	float a, b , c, Delta;
//	float x, x1, x2, x3;
//	printf("Nhap a: ");
//	scanf("%f",&a);
//	
//	printf("Nhap b: ");
//	scanf("%f",&b);
//	
//	printf("Nhap c: ");
//	scanf("%f",&c);
//	
//	if(a != 0) {
//		Delta = (b*b) - (4 * a * c);
//		if(Delta > 0){
//			x1 = (-b + sqrt(Delta)) / (2 * a);
//			x2 = (-b - sqrt(Delta)) / (2 * a);
//			printf("Phuong trinh co 2 nghiem phan biet x1 la %.2f va x2 la %.2f \n", x1, x2);
//		}else if(Delta == 0){
//			x = -b/ (2 * a);
//			printf("Phuong trinh co nghiem kep la: %.2f \n", x);
//		}else {
//			printf("Phuong trinh vo nghiem");
//		}
//	}else {
//		x3 = -c / b;
//		printf("Phuong trinh co nghiem la %.2f", x3);
//	}
//BAI 01:
//	int a, b, c;
//	int max;
//	printf("Nhap so a, b, c: ");
//	scanf("%d%d%d", &a, &b, &c);
//	
//	max = a;
//	if(b > max){
//		max = b;
//	}
//	if(c> max){
//		max = c;
//	}
//	printf("Gia tri lon nhat la:%d", max);

//BAI 02: 
//	int a;
//	printf("Nhap mot so nguyen: ");
//	scanf("%d", &a);
//	
//	if(a % 3 == 0 && a % 2 == 0){
//		printf("So nguyen chia het cho 3 va 2 la: %d", a);
//	}else {
//		printf("So nay khong chia het cho 3 va 2: %d", a);
//	}	

//BAI 03:
//	int tuoi;
//	printf("Nhap so tuoi cua ban: ");
//	scanf("%d", &tuoi);
//	
//	if(tuoi >= 16){
//		printf("Ban du dieu kien vao lop 10");
//	}else {
//		printf("Ban khong du dieu kien vao lop 10");
//	}
	
//BAI 04:
//	double a, b, c;
//	double p, S;
//	printf("Nhap 3 canh tam giac lan luot la: ");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	
//	if(a + b > c || a + c > b || + c > a){ //Thoa 1 trong 3 dieu kien la duoc khong can thoa ca 3 dieu kien.
//		p = (a + b + c)/2;
//		S = sqrt(p * (p - a) * (p - b) * (p - c));
//		printf(" Dien tich cua hinh tam giac la: %.2lf", S);
//	}else {
//		printf("Khong ton tai tam giac");
//	}

//BAI 08:
//	int thang, nam;
//	printf("Nhap thang: ");
//	scanf("%d", &thang);
//	
//	
//	if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
//		printf("Thang co 31 ngay");
//	}else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
//		printf("Thang co 30 ngay");
//	}else if(thang == 2){	//Kiem tra nam nhuan:
//		printf("Nhap nam: ");
//		scanf("%d", &nam);
//			if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
//				printf("Thang 2 co 29 ngay");
//			} else {
//				printf("Thang co 28 ngay");
//			}
//	}else{
//		printf("Thang khong hop le");
//	}
//		
	return 0;
}
