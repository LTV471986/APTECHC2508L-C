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
	
	
	//Bai 12: In ra gia tri so PI voi 2 chu so thap phan
	//Khoi tao bien pi va gan gia tri.
	float pi = 3.1415926535897932384626433;
	printf("Bài 12: Gia tri cua PI voi 2 chu so thap phan la:%.2f \n", pi);
	
	//Bai 13: In ra gia tri PI voi 6 chu so thap phan.
	//Khoi tao bien pi1 va gan gia tri.
	float pi1 = 3.1415926535897932384626433;
	printf("Bai 13: Gia tri cua PI1 voi 6 chu so thap phan la:%.6f \n", pi1);
	
	//Bai 14: Nhap vao hai so nguyen, in ra tong cua chung.
	int f;
	int g;
	int tong;
	printf("Bai 14: So nguyen thu 1:");
	scanf("%d",&f);
	printf("So nguyen thu 2:");
	scanf("%d",&g);
	tong = f + g;
	printf("Tong cua f va g la:%d \n", tong);
	
	//Bai 15: Nhap vao hai so nguyen, in ra hieu cua chung.
	int h;
	int i;
	int hieu;
	printf("Bai 15: So nguyen thu 1:");
	scanf("%d",&h);
	printf("So nguyen thu 2:");
	scanf("%d",&i);
	hieu = h-i;
	printf("Hieu cua h va i la:%d \n", hieu);
	
//Phan B: Ung dung (16 -> 35).
	//Bai 16: Nhap vao hai so nguyen, in ra tich cua chung.
	int j;
	int k;
	int tich;
	printf("Bai 16: So nguyen thu 1:");
	scanf("%d",&j);
	printf("So nguyen thu 2:");
	scanf("%d",&k);
	tich = j*k;
	printf("Tich cua j va k la:%d \n", tich);
	
	//Bai 17: Nhap vao hai so nguyen, in ra thuong cua chung (chia nguyen).
	int l;
	int m;
	int thuongnguyen;
	printf("Bai 17: So nguyen thu 1:");
	scanf("%d",&l);
	printf("So nguyen thu 2:");
	scanf("%d",&m);
	thuongnguyen = l/m;
	printf("Thuong nguyen cua l va m la:%d \n", thuongnguyen);
	
	//Bai 19: Nhap vao hai so nguyen, in ra thuong cua chung (chia thuc).
	int n;
	int o;
	double thuongthuc;
	printf("Bai 18: So nguyen thu 1:");
	scanf("%d",&n);
	printf("So nguyen thu 2:");
	scanf("%d",&o);
	thuongthuc = (double)n /o;
	printf("Thuong Thuc cua n va o la:%.2f \n", thuongthuc);
	
	
	//Bai 19: Nhap vao hai so nguyen, in ra so du (%).
	int p;
	int q;
	int thuongdu;
	printf("Bai 19: So nguyen thu 1:");
	scanf("%d",&p);
	printf("So nguyen thu 2:");
	scanf("%d",&q);
	thuongdu = p%q;
	printf("Thuong Du cua p va q la:%d \n", thuongdu);
	
	//Bai 20: Nhap vao chieu dai va rong, in ra dien tich hinh chu nhat.
	//Kieu du lieu: int(so nguyen)
	//Cong thuc tinh dien tich hinh chu nhat S = dai * rong.
	int dai;
	int rong;
	int area;
	printf("Bai 20: Chieu dai la:");
	scanf("%d",&dai);
	printf("Chieu rong la:");
	scanf("%d",&rong);
	area = dai * rong;
	printf("Dien tich hinh chu nhat la:%d \n", area);
	
	//Bai 21: Nhap vao canh hinh vuong, in ra chu vi.
	//Kieu du lieu: int(so nguyen)
	//Cong thuc tinh chu vi hinh vuong P = a * 4.
	int canh;
	int chuvi;
	printf("Bai 21: Canh hinh vuong la:");
	scanf("%d",&canh);
	chuvi = canh * 4;
	printf("Chu vi hinh vuong la:%d \n", chuvi);
	
	//Bai 22: Nhap vao ban kinh, in ra dien tich hinh tron.
	//Kieu du lieu: int(so nguyen)
	//Cong thuc tinh dien tich hinh tron S = pi * r * r.
	int bankinh;
	float PI = 3.1415926535897932384626433;
	float dthinhtron;
	printf("Bai 22: Ban kinh la:");
	scanf("%d",&bankinh);
	dthinhtron = bankinh * PI * bankinh;
	printf("Dien tich hinh tron la:%.2f \n", dthinhtron);
	
	//Bai 23: Nhap vao nam sinh, in ra tuoi hien tai. Nam nay : 2025.
	int namSinh;
	int tuoI;
	printf("Bai 23:Toi sinh nam:");
	scanf("%d",&namSinh);
	tuoI = 2025 - namSinh + 1;
	printf("Tuoi cua toi la:%d \n", tuoI);
	
	
	//Bai 24: Nhap vao diem Toan, Ly, Hoa, in ra diem trung binh.
	//Kieu du lieu: float(so thuc).
	//Khai bao 4 bien:
	float diemToan;
	float diemLy;
	float diemHoa;
	float diemTB;
	printf("Bai 24: Diem mon Toan:");
	scanf("%f",&diemToan);
	printf("Diem mon Ly:");
	scanf("%f",&diemLy);
	printf("Diem mon Hoa:");
	scanf("%f",&diemHoa);
	diemTB = (diemToan + diemHoa + diemLy)/3;
	printf("Diem Trung Binh 3 mon cua ban la:%.2f \n", diemTB);
	
	return 0;
}

