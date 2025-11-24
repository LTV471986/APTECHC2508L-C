//Khai bao thu vien (preprocessor tien xu ly)
//stdio.h = standard input output (thu vien xuat nhap chuan su dung trong dau <>, " ")
// Khai bao # include <stdio.h>

#include <stdio.h>

//return _value_type function_name (){} (cu phap khai bao ham)
int main(){
//code o trong day
//ham "main" la ham dac biet trong"C". Chuong trinh se tu goi ham main khi run.	
	
//ham printf la ham duoc viet san trong thu vien stdio.h
// "Hello World" la doi so "argument" cua ham.
//	printf("Hello Word \n");
//	printf("I am LAM AI \n");
	
	
//Yeu cau nhap vao 2 so a va b, Sau dos in ra man hinh tong cua 2 so.	
	int a, b; // int = integer la kieu so nguyen
	printf("Nhap vao so a:");
	scanf("%d", &a); // d la digit
	
	printf("Nhap vao so b:");
	scanf("%d", &b);
	
	printf("Tong cua a va b la:%d", a+b);
	
	return 0;
	
}
	
