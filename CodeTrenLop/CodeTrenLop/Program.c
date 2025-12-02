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
void demoMangHaiChieu()
{
	int mang2Chieu[2][3];
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 2; i++)
		{
			printf("mang[%d][%d]= ", i, j);
			scanf("%d", &mang2Chieu[i][j]);
		}

	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d, ", mang2Chieu[i][j]);
		}
		printf("\n");
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
			sapXepPhanTuMang();
			break;
		case 3:
			demoMangHaiChieu();
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
		printf("2. Sap xep mang 1 chieu");
		printf("\n");
		printf("3. Demo mang 2 chieu");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		int tiepTuc = 1;
		while (tiepTuc == 1)
		{
			switch (chonChucNang)
			{
			case 1:
				kiemTraSoNguyen();
				break;
			case 2:
				sapXepPhanTuMang();
				break;
			case 3:
				demoMangHaiChieu();
				break;
			default:
				printf("Chon sai. Chuc nang hop le [0-3]");
				break;
			}

			printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
			scanf("%d", &tiepTuc);
			system("cls");
		}

		

	} while (chonChucNang != 0);
}


// GV: AnhTT184