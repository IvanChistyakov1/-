#include <iostream>
#include <locale>
#include <string>
using namespace std;
 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, ".1251");
    int step;
    char inptext[255];
    cout << "Enter the text: ";
    cin.getline(inptext, 255);
    cout << "Enter the step: ";
    cin >> step;
    for (int i = 0; i < strlen(inptext); i++)
    {
        if (step >= 0)
            inptext[i] = (inptext[i] - '�' + step) % 32 + '�';
        else
            inptext[i] = (inptext[i] - '�' + 32 + step) % 32 + '�';
    }
    cout << inptext << endl;
    system("pause");
}