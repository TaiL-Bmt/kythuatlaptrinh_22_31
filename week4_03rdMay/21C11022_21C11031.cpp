#include <iostream>

#define M0 0
#define M1 4000000
#define M2 6000000
#define M3 9000000
#define M4 14000000
#define M5 24000000
#define M6 44000000
#define M7 84000000

#define THUE0 0
#define THUE1 5
#define THUE2 10
#define THUE3 15
#define THUE4 20
#define THUE5 25
#define THUE6 30
#define THUE7 35


unsigned long TinhThue(unsigned long thuNhap);

int main() {
    unsigned long income = 0;
    std::cout << "Enter income: "; std::cin >> income;
    std::cout << "Thue thu nhap la: " << TinhThue(income) << std::endl;
    return 0;
}

unsigned long TinhThue(unsigned long thuNhap)
{
    unsigned long result = 0;
    if (thuNhap > M7) {
        result += (thuNhap - M7) * THUE7;
        thuNhap = M7;
    }
    if (thuNhap > M6) {
        result += (thuNhap - M6) * THUE6;
        thuNhap = M6;
    }
    if (thuNhap > M5) {
        result += (thuNhap - M5) * THUE5;
        thuNhap = M5;
    }
    if (thuNhap > M4) {
        result += (thuNhap - M4) * THUE4;
        thuNhap = M4;
    }
    if (thuNhap > M3) {
        result += (thuNhap - M3) * THUE3;
        thuNhap = M3;
    }
    if (thuNhap > M2) {
        result += (thuNhap - M2) * THUE2;
        thuNhap = M2;
    }
    if (thuNhap > M1) {
        result += (thuNhap - M1) * THUE1;
        thuNhap = M1;
    }

    return result/100;
}
