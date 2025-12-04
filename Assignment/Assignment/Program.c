
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void kiem_tra_so_nguyen()
{
	int soNguyen, i, dem = 0;
	printf("Nhap vao mot so: ");
	printf("\n");
	scanf_s("%d", &soNguyen);

	printf("So %d la so nguyen.\n", soNguyen);

	if (soNguyen < 2)
	{
		printf("So %d khong phai la so nguyen to.\n", soNguyen);
	}
	else
	{
		for (i = 1; i < soNguyen; i++)
		{
			if (soNguyen % i == 0);
			dem++;

		}
		if (dem == 2)
		{
			printf("So %d la so nguyen to.\n", soNguyen);
		}
		else
		{
			printf("So %d khong phai la so nguyen to.\n", soNguyen);
		}
	}
	int j = 0;
	int soChinhPhuong = 0;
	while (j * j <= soNguyen)
	{
		if (j * j == soNguyen)
		{
			soChinhPhuong = 1;
			break;
		}
		j++;
	}
	if (soChinhPhuong)
	{
		printf("So %d la so chinh phuong.\n", soNguyen);
	}
	else
	{
		printf("So %d khong phai la so chinh phuong.\n", soNguyen);
	}
}

void tim_uoc_so_chung_va_boi_so_chung_cua_hai_so()
{
	int x, y, a, b, ucln, bcnn;
	printf("Nhap so thu nhat: ");
	scanf_s("%d", &x);
	printf("Nhap so thu hai: ");
	scanf_s("%d", &y);

	a = x;
	if (a < 0)
	{
		a = -a;
	}
	b = y;
	if (b < 0)
	{
		b = -b;
	}
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	ucln = a;
	bcnn = (x * y) / ucln;
	printf("Uoc chung lon nhat cua %d va %d la : %d\n", x, y, ucln);
	printf("Boi chung nho nhat cua %d va %d la : %d\n", x, y, bcnn);



}

void tinh_tien_cho_quan_karaoke()
{

	int gioBatDau, gioKetThuc, soGio;
	float tongTien, giamGia = 0;

	printf("Nhap so gio bat dau (12h-23h): ");
	scanf_s("%d", &gioBatDau);
	printf("Nhap so gio ket thuc (12h-23h: ");
	scanf_s("%d", &gioKetThuc);

	if (gioBatDau < 12 || gioBatDau > 23 || gioKetThuc < 12 || gioKetThuc >23 || gioKetThuc <= gioBatDau)
	{
		printf("Gio khong hop le ! Vui long nhap lai.\n");
	}
	soGio = gioKetThuc - gioBatDau;
	if (soGio <= 3)
	{
		tongTien = soGio * 150000;
	}
	else
	{
		tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
	}

	if (gioBatDau >= 14 && gioBatDau <= 17)
	{
		giamGia = tongTien * 0.1;
		tongTien = tongTien - giamGia;
	}
	printf("Tien phai tra: %lf dong\n", tongTien);
}

void tinh_tien_dien()
{
	int soKwh;
	double tienDien = 0;

	printf("Nhap so kWh dien su dung: ");
	scanf("%d", &soKwh);

	if (soKwh <= 50) 
	{
		tienDien = soKwh * 1.678;
	}
	else if (soKwh <= 100) 
	{
		tienDien = soKwh * 1.734;
	}
	else if (soKwh <= 200) 
	{
		tienDien = soKwh * 2.014;
	}
	else if (soKwh <= 300) 
	{
		tienDien = soKwh * 2536;
	}
	else if (soKwh <= 400) 
	{
		tienDien = soKwh * 2834;
	}
	else 
	{
		tienDien = soKwh * 2927;
	}

	printf("So tien dien phai tra la: %.0lf dong\n", tienDien);

	return 0;
}


void doi_tien()
{
	int tien;
	printf("Nhap so tien can doi: ");
	scanf("%d", &tien);

	int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int soLuong;

	printf("Cach doi tien:\n");

	for (int i = 0; i < 9; i++) 
	{
		if (tien >= menhGia[i]) 
		{
			soLuong = tien / menhGia[i];  
			tien = tien % menhGia[i];     
			printf("%d to %d\n", soLuong, menhGia[i]);
		}
	}

	if (tien == 0) 
	{
		printf("Da doi xong tien.\n");
	}

	return 0;
}



void tinh_lai_suat_vay_ngan_hang_tra_gop()
{
	double tienVay;
    double laiSuat = 0.05; // 5%/tháng
    int kyHan = 12; // 12 tháng

    printf("Nhap so tien muon vay: ");
	scanf("%lf", &tienVay);

	double gocHangThang = tienVay / kyHan; 
	double tienConLai = tienVay;

	printf("Ky han\tLai phai tra\tGoc phai tra\tTong tien phai tra\tSo tien con lai\n");

	for (int thang = 1; thang <= kyHan; thang++) 
	{
	 double laiHangThang = tienConLai * laiSuat;
	 double tongPhaiTra = gocHangThang + laiHangThang;
			tienConLai -= gocHangThang;

	 printf("%2d\t%.0lf\t\t%.0lf\t\t%.0lf\t\t\t%.0lf\n",
				thang, laiHangThang, gocHangThang, tongPhaiTra, tienConLai);
	}

		return 0;
	}

void vay_tien_mua_xe()
{
	double giaXe = 500000000; 
	double laiSuatNam = 0.072; 
	int thoiHanNam = 24;       

	double maxPhanTram;
	printf("Nhap so phan tram vay toi da (vd: 80): ");
	scanf("%lf", &maxPhanTram);

	double soTienVay = giaXe * maxPhanTram / 100.0;
	double tienTraTruoc = giaXe - soTienVay;

	int soThang = thoiHanNam * 12;
	double laiSuatThang = laiSuatNam / 12;

	double tienHangThang = soTienVay * (laiSuatThang * pow(1 + laiSuatThang, soThang)) /
		(pow(1 + laiSuatThang, soThang) - 1);

	printf("\nTien tra truoc: %.0lf VND\n", tienTraTruoc);
	printf("Tien phai tra hang thang: %.0lf VND\n", tienHangThang);

	return 0;
}

void sap_xem_thong_tin_sinh_vien()
{

	printf("Chuong trinh dang phat trien\n");

}

void xay_dung_game_FPOLY_LOTT()
{
	system("cls");
	printf_s("CN9: GAME FPOLY-LOTT\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	int so1, so2, soTrung1, soTrung2;
	int giaiThuong = 0;
	srand(time(NULL));
	soTrung1 = rand() % 15 + 1;
	do
	{
		soTrung2 = rand() % 15 + 1;
	} while (soTrung1 == soTrung2);
	while (1)
	{
		printf("Hay nhap 2 may man cua ban (tu 1 den 15):\n");
		printf("So thu nhat: ");
		scanf_s("%d", &so1);
		printf("So thu hai : ");
		scanf_s("%d", &so2);
		if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15 || so1 == so2)
		{
			printf_s("Vui long nhap 2 so khac nhau va trong khoang 1 den 15\n");
			continue;
		}
		break;
	}
	printf("======================================\n");
	printf("     KET QUA XO SO HOM NAY\n");
	printf("So trung giai: %02d va %02d\n", soTrung1, soTrung2);
	printf("Ban da chon   : %02d va %02d\n", so1, so2);
	printf("======================================\n");
	if (so1 == soTrung1 || so1 == soTrung2) giaiThuong++;
	if (so2 == soTrung1 || so2 == soTrung2) giaiThuong++;
	if (giaiThuong == 0)
	{
		printf("Rat tiec! Ban chua trung so nao.\n");
		printf("Chuc ban may man lan sau!\n");
	}
	else if (giaiThuong == 1) {
		printf("CHUC MUNG! Ban da trung 1 so!\n");
		printf("=> Ban da trung giai nhi!\n");
	}
	else
	{
		printf("*** CHUC MUNG BAN DA TRUNG GIAI NHAT!!! ***\n");
	}
}

void tinh_toan_phan_so()
{
	system("cls");
	printf_s("CN10: TINH TOAN PHAN SO\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	int tu1, tu2, mau1, mau2;
	printf("_Phan so thu nhat:\n");
	printf("Moi nhap tu so: ");
	scanf_s("%d", &tu1);
	do {
		printf("Moi nhap mau so (khac 0): ");
		scanf_s("%d", &mau1);
		if (mau1 == 0) printf("Mau so khong duoc bang 0!\n");
	} while (mau1 == 0);

	printf("_Phan so thu hai:\n");
	printf("Moi nhap tu so: ");
	scanf_s("%d", &tu2);
	do {
		printf("Moi nhap mau so (khac 0): ");
		scanf_s("%d", &mau2);
		if (mau2 == 0) printf("Loi: Mau so khong duoc bang 0!\n");
	} while (mau2 == 0);
	printf("\nPhan so thu nhat co dang: %d/%d\n", tu1, mau1);
	printf("Phan so thu hai co dang: %d/%d\n", tu2, mau2);
	printf("=======================================\n");
	printf("          BAT DAU TINH TOAN         \n");
	printf("=======================================\n");

	int tu_tong = tu1 * mau2 + tu2 * mau1;
	int mau_tong = mau1 * mau2;
	printf(" Tong = %d/%d + %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tu_tong, mau_tong);

	int tu_hieu = tu1 * mau2 - tu2 * mau1;
	int mau_hieu = mau1 * mau2;
	printf(" Hieu = %d/%d - %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tu_hieu, mau_hieu);

	int tu_tich = tu1 * tu2;
	int mau_tich = mau1 * mau2;
	printf(" Tich = %d/%d * %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tu_tich, mau_tich);

	int tu_thuong = tu1 * mau2;
	int mau_thuong = mau1 * tu2;
	if (mau_thuong == 0) {
		printf("Mau thuong bang 0. Khong hop le!\n");
	}
	else {
		printf("Thuong = %d/%d : %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tu_thuong, mau_thuong);
	}
	printf("\n********\n");
	printf("KET THUC TINH TOAN !!!\n");
}

int main()
{
	int chon;
	do
	{
		printf("===================================================================\n");
		printf("MENU Chuc Nang: \n");
		printf("1.Chuc nang so 1: Kiem tra so nguyen.\n");
		printf("2.Chuc nang so 2: Tim uoc so chung va boi so chung cua hai so.\n");
		printf("3.Chuc nang so 3: Tinh tien cho quan karaoke.\n");
		printf("4.Chuc nang so 4: Tinh tien dien.\n");
		printf("5.Chuc nang so 5: Doi tien\n");
		printf("6 Chuc nang so 6: Tinh lai suat vay ngan hang tra gop.\n");
		printf("7.Chuc nang so 7: Vay tien mua xe.\n");
		printf("8.Chuc nang so 8: Sap xep thong tin sinh vien.\n");
		printf("9.Chuc nang so 9: Xay dung game FPOLY LOTT.\n");
		printf("10.Chuc nang so 10: Tinh toan phan so.\n");
		printf("0. Thoat chuong trinh.\n");
		printf("===================================================================\n");
		printf("Vui long chon chuc nang tren MENU [0-10] : ");
		scanf_s("%d", &chon);
		system("cls");

		switch (chon)
		{
		case 1:
			kiem_tra_so_nguyen();
			break;
		case 2:
			tim_uoc_so_chung_va_boi_so_chung_cua_hai_so();
			break;
		case 3:
			tinh_tien_cho_quan_karaoke();
			break;
		case 4:
			tinh_tien_dien();
			break;
		case 5:
			doi_tien();
			break;
		case 6:
			tinh_lai_suat_vay_ngan_hang_tra_gop();
			break;
		case 7:
			vay_tien_mua_xe();
			break;
		case 8:
			sap_xem_thong_tin_sinh_vien();
			break;
		case 9:
			xay_dung_game_FPOLY_LOTT();
			break;
		case 10:
			tinh_toan_phan_so();
			break;
		case 0:
			printf("Thoat chuong trinh\n");
			break;
		default:
			printf("Chuc nang ban chon khong hop le. Vui long chon lai!\n");
			break;
		}
	} while (chon != 0);
}