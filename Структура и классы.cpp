#include <iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imaginary;
    void Init(int rl, int im = 0);
    void Read();
    void Display();
    void Add(Complex x);
    void Sub(Complex x);
    void Mul(Complex x);
    void Div(Complex x);
    void Equ(Complex x);
    void Conj(Complex x);
};

void Complex::Read(){
    cout<<"Enter real : ";
    cin>>real;
    cout<<"Enter imaginary : ";
    cin>>imaginary;
}

void Complex::Display()
{
    cout << "real = " << real << endl;
    cout << "imaginary = " << imaginary << endl;
}

void Complex::Add(Complex x){
    cout << real + x.real << endl;
    cout << imaginary + x.imaginary << endl;
}

void  Complex::Sub(Complex x){
    cout << real - x.real << endl;
    cout << imaginary - x.imaginary << endl;
}

void  Complex::Mul(Complex x){
    cout << real*x.real-imaginary*x.imaginary << endl;
    cout << real*x.imaginary+imaginary*x.real << endl;
}

void Complex::Equ(Complex x){
    cout << ((real == x.real) && (imaginary == x.imaginary)) << endl;
    
}
void Complex::Div(Complex x){
    cout << (real*x.real + imaginary*x.imaginary) / (x.real*x.real + x.imaginary*x.imaginary) << endl;
    cout << (imaginary*x.real + real*x.imaginary) / (x.real*x.real + x.imaginary*x.imaginary) << endl;
}
void Complex::Conj(Complex x){
    cout << "real: " << real << " " << x.real << endl;
    cout << "imaginary: " << imaginary << " " << -x.imaginary << endl;
}

int main(){
    Complex n; 
    Complex n2;
    n.Read();
    n.Display();
    n2.Read();
    n2.Display();
    n.Add(n2);
    n.Sub(n2);
    n.Mul(n2);
    n.Div(n2);
    n.Equ(n2);
    n.Conj(n2);
}
