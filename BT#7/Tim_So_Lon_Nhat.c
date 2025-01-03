#include <stdio.h>
#include <conio.h>
#define Max 100

//nhap
void nhap(float a[], int n)
{
    do
    {
        printf("\nNhap so phan tu : ");
        scanf("%d", &n);
        if (n <= 0 || n > Max)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    } while (n <+ 0 || n > Max);
    for (int i; i < n ; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
    
}

//max number
float lonnhat(float a[], int n)
{
    float ln = a[0];
    for (int i = 0; i < n ; i++)
    {
        if (a[i]> ln)
        {
            ln = a[i];
        }
    }
    return ln;
}

//xuat
void xuat(float a[],  int n )
{
    for (int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

int main()
{
    int n;
    float a[Max];
    nhap(a, n);
    xuat(a, n);

    float ln = lonnhat(a, n);

    printf("\nPhan tu lon nhat trong mang la %.3f", ln);

    getch();
    return 0;
}