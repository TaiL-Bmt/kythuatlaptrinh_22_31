#include <cmath>
#include <iostream>

// prototype
void sum3();
void sum4();
void dem_so_ki_so();
void tich_cac_ki_so();

int main()
{
    //sum3() Calculate S(x,n)=x + x^2 + x^3 + ... + x^n
    sum3();

    //sum4() Calculate S(n)= sqrt(2 + sqrt(2 + ....
    sum4();

    // Dem so luong ki so cua so nguyen duong
    dem_so_ki_so();

    // Tich cac ki so cua so nguyen duong n
    tich_cac_ki_so();

    return 0;
}

void sum3()
{
    int n = 0;
    float x = 0.0;
    float result = 0;
    float temp = 1;
    std::cout << "Calculate S(x,n) = x + x^2 + x^3 + ... + x^n\n";
    std::cout << "Enter n: "; std::cin >> n;
    std::cout << "x: "; std::cin >> x;

    for (int i = 1; i <= n; i++) {
        temp *= x;
        result += temp;
    }

    std::cout << "Result is " << result << std::endl;
}

void sum4()
{
    int n = 0;
    float result = 0;
    std::cout << "Calculate S(n)= sqrt(2 + sqrt(2 + .... n times\n";
    std::cout << "Enter n: "; std::cin >> n;
    for (int i = 0; i < n; i++) {
        result = sqrt(2 + result);
    }
    std::cout << "Result is : " << result << std::endl;
}

void dem_so_ki_so()
{
    int n = 0;
    float result = 0;
    std::cout << "Dem so ki so cua so nguyen duong n\n";
    std::cout << "Enter n: "; std::cin >> n;
    while (n > 0) {
        result++;
        n /= 10;
    }
    std::cout << "So ki so la: " << result << std::endl;
}

void tich_cac_ki_so()
{
    int n = 0;
    int result = 1;
    std::cout << "Tich cac ki so cua so nguyen duong n\n";
    std::cout << "Enter n: "; std::cin >> n;
    while (n > 0) {
        result *= (n % 10);
        n /= 10;
    }
    std::cout << "Tich cac ki so cua la: " << result << std::endl;
}
