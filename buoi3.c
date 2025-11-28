#include <stdio.h>
#include <stdbool.h>

int main(){
	
//	int a = 5;
//	printf("Gia tri cua bien a la:%d \n", a);
//	//Su khac biet giua a++ va ++a:
//	//Neu a++ hoac ++a dung 1 minh trong 1 cau lenh thi khong co gi xay ra.
//	//Nhung khi ++a tham gia vao mot buoi thuc tinh toan thi ++a se tang bien a len 1 don vi truoc roi moi thuc hien.
//	//Con a++ la thuc hien hanh vi roi moi tang bien a len mot don vi.
//	
//	printf("Gia tri cua bien a sau thay doi la:%d\n", a++);
//	printf("Gia tri cua bien a cuoi cung la:%d", a);
	
//	int a = 5;
//	a = a-- + 1 + --a;
//	printf("Gia tri cua a la: %d",a);
//	
	//Trong C, O la dai dien cho false (tuc la sai), so khac 0 la true (tuc la dung). Thuong nguoi ta dung 1 la true.
	//Trong nhung ngon ngu hien dai (bac cao) thi no co kieu du lieu boolen (true/false) => Tu phien ban C99 thi C co kieu du lieu boolean nhung khong chinh quy (tuc la phai dung thu vien <stdbool.h>)
//	
//	int a = 5;
//	printf("a += 5 la:%d \n", a +=5);
//	printf("a -= 5 la:%d\n", a -=5);
//	printf("a *= 5 la:%d\n", a *=5);
//	printf("a /= 5 la:%d\n", a /=5);
//	printf("a chia lay du cho 5 la:%d\n", a %= 5);
	
	
	int x = 5, y = 3;
	
	printf("x > y la:%d \n", x > y);
	printf("x < y la:%d \n", x < y);
	printf("x = y la:%d \n", x == y);
	printf("x >= y la:%d \n", x >= y);
	printf("x <= y la:%d \n", x <= y);
	printf("x != y la:%d \n", x != y);
	
	return 0;
	
}
