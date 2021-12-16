#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void afficherDateEtHeure(const string& s)
{
    //la longeur de la chaine de caractere doit etre egale a 12 caracteres
    if ( s.length() != 12 )
        cerr << "Chaine invalide." << endl;
    else
    {
        //substr() is a predefined function used for string handling
        cout << "Date  : " << s.substr(0,2) << "/" << s.substr(2,2) << "/" << s.substr(4,4) << endl;
        cout << "Heure : " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
    }
}

int main(int argc, char** argv)
{
    string s("010920091123");
    afficherDateEtHeure(s); 
}
