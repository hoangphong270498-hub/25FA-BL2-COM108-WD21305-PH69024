#include <stdio.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
	printf("\n");
}

void sapXepPhanTuMang()
{
	int mangSoNguyen[4];
	int tmp;
	int kichthuoc;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &kichthuoc);
	printf("Nhap du lieu cho mang %d phan tu\n", kichthuoc);
	for (int i = 0; i < kichthuoc; i++)
	{
		printf("mang[%d] = ", i);
		scanf("%d", &mangSoNguyen[i]);
	}
	printf("Sap xep tang dan cho mang %d phan tu\n", kichthuoc);
	for (int i = 0; i < kichthuoc - 1; i++)
	{
		if (mangSoNguyen[i] > mangSoNguyen[i+1])
		{
			tmp = mangSoNguyen[i];
			mangSoNguyen[i] = mangSoNguyen[i + 1];
			mangSoNguyen[i + 1] = tmp;
			i = -1;
		}
	}

	printf("Xuat du lieu cho mang %d phan tu\n", kichthuoc);
	for (int i = 0; i < kichthuoc; i++)
	{
		printf("mang[%d] = %d\n", i ,mangSoNguyen[i]);
	}

}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			sapXepPhanTuMang;
			break;
		case 3:
			// ham goi chuc nang 3
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}

}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. TEN chuc nang 2");
		printf("\n");
		printf("3. TEN chuc nang 3");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			sapXepPhanTuMang();
			break;
		case 3:
			// ham goi chuc nang 3
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}
	} while (chonChucNang != 0);
}


// GV: AnhTT184