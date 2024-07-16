#include <iostream>
#include <windows.h>

void param(int volue, int power, int result = 1)
{
    for (int i = 0; i < power; ++i)
    {
        result *= volue;
    }
    std::cout << volue << " в степени " << power << " = " << result;
    std::cout << std::endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    param(5, 2);
    param(3, 3);
    param(4, 4);

    return 0;
}