#include <iostream>
#include <cmath>
using namespace std;


void Circle()
{
    #define PI 3.14159
    float R = 1.25;

    float DienTich;
    DienTich = PI * R * R;

    cout << "Hinh tron, ban kinh = " << R << endl;
    cout << "Dien tich = " << DienTich << endl;
}


void varSize()
{
    short Delta = 9;
    cout << "Kich thuoc delta = " << sizeof(Delta) << endl;
    cout << "Kich thuoc kieu int = " << sizeof(int) << endl;
    cout << "Kich thuoc kieu long = " << sizeof(long) << endl; 
}

int main()
{
    // Circle
    #define PI 3.14159
    float R = 1.25;

    float DienTich;
    DienTich = PI * R * R;

    cout << "Hinh tron, ban kinh = " << R << endl;
    cout << "Dien tich = " << DienTich << endl;

    //var Size
    short Delta = 9;
    cout << "Kich thuoc delta = " << sizeof(Delta) << endl;
    cout << "Kich thuoc kieu int = " << sizeof(int) << endl;
    cout << "Kich thuoc kieu long = " << sizeof(long) << endl; 

    // Kieu bool
    bool bVal;
    float x = 46.7F, y = 93.0F, z;
    bVal = (x == y);
    cout << bVal << endl;
    bVal = (x < y);
    cout << bVal << endl;
    z = (x > y) * x + (x <= y) * y;
    cout << z << endl;

    // Kieu char
    char ch = 65;
    cout << ch << endl;
    ch = 't';
    cout << ch << endl;
    cout << "Nhap ch: " << endl;
    //cin >> ch;
    cout << endl;
    cout << "ASCII code: " << (int)ch << endl;
    ch -= ('a' - 'A')*(ch >= 'a' && ch <= 'z');
    cout << "Upper case: " << (char)toupper(ch) << endl;

    // Ham log trong math
    double a = 2, b = 8, c;
    c = log(8)/log(2);
    cout << "c: " << c << endl;

    //Tinh nam sinh
    int birthday = 1995, age;
    cout << "Nhap nam sinh cua ban: " << endl;
    cin >> birthday;
    cout << endl;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;
    age = currentYear - birthday;
    cout << "Tuoi cua ban: " << age << endl;

    // Chuoi in hoa
    char str[] = "Tran Ngoc Thanh";
    char ch;

    cout << "Chuoi ky tu in hoa: " << endl;

    for (int i = 0; i < strlen(str); i++) {

        ch = (char)toupper(str[i]);

        wcout << ch;
    }
    cout << endl;
    return 0;
}