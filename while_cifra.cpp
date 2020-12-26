#include <iostream>

using namespace std;

int main(){
  //broj elemenata
  int n;
  cout<<"unesite broj n";
  cin>>n;

  int najveca_cifra = 0;
  int niz_brojeva[n];
  
  //unosimo_cifre_u_niz
  for (int i=0; i<n; i++){
    int broj;
    cout<<"unesite broj: ";
    cin>>broj;
    niz_brojeva[i] = broj;
    
    //trazimo najvecu cifru
    int cifra;
    while (broj>0){
      cifra=broj%10;
      if (cifra > najveca_cifra){
        najveca_cifra = cifra;
      }
      broj/=10;
    }
  }

  //trazimo broj sa najvecom frekfencijom najvece cifre 
  int broj;
  int najveci_broj = 0;
  int najveca_frekfencija = 0;

  for (int i=0; i<n; i++){
    broj = niz_brojeva[i];
    int cifra;
    int frekfencija = 0;
    
    while (broj>0){
      cifra = broj%10;
      if (cifra==najveca_cifra)
        frekfencija+=1;
      
      broj/=10;
    } 

    if (frekfencija > najveca_frekfencija){
      najveci_broj = niz_brojeva[i];
      najveca_frekfencija = frekfencija;
      }
    
  }
  cout<<najveci_broj<<" : "<< najveca_frekfencija<<endl;
  return 0;
}