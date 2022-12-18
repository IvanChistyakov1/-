#include <iostream>
#include <cmath>
using namespace std;

struct Para{
    public:
    float first;
    int second;
    void read();
    void display();
    void power();
    Para(float f, int s){first = f; second = s;}
    Para(){first = 0; second = 0;}
};

void Para::read(){
    cout << "First, Second: ";
    cin >> first >> second;
}

void Para::display(){
    cout << "first = " << first << endl;
    cout << "second = " << second << endl;
}

void Para::power(){
    cout << "first^second: " << pow(first, second) << endl;
}

Para* make_mun(){
    float first;
    int second;
    cout << "first: ";
    cin >> first;
    if (!cin){
        cout <<"Input error!" << endl;
        cin.clear();
        return NULL;
    }
    cout << "Input second: ";
    cin >> second;
    if (!cin){
        cout <<"\nInput error!" << endl;
        cin.clear();
        return NULL;
    }
    Para* p = new Para(first, second);
    return p;
}

int main(){
    Para* p;
    if(p = make_mun()){p->display();}
    p->power();
}

