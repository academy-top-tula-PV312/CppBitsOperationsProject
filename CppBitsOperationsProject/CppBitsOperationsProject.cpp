// CppBitsOperationsProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <iomanip>

void bin(int num)
{
    if (num >= 2)
        bin(num / 2);
    std::cout << num % 2;
}

int main()
{
    /*
    unsigned char a{ 89 };
    unsigned char b{ 210 };

    std::cout << (int)a << "\n";
    std::cout << (int)b << "\n";

    std::cout << "&: " << (a & b) << "\n";
    std::cout << "|: " << (a | b) << "\n";
    std::cout << "^: " << (a ^ b) << "\n";

    std::cout << "<<2: " << (int)(unsigned char)(a << 2) << "\n";
    std::cout << ">>2: " << (int)(unsigned char)(a >> 2) << "\n";

    std::cout << "~a: " << (int)(unsigned char)(~a) << "\n";

    std::cout << "\n";

    int num{ 120 };
    std::cout << "123 << 1: " << (num << 1) << "\n";
    std::cout << "123 << 2: " << (num << 2) << "\n";
    std::cout << "123 << 3: " << (num << 3) << "\n";
    std::cout << "123 << 4: " << (num << 4) << "\n";

    std::cout << "123 >> 1: " << (num >> 1) << "\n";
    std::cout << "123 >> 2: " << (num >> 2) << "\n";
    std::cout << "123 >> 3: " << (num >> 3) << "\n";
    std::cout << "123 >> 4: " << (num >> 4) << "\n";
    */

    /*
    bool weapon[8];

    unsigned char w{ 35 };
    bin(w);
    std::cout << "\n";

    w = w | (1 << 3);
    bin(w);
    std::cout << "\n";

    w = w & ~(1 << 1);
    bin(w);
    std::cout << "\n";
    */

    unsigned int num{ 5 };
    std::cout << (~num + 1) << "\n";
}
