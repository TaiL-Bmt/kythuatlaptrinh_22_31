#include <iostream>

#define N 50

void arrayInput(int a[N], int& n);
void arrayOutput(int a[N], int n);
int tongPhanTuChan(int a[N], int n);
int tichPhanTuLe(int a[N], int n);

void array2DInput(int a[][N], int& row, int& col);
void array2DOutput(int a[][N], int row, int col);
void xoayBienTrai(int a[][N], int row, int col);

int main() {
    // Bai 1: mang mot chieu
    if (true) {
        int a[N] = {0};
        int n = 0;
        arrayInput(a, n);
        arrayOutput(a, n);
        std::cout << "Tong cac phan tu chan la: " << tongPhanTuChan(a, n) << std::endl;
        std::cout << "Tich cac phan tu le la: " << tichPhanTuLe(a, n) << std::endl;
    }

    //Bai 2: mang 2 chieu
    if (true) {
        int a2D[N][N] = {{0}};
        int row = 0;
        int col = 0;
        array2DInput(a2D, row, col);
        array2DOutput(a2D, row, col);
        xoayBienTrai(a2D, row, col);
        array2DOutput(a2D, row, col);
    }

    return 0;
}

void arrayInput(int a[N], int& n)
{
    while(true) {
        std::cout << "Nhap so phan tu: "; std::cin >> n;
        if (n < 0 || n > N) {
            std::cout << "Xin nhap lai, so can nhap phai nho hon " << N << std::endl;
        } else {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << "Nhap a[" << i << "] = ";
        std::cin >> a[i];
    }
}

void arrayOutput(int a[N], int n)
{
    if (n > N) {
        std::cout << "So phan tu muon in ra n (" << n << ") lon hon ciheu dai mang N *" << N << ")\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int tongPhanTuChan(int a[N], int n)
{
    int result = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result += a[i];
        }
    }

    return result;
}

int tichPhanTuLe(int a[N], int n)
{
    int result = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            result *= a[i];
        }
    }

    return result;
}

void array2DInput(int a[][N], int& row, int& col)
{
    while (true) {
        std::cout << "Nhap so dong: "; std::cin >> row;
        if (row < 0 || row > N) {
            std::cout << "Nhap lai so dong trong khoang 1~" << N << std::endl;
        } else {
            break;
        }
    }
    while (true) {
        std::cout << "Nhap so cot: "; std::cin >> col;
        if (col < 0 || col > N) {
            std::cout << "Nhap lai so cot trong khoang 1~" << N << std::endl;
        } else {
            break;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << "Nhap phan tu a[" << i << "][" << j << "] = ";
            std::cin >> a[i][j];
        }
    }
}

void array2DOutput(int a[][N], int row, int col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << a[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}

void xoayBienTrai(int a[][N], int row, int col)
{
    if (row < 1 || row > N) {
        std::cout << "Khong the thuc hien xoay bien trai voi so dong la: " << row << std::endl;
        return;
    }
    if (col < 1 || col > N) {
        std::cout << "Khong the thuc hien xoay bien trai voi so dong la: " << col << std::endl;
        return;
    }

    int tmp = 0;
    for (int i = 0; i < row; i++) {
        if (i == 0) { // The first row
            tmp = a[i][0];
            for (int j = 0; j < col - 1; j++) {
                a[i][j] = a[i][j+1];
            }
            a[i][col-1] = a[i+1][col-1];
        } else if (i == row - 1) { // The last row
            for (int j = col-1; j > 0; j--) {
                a[i][j] = a[i][j-1];
            }
            a[i][0] = tmp;
        } else {
            int tmp2 = a[i][0];
            a[i][0] = tmp;
            a[i][col-1] = a[i+1][col-1];
            tmp = tmp2;
        }
    }
}
