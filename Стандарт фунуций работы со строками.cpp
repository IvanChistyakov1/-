#include <string>
#include <iostream>
#include <cctype>
#include <clocale>
using namespace std;
 
int main()
{
    setlocale(LC_CTYPE, "rus");
    string str("Простое предложение для примера.");
    for (int i = 0; i < str.size(); ++i)
    {
        if (0 == i || ' ' == str[i - 1])
        {
            str[i] = toupper(unsigned char(str[i]));
        }
    }
    cout << str << endl;
}