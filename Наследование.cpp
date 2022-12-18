#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string brand;
    int cylinders;
    int power;
    void change_power();
    void change();
   
};

class Lorry : public Car{
    public:
    int lc;
    void change_brand();
    void change_lc();
    void display();
};

void Lorry::display(){
    cout << "Brand: " << brand << endl;
    cout << "Cylinders: " << cylinders << endl;
    cout << "Power: " << power << endl;
    cout << "Load capacity: " << lc << endl;
}

void Car::change(){
    cout << "New brand, cylinders, power: ";
    cin >> brand >> cylinders >> power;
}

void Car::change_power(){
    cout << "New power: ";
    cin >> power;
}

void Lorry::change_brand(){
    cout << "New brand: ";
    cin >> brand;
}

void Lorry::change_lc(){
    cout << "New load capacity: ";
    cin >> lc;
}

int main(){
    Lorry l;
    l.change_power();
    l.change();
    l.change_brand();
    l.change_lc();
    l.display();
}