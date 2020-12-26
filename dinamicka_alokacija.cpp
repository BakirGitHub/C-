#include <iostream>
using namespace std;

int main(){
  //korisnik unosi koliko elemenata zeli u nizu
  int a;
  cin>>a;
  //kreiramo niz sa a elemenata
  int * niz = new int [a];
  //for petljom unosimo clanove uniz
  for (int i=0; i<a; i++){
    cin>>niz[i];
  }
  //for petljom ispisujemo clanove niza
  for (int i=0; i<a; i++){
    cout<<niz[i];
  }
  //brisanjem niza, oslobadjamo memoriju koju smo zauzeli
  delete []niz;
  return 0;
}