// Comment nghia la khong cho trinh bien dich - bien dich dong code nay.
// Day la tien xu ly (preprocessor). Muc dich la nhung thu vien Standard input output (Thu vien nhap xuat chuan) vao trong file thuc thi.
#include <stdio.h>

//Day la ham "main" ma chuong trinh se thuc thi dau tien.
int main(){
	// day la than ham
	//ham "printf = print formatted) dung de in ra man hinh 1 cai gi do de nguoi dung thay.
	printf("Xin chao \n");
	
	int tuoi = 40;
	printf("Tuoi cua toi la:%d \n",tuoi);
	
	float diemToan = 4.5;
	float diemVan = 7.5;
	float diemAnh = 5.5;
	float diemTrungBinh;
	printf("Diem Toan:%f \n",diemToan);
	printf("Diem Van:%f \n", diemVan);
	printf("Diem Anh: %f \n", diemAnh);
	
	diemTrungBinh = (diemToan + diemVan + diemAnh)/3;
	printf("Diem trung binh 03 mon:%f \n", diemTrungBinh);
	
	
	char kyTu = 'C';
	printf("Gia tri cua bien ky tu la: %d \n", kyTu); //%d ham char = tinh duoc gia tri bang ma ASCII Table.
	
	//%d, %f, %lf, %c... format specifer (dac ta dinh dang)
	
	double diemmonToan = 4.5123465697864;
	double diemmonVan = 7.51548975126358;
	double diemmonAnh = 5.5546835621345;
	double diemTrungBinhcacmon;
	printf("Diem Mon Toan:%.15lf \n",diemmonToan);
	printf("Diem Mon Van:%.15lf \n", diemmonVan);
	printf("Diem Mon Anh: %.15lf \n", diemmonAnh);
	
	diemTrungBinhcacmon = (diemmonToan + diemmonVan + diemmonAnh)/3;
	printf("Diem trung binh 03 mon:%.15lf \n", diemTrungBinhcacmon);
	
	//De nhap du lieu tu ban phim thi minh dung ham "scanf"
	int a;
	printf("Nhap so a:");
	//Dau & la toan tu dia chi, dung de xac dinh gia tri cua bien a.
	//duoc luu o dau trong bo nho RAM.
	scanf("%d",&a);
	printf("Gia tri cua bien a:%d \n", a);
	
	int b;
	printf("Nhap so b:");
	scanf("%d", &b);
	printf("Gia tri cua bien b:%d \n", b);
	
	int tongab;
	tongab = a + b;
	printf("Tong gia tri cua a va b la :%d \n", tongab);
	
	
	return 0;
}

//file.exe la executable file tuc la file thuc thi chuong trinh.
//Bien so = variable - gia tri co the thay doi, luu tru gia tri.
	//+ Gan gia tri co dinh khi ta khoi tao bien
	//+ Cho nguoi dung nhap lieu
//Hang so = constant - gia tri khong the thay doi.

	//1. Khai bao bien ma khong khoi tao gia tri cho bien (Declare variable)
		//Vi du: int tuoi; => Khai bao 1 bien la tuoi co kieu du lieu la kieu so nguyen int (integer) khong co gia tri.

	//2. Khoi tao bien (Initialize) (vua khai bao vua gan gia tri cho bien)
		//Vu du: int tuoi = 35;

//Khi chung ta khai bao bien thi he dieu hanh (OS) se cap phat tai nguyen de luu tru gia tri cua bien do trong bo nho RAM.
//OS can cu vao kieu du lieu (Data Types) de cap phat tai nguyen.
//Data types bao gom: int, float (6 so sau dau .), double (15 so sau dau cham .), char va phan mo rong la long, short va unsigned.
