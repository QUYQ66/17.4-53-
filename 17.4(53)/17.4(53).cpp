// 17.4(53).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <set>
#include <vector>
#include <iterator>
#include <ctype.h>
using namespace std;

class Date {
public:



    void setDate(int day, int month, int year)
    {
        _day = day;
        _month = month;
        _year = year;
        cout << _year;
    }

    int LeapYear()
    {
        if (_year % 400 != 0)
        {
            if (_year % 100 != 0)
                if (_year % 4 != 0)
                    return 0;
                else return 1;
            else return 1;
        }
        else return 1;
    }
private:
    int _day, _month, _year;
};

void zapisvtxt()
{
    ifstream ifs("data.txt");
    ofstream ofs("punct.txt");
    char ch;

    while (ifs >> ch)
        if (ispunct(static_cast<unsigned char>(ch)))
            ofs << ch;
}
void coutlines()
{
    int n = 0;
    ifstream in("data.txt");
    string line;
    while (getline(in, line))
    {
        n++;
    }
    cout <<"Lines in file - " << n << "\n";
    system("PAUSE");
    system("cls");
}

int main()
{
    setlocale(LC_ALL, "Russian");
    zapisvtxt();
    coutlines();
    
    Date a;
    a.setDate(1, 01, 2000);
    if (a.LeapYear() == 1)
        cout << " - високосный\n";
    else cout << " - НЕ високосный";
    a.setDate(1, 01, 2004);
    if (a.LeapYear() == 1)
        cout << " - високосный\n";
    else cout << " - НЕ високосный";
    a.setDate(1, 01, 2008);
    if (a.LeapYear() == 1)
        cout << " - високосный\n";
    else cout << " - НЕ високосный";
    a.setDate(1, 01, 2012);
    if (a.LeapYear() == 1)
        cout << " - високосный\n";
    else cout << " - НЕ високосный";
    a.setDate(1, 01, 2015);
    if (a.LeapYear() == 1)
        cout << " - високосный\n";
    else cout << " - НЕ високосный";
    
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
