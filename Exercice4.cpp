#include <iostream>
#include <list>
#include <cstring>
#include <iterator>

using namespace std;
// creation d'une classe personne
class Personne {
public :
string nom;
string prenom;
string age ;
public :
Personne(string nom , string prenom ,string age ){
this->nom = nom ;
this->prenom = prenom;
this->age = age;
}
};
int main()
{
	string ag , N, P ;
	int n;
//initialisation de la liste personne
list<Personne> pers;

cout<<"entrez la nombre des personnes  :  ",
cin>>n;
for (int i = 0; i < n; ++i)
{
     cout<<"donnez le nom de personne numero "<<i+1<<" : " ;
	 cin>>N;
	 cout<<"donnez le prenom de personne numero "<<i+1<<" : " ;
	 cin>>P;
	 cout<<"donnez l'age de personne numero "<<i+1<<" : " ;
	 cin>>ag;
	 cout<<endl;	 	
	pers.push_back(Personne(N,P,ag));
    
}

list<Personne>::iterator it;
//boucle pour lire toute la liste personne 
for (it = pers.begin(); it != pers.end(); ++it){
cout << it->nom <<"\t";
cout << it->prenom<<"\t";
cout << it->age<<endl;
}

return 0;
}
