#include<iostream>
#include<list>
#include<iterator>


using namespace std;

// fonction pour afficher les elements d'une liste 
void showlist(list <int> g)
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout << ' ' << *it;
cout << '\n';
}

int main(){

list <int> list1={};
int e=0;
int i=0;
int n=0;
cout<<"entrer la longeure de la liste "<<endl;
cin>>n;

//fonction while qui permet d'ajouter les elements aupres de l'utilisateur
while(i<n){
cout<<"entrer l'element"<< i+1 << "de  la liste" <<endl;
cin>>e;
list1.push_back(e);
i++;
}
// affichage de la liste
cout<<"la liste  est :" <<endl;
showlist(list1);
// fonction sort predefinie pour trier les elements de la liste en ordre croissant
 list1.sort();
cout<<"la liste triée est :" <<endl;
showlist(list1);
}
