#include <iostream>

using namespace std;


class Complex
{
public:
    float real;
    float imaginary;
    void setValue(float re,float im);
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);
};


void Complex::setValue(float re,float im)
{
    real = re;
    imaginary = im;
}


Complex Complex::operator+(Complex second){
    Complex result;
    result.imaginary = this->imaginary + second.imaginary;
    result.real = this->real + second.real;
    return result;
}

Complex Complex::operator-(Complex second){
    Complex result;
    result.imaginary = this->imaginary - second.imaginary;
    result.real = this->real - second.real;
    return result;
}

Complex Complex::operator*(Complex second){
    Complex result;
    result.real = this->real * second.real - this->imaginary * second.imaginary;
    result.imaginary = this->real * second.imaginary + this->imaginary * second.real;
    return result;
}


Complex Complex::operator/(Complex second){
    Complex result;
       result.real = (this->real * second.real + this->imaginary * second.imaginary) /
                (second.real * second.real + second.imaginary * second.imaginary);
        result.imaginary = (this->imaginary * second.real - this->real * second.imaginary) /
                (second.real * second.real + second.imaginary * second.imaginary);
    return result;
}
     



Complex arithmetics(Complex first,Complex second){
    Complex result; 
    float tempRe,tempIm;
    char operation ;
   
    cout << " Choix de l'Operation: \n";
    cout << "1: +\n";
    cout << "2: -\n";
    cout << "3: *\n";
    cout << "4: /\n";
    cin >> operation;

     
    switch (operation)
    {
    case '1':
        result = first + second;
        break;
     case '2':
        result = first - second;
        break;
     case '3':
        result = first * second;        
        break;
     case '4':
        result = first / second;
        break;
    }

    return result;
    
}

int main(int argc, char const *argv[])
{
    float tempRe,tempIm;

    
    Complex z1,z2;
    
    
    cout << "entre la valeur reel du premier nombre: " << endl;
    cin >> tempRe;
    cout << "entre la valeur imaginaire du premier nombre: " << endl;
    cin >> tempIm;
    z1.setValue(tempRe,tempIm);

    cout << "entre la valeur reel du deuxieme nombre: " << endl;
    cin >> tempRe;
    cout << "entre la valeur imaginaire du deuxieme nombre: " << endl;
    cin >> tempIm;
    z2.setValue(tempRe,tempIm);

    
    cout << "le Nombre z1: " << z1.real << " + " << z1.imaginary << "i \n";
    cout << "le Nombre z2: " << z2.real << " + " << z2.imaginary << "i \n";
    Complex result = arithmetics(z1,z2);

    
    cout << "la resultat est: " << result.real << " + " << result.imaginary << "i \n";

    return 0;
}
