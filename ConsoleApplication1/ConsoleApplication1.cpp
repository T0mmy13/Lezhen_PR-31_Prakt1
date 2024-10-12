#include <iostream>

/*
int main()
{
    setlocale(LC_ALL, "RU");
    std::cout << "Введите 1 целое\n";
    int x; int sum = 0;
    std::cin >> x;
    for (int i = 1; i < x; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    std::cout << sum;
}
*/

int main()
{
    setlocale(LC_ALL, "RU");
    std::cout << "Введите 1 целое\n";
    int k;
    std::cin >> k;
    while (k != 0) {
        if (k % 10 == 1) {
            k /= 10;
            if (k % 10 == 2) {
                k /= 10;
                if (k % 10 == 3) {
                    std::cout << "Последовательность 321 найдена";
                    break;
                }
            }
        }
        else {
            k /= 10;
        }        
    }        
}
