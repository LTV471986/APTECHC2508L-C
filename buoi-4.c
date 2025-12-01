#include <stdio.h>
#include <stdbool.h>

int main (){
	//Toan tu luan Ly (Logical Operators):
	//&& Toan tu and/va/dong thoi : 2 ve trai, phai la true thi toan bo menh de se la true.
	//false = 0, true = 1.	
//	int x = 5;
//	printf("%d\n", x<5 && x <10);
//	printf("%d\n", x<5 || x <10);
//	printf("%d\n",!(x<5 || x < 10));
//	
	// || (toan tu or/hoac): chi can 1 ve true thi toan bo menh de se la true.
	
//	bool isHandsome = false;
//	printf("%d", isHandsome);
//	
	//Cau truc tuan tu (Sequentially)
	//Cau truc re nhanh
	//Syntax: 
	//If (dieu kien) {
	//khoi code luon duoc thuc thi neu dieu kien tren la true.
	//       } menh de if thieu.
	
	//If (dieu kien) {
			//khoi code luon duoc thuc thi neu dieu kien tren la true.
	//} else {
			//khoi code luon duoc thuc thi neu dieu kien tren la false.
	//}
//	
//	int x = 10;
//	if (x > 10) {
//		// khoi code nay duoc thuc thi neu dieu kien tren la true
//		printf("x > 10");
//	}else {
//		printf("x <= 10");
	
	
	//if (dieu kien 1) {
			//thuc thi khoi lenh neu dieu kien 1 la true.
	//}else if (dieu kien 2) {
			//thuc thi khoi lenh neu dieu kien 2 la true.
	//}else {
			//thuc thi khoi lenh neu dieu kien 2 la false.
	//}
	
	//Viet chuong trinh kiem tra 1 so nguyen nhap vao la so chan hay so le.
	//Giai thuat: Lay so nhap vao % 2. Neu so du  = 0 thi so nhap vao la so chan. Nguoc lai la so le.
	//=> Dung if ...else.
//	int a;
//	printf("Nhap vao 1 so nguyen: ");
//	scanf("%d",&a);
//	if(a > 0){
//		if(a % 2 == 0){
//			printf("Day la so chan");
//		}else {
//			printf("Day la so le");
//		}
//	}else {
//		printf("Gia tri nhap vao khong hop le");
//}
	
//	//Bai tap : Giai phuong trinh bac 1: ax + b = 0. Neu a == 0 && b !0 => Phuong trinh vo nghiem. Neu (a== 0 && b == 0) => Phuong trinh vo so nghiem. Nghiem x = -b/a.
//	float a, b, x;
//	printf("Nhap so a la: ");
//	scanf("%f", &a);
//	printf("Nhap so b la: ");
//	scanf("%f",&b);
//	
//	if(a == 0){
//		if(b != 0){
//			printf("Phuong trinh vo nghiem");
//		}else {
//			//Truong hop b == 0.
//			printf("Phuong trinh vo so nghiem");
//		}
//	}else {
//		//Truong hop a != 0. 
//		x = -b/a;
//		printf("Nghiem cua x la %.2f", x);
//	}
	
//	if(a == 0 && b!= 0){
//		printf("Phuong trinh vo nghiem");
//	} else if (a == 0 && b == 0){
//		printf("Phuong trinh vo so nghiem");
//	} else {
//		x = -b/a;
//		printf("Nghiem cua x la %.2f",x);
//	}
//	
	//Nguyen tac toi uu code la:
	//Nhung doan lenh nao lap di lap lai thi tim cach viet no 1 lan de su dung nhieu lan.
	//Long hand: viet code theo kieu tuong minh.
	
	//Viet chuong trinh nhap 2 so nguyen a,b. Tim va in ra so lon nhat.
	int a, b, max;
	printf("Nhap so nguyen a la: ");
	scanf("%d", &a);
	printf("Nhap so nguyen b la: ");
	scanf("%d", &b);
	max = a;
//	if(b>a){
//		max = b;
//	}

	//Cu phap short hand cua if chi viet duoc khi trong ham if co duy nhat 1 dieu kien => Toan tu 3 ngoi (Ternary Operator)
	//a += b chinh la a = a + b => toan tu 2 ngoi.
	//a++ => toan tu 1 ngoi . a = a + 1.
	max = (b>a) ? b : a;
		printf("So lon nhat la: %d",max);
		
	//short hand: cu phap viet tat 
	//(Dieu kien) ? lenh chay neu dieu kien true : lenh chay neu dieu kien false.
	
	
	//Bai tap: Viet chuong trinh giai phuong trinh bac 2: ax2 + bx + c = 0.
	
	
	return 0;
}
