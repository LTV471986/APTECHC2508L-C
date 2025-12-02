//Viet chuong trinh giai phuong trinh bac 2: ax2 + bx + c = 0.
//Giai thuat: co 2 truong hop xay ra nhu sau
	//Khi a = 0 => bx + c = 0.
	//Khi a != 0, thi Delta = b mu 2 - 4ac, co 3 case:
			//1- Delta < - => vo nghiem.
			//2- Delta = 0 => nghiem kep; x = -b / 2a.
			//3- Delta > 0 => Hai nghiem phan biet;
				//x1 = (-b + squarroot of Delta) / 2a.
				//x2 = (-b - squarroot of Delta) / 2a.
#include <stdio.h> //Khai bao thu vien (preprocessor)
#include <math.h>

int main(){
	float a, b , c, Delta;
	float x, x1, x2, x3;
	printf("Nhap a: ");
	scanf("%f",&a);
	
	printf("Nhap b: ");
	scanf("%f",&b);
	
	printf("Nhap c: ");
	scanf("%f",&c);
	
	if(a != 0) {
		Delta = (b*b) - (4 * a * c);
		if(Delta > 0){
			x1 = (-b + sqrt(Delta)) / (2 * a);
			x2 = (-b - sqrt(Delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet x1 la %.2f va x2 la %.2f \n", x1, x2);
		}else if(Delta == 0){
			x = -b/ (2 * a);
			printf("Phuong trinh co nghiem kep la: %.2f \n", x);
		}else {
			printf("Phuong trinh vo nghiem");
		}
	}else {
		x3 = -c / b;
		printf("Phuong trinh co nghiem la %.2f", x3);
	}
	return 0;
	
}
