// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void timGiaTriLonVaNhoNhat()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[4];   
    int i;

    for (i = 0; i < n; i++) 
    {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    int max = mang[0];
    int min = mang[0];

    for (i = 0; i < n; i++) {
        if (mang[i] > max)
            max = mang[i];
        if (mang[i] < min)
            min = mang[i];
    }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
    return 0;

}
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            timGiaTriLonVaNhoNhat;
            break;
        case 2:
            break;
        case 3:
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
        printf("1. Tim gia tri lon nhat");
        printf("\n");
        printf("2. Tim gia tri nho nhat");
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
            timGiaTriLonVaNhoNhat;
            break;
        case 2:
            lapChucNang;
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


// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184