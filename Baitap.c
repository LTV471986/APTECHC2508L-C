//50 Bai tap ve Nhap/Xuat du lieu trong C

//Phan A - Co ban (1 -> 15)
//Bai 01: In ra dong chu "Hello, World!".
//Khai bao thu vien <stdio.h>, co the dung dau <> hoac " ".
#include <stdio.h>
#include <math.h>
#include <string.h>

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
	
	
	//Bai 10: Nhap vao ten cua ban (dung scanf("%s", ...)) va in ra.
//	char mynamE[50];
//	printf("Bai 10: Ten cua ban la:");
//	scanf("%49s", mynamE);
//	printf("Ten cua toi la:%s \n", mynamE);
	
	//Bai 11: Nhap vao ten day du (dung fgets) va in ra.
	char anotherName[100];
	printf("Bai 11: Ho va ten:");
	fgets(anotherName, sizeof(anotherName),stdin);
	
	anotherName[strcspn(anotherName, "\n")] = '\0';
	printf("Ho va ten day du cua toi la: %s\n", anotherName);
	
	
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
	
	
	//Bai 25: Nhap vao ten va diem trung binh, in ra ket qua: " Ban A co diem TB = ...".
	
	
	//Bai 26: Nhap vao mot ky tu, in ra ma ASCII cua ky ty do.
	//Kieu du lieu: char (Ky tu).
	char kyTu;
	printf("Bai 26: Ky tu la:");
	scanf(" %c",&kyTu);
	printf("Ma ASCII cua ky tu do la:%d \n", kyTu);
	
	
	//Bai 27: Nhap vao mot so nguyen, in ra ky tu tuong ung trong bang ASCII.
	//Kieu du lieu: int (So nguyen).
	int soNguyen;
	printf("Bai 27: So nguyen la:");
	scanf("%d",&soNguyen);
	printf("Ma ASCII cua so Nguyen do la:%c \n", soNguyen);
	
	//Bai 28: Nhap vao mot KY TU, in ra KY TU LIEN SAU trong bang ASCII.
	//Kieu du lieu: char (Ky tu).
	char kyTu1;
	printf("Bai 28: Ky tu dau tien la:");
	scanf(" %c",&kyTu1);
	printf("Ky tu sau do la:%c \n", kyTu1 + 1);
	
	//Bai 29: Nhap vao mot so nguyen, in ra binh phuong va lap phuong.
	int sOnguyen;
	int binhPhuong;
	int lapPhuong;
	printf("Bai 29: So nguyen la:");
	scanf("%d",&sOnguyen);
	binhPhuong = sOnguyen * sOnguyen;
	lapPhuong = sOnguyen * sOnguyen * sOnguyen;
	printf("Binh phuong la:%d \n", binhPhuong);
	printf("Lap phuong la:%d \n", lapPhuong);
	
	//Bai 30: Nhap vao so gio va phut, in ra tong so phut.
	int gio;
	int phut;
	int tonggp;
	printf("Bai 30: So gio la:");
	scanf("%d",&gio);
	printf("So phut la:");
	scanf("%d",&phut);
	tonggp = gio*60 + phut;
	printf("Tong so phut la:%d \n",tonggp);
	
	
	//Bai 31: Nhap vao so giay, in ra dinh dang gio:phut:giay.
	//1 gio = 3600 giay.
	//1 phut = 60 giay.
	
	int second;
	int minu;
	int hour;
	printf("Bai 31: So giay la:");
	scanf("%d",&second);
	hour = second/3600;
	minu = (second % 3600)/60;
	second = second % 60;
	printf("Thoi gian la: %d gio: %d phut: %d giay \n", hour, minu, second);
	
	//Bai 32: Nhap vao can nang va chieu cao, in ra chi so BMI.
	float kg;
	float height;
	float BMI;
	printf("Bai 32: Can nang cua ban la: ");
	scanf("%f",&kg);
	printf("Chieu cao cua ban la: ");
	scanf("%f",&height);
	BMI = kg/(height*height);
	printf("Chi so BMI cua ban la:%lf \n",BMI);
	
	//Bai 33: Nhap vao 2 so nguyen, in ra so lon hon.
	int ab;
	int ba;
	printf("Bai 33 So nguyen thu 1 la: ");
	scanf("%d",&ab);
	printf("So nguyen thu 2 la:");
	scanf("%d",&ba);
	
	if(ab > ba){
		printf("So lon hon la:%d \n",ab);
	}else if(ab<ba){
		printf("So lon hon la:%d \n",ba);
	}else{
		printf("Hai so bang nhau. \n");
	}
	
	//Bai 34: Nhap vao 3 so nguyen, in ra so nho nhat.
	
	
	//Bai 35:Nhap cao ho, ten dem, ten -> in ra day du.
	
	//Bai 36: Nhap vao 3 canh tam giac, in ra chu vi.
	int canh1, canh2, canh3;
	int ChuviTamgiac;
	
	printf("Bai 36: Canh thu nhat la: ");
	scanf("%d", &canh1);
	printf("Canh thu hai la: ");
	scanf("%d", &canh2);
	printf("Canh thu ba la: ");
	scanf("%d", &canh3);
	
	ChuviTamgiac = canh1 + canh2 + canh3;
	printf("Chu vi hinh tam giac la: %d \n", ChuviTamgiac);
	
	//Bai 37: Nhap vao 3 canh tam giac, in ra dien tich (cong thuc Heron).
	int canh4, canh5, canh6;
	int nuaChuvi, DientichTamgiac;
	printf("Bai 37: Canh thu nhat la: ");
	scanf("%d", &canh4);
	printf("Canh thu hai la: ");
	scanf("%d", &canh5);
	printf("Canh thu ba la: ");
	scanf("%d", &canh6);
	nuaChuvi = (canh4 + canh5 + canh6)/2;
	DientichTamgiac = sqrt(nuaChuvi*(nuaChuvi - canh4)*(nuaChuvi - canh5)*(nuaChuvi - canh6));
	printf("Dien tich hinh tam gia la: %d", DientichTamgiac);
	
	//Bai 38: Nhap vao mot so nguyen co 2 chu so, in ra hang chuc (n/10) va hang don vi (n%10).
	
	
	//Bai 39: Nhap vao mot so nguyen co 3 chu so, in ra tong cac chu so.
	
	//Bai 40: Nhap vao mot so nguyen, in ra dao nguoc cua no.
	
	//Bai 41: Nhap vao mot ky tu thuong, in ra ky tu hoa tuong ung.
	
	//Bai 42: Nhap vao mot ky tu hoa, in ra ky tu thuong tuong ung.
	
	//Bai 43: Nhap vao mot chuoi (ho va ten), in ra tung ky tu tren moi dong.
	
	//Bai 44: Nhap vao mot cau (dung fgets), in ra lai.
	
	//Bai 45: Nhap vao diem cua 5 sinh vien, in ra danh sach diem.
	
	//Bai 46: Nhap cao thong tin 1 sinh vien: ten, tuoi, diem TB -> in ra bang thong tin.
	
	//Bai 47: Nhap vao mot so nguyen n. in ra bang cuu chuong cua n.
	
	//Bai 48: Nhap vao nhiet do C, in ra nhiet do F.
	
	//Bai 49: Nhap vao dien do F, in ra nhiet do C.
	
	//Bai 50: Nhap vao 2 so vaf 1 ky tu toan tu (+ - * /), in ra ket qua phep toan tuong ung.
	return 0;
	
}

