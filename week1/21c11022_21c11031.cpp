#include <algorithm>
#include <cmath>
#include <ctime>
#include <iostream>
#include <map>
#include <string>

// prototype
// chuong1
void my_sum();
void my_substract();
void my_sin();
void my_square_root();
void my_divide();

//chuong 2
void tinh_nam_sinh();
void in_ki_tu_hoa();
void tinh_tien();

int main()
{
    // Vi du chuong 1
    my_sum();
    my_substract();
    my_sin();
    my_square_root();
    my_divide();

    // Bai tap chuong 2
    tinh_nam_sinh();
    in_ki_tu_hoa();
    tinh_tien();
    return 0;
}

void my_sum()
{
    std::cout << "ham my_sum\n";
    double a = 0;
    double b = 0;
    std::cout << "Nhap a: "; std::cin >> a;
    std::cout << "Nhap b: "; std::cin >> b;
    double kq = a + b;
    std::cout << "Ket qua la: " << kq << std::endl;
}


void my_substract()
{
    std::cout << "ham my_substract\n";
    double a = 0;
    double b = 0;
    std::cout << "Nhap a: "; std::cin >> a;
    std::cout << "Nhap b: "; std::cin >> b;
    double kq = a - b;
    std::cout << "Ket qua: " << a << " - " << b << " = " << kq << std::endl;
}

void my_sin()
{
    std::cout << "ham my_sin\n";
    double a = 0;
    std::cout << "Nhap a: "; std::cin >> a;
    double kq = std::sin(a);
    std::cout << "Ket qua sin(" << a << ") = " << kq << std::endl;

}

void my_square_root()
{
    std::cout << "ham my_square_root\n";
    double a = 0;
    std::cout << "Nhap a: "; std::cin >> a;
    double kq = std::sqrt(a);
    std::cout << "can bac hai cua " << a << " la " << kq << std::endl;
}

void my_divide()
{
    std::cout << "ham my_divide\n";
    double a = 0;
    double b = 0;
    std::cout << "Nhap a: "; std::cin >> a;
    std::cout << "Nhap b: "; std::cin >> b;
    if (b == 0) {
        std::cout << a << "/" << b << " khong ton tai\n";
    } else {
        double kq = a / b;
        std::cout << "Ket qua: " << a << " / " << b << " = " << kq << std::endl;
    }
}

void tinh_nam_sinh()
{
    double n = 0;
    time_t current_time = time(0);
    tm *local_time = localtime(&current_time);
    int current_year = 1900 + local_time->tm_year;
    std::cout << "Nhap nam sinh cua ban: "; std::cin >> n;
    if (n < 0 || n > current_year) {
        std::cout << "Nam sinh khong hop le\n";
    } else {
        std::cout << "So tuoi cua ban la: " << current_year - n << std::endl;
    }
}

void in_ki_tu_hoa()
{
    std::string str;
    std::cout << "Nhap chuoi ki tu: "; std::cin >> str;
    std::string str_bk = str;
    std::for_each(str.begin(), str.end(), [](char &c) {c = ::toupper(c);});
    std::cout << "Chuoi ki tu hoa cua " << str_bk << " la " << str << std::endl;
}

void tinh_tien()
{
    int n = 0;
    std::cout << "Nhap so tien: "; std::cin >> n;
    int n_bk = n;
    std::map<int, int> so_tien = {
        {500, 0},
        {200, 0},
        {100, 0},
        {50, 0},
        {20, 0},
        {10, 0}
    };
    if (n >= 500000) {
        so_tien[500] = n / 500000;
        n = n % 500000;
    }
    if (n >= 200) {
        so_tien[200] = n / 200000;
        n = n % 200000;
    }
    if (n >= 100000) {
        so_tien[100] = n / 100000;
        n %= 100000;
    }
    if (n >= 50000) {
        so_tien[50] = n / 50000;
        n %= 50000;
    }
    if (n >= 10) {
        so_tien[10] = n / 10000;
        n %= 10000;
    }

    std::cout << "So tien " << n << " tuong duong voi\n";
    for (auto it = so_tien.rbegin(); it != so_tien.rend(); it++) {
        if (it->second != 0) {
            std::cout << it->second << " to " << it->first << " ngan dong\n";
        }
    }
}

