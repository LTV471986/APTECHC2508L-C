//50 Bai tap ve Nhap/Xuat du lieu trong C

//Phan A - Co ban (1 -> 15)
//Bai 01: In ra dong chu "Hello, World!".
//Khai bao thu vien <stdio.h>, co the dung dau <> hoac " ".
#include <stdio.h>

int main(){
	//Bai 01: In ra dong chu "Hello, World!".	
	printf("Bai 01: Hello, World! \n");
	
	//Bai 02: In ra ten cua ban.
	printf("Bai 02: Ten cua toi la Lam Ai \n");
	
	//Bai 03: In ra ten va tuoi cua ban.
	printf("Bai 03: Toi ten la LAM AI \n");
	printf("Nam nay toi 40 tuoi\n");
	
	//Bai 04: In ra ho ten,tuoi va diem trung binh (dung nhieu printf)
	printf("Bai 04: Toi ten la LAM AI \n");
	printf("Nam nay toi 40 tuoi\n");
	printf("Diem trung binh: 7.0 \n");
	
	//Bai 05: Nhap vao mot so nguyen va in ra.
	//Khai bao bien so NGUYEN a
	int a;
	printf("Bai 05: NHAP mot so nguyen:");
	scanf("%d",&a);
	printf("Gia tri so nguyen a la:%d \n",a);
	
	//Bai 06: Nhap mot so thuc (float) va in ra.
	//Khai bao bien so THUC b.
	float b;
	printf("Bai 06: NHAP mot so thuc:");
	scanf("%f",&b);
	printf("Gia tri so thuc b la:%f \n",b);
	
	//Bai 07: Nhap vao mot ky tu va in ra.
	//Khai bao bien KY TU c
	char c;
	printf("Bai 07: NHAP mot ky tu:");
	scanf(" %c",&c); //co khoang trang truoc %c de bo qua ky tu Enter.
	printf("Ky tu MOI NHAP la: %c \n",c);
	
	//Bai 08: Nhap vao mot so nguyen, in ra so do tang them 1.
	//Khai bao bien so NGUYEN d
	int d;
	printf("Bai 08: NHAP mot so nguyen:");
	scanf("%d",&d);
	printf("Gia tri so nguyen D la:%d \n",d + 1);

	
	//Bai 09: Nhap mot so thuc, in ra so do nhan doi
	//Khai bao bien so THUC e.
	float e;
	printf("Bai 09: NHAP mot so thuc:");
	scanf("%f",&e);
	printf("Gia tri so thuc E la:%f \n",e * 2);
	
	return 0;
}

