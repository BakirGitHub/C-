#include <iostream>
using namespace std;

//nema pristup dinamickoj lokaciji varijable x, pa je ne moze mijenjati
void vrijednost(int a){
  a = 15;
}
//ima pristup dinamickoj lokaciji memorije pa je moze mijenjati
void referenca(int *b){
  *b = 80;
}

int main(){
  int x=5;
  int y=7;

  cout<<x<<endl;
  cout<<y<<endl;

  vrijednost(x);
  referenca(&y);

  cout<<x<<endl;
  cout<<y<<endl;
  return 0;
}