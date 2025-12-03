// PH67033_Kiều Đức Hải.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

	printf("Chuong trinh dang phat trien\n");

}

void doi_tien()
{

	printf("Chuong trinh dang phat trien\n");

}

void tinh_lai_suat_vay_ngan_hang_tra_gop()
{

	printf("Chuong trinh dang phat trien\n");

}

void vay_tien_mua_xe()
{

	printf("Chuong trinh dang phat trien\n");

}

void sap_xem_thong_tin_sinh_vien()
{

	printf("Chuong trinh dang phat trien\n");

}

void xay_dung_game_FPOLY_LOTT()
{

	printf("Chuong trinh dang phat trien\n");

}

void tinh_toan_phan_so()
{
	printf("Chuong trinh dang phat trien\n");

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