#include <iostream>
#include <cmath>

// prototype
void my_sum();
void my_substract();
void my_sin();
void my_square_root();
void my_divide();

int main()
{
    my_sum();
    my_substract();
    my_sin();
    my_square_root();
    my_divide();
    return 0;
}

void my_sum()
{
    std::cout << "ham my_sum\n";
    int a = 0;
    int b = 0;
    std::cout << "Nhap a: "; std::cin >> a;
    std::cout << "Nhap b: "; std::cin >> b;
    int kq = a + b;
    std::cout << "Ket qua la: " << kq << std::endl;
}


void my_substract()
{
    std::cout << "ham my_substract\n";
    int a = 0;
    int b = 0;
    std::cout << "Nhap a: "; std::cin >> a;
    std::cout << "Nhap b: "; std::cin >> b;
    int kq = a - b;
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
