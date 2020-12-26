#include <iostream>
using namespace std;

void vrati_iz_binarnog(int n){
  bool niz[n];
  int i=0;

  while (n>0){
    niz[i]=n*2;
    n=n*2;
    i++;
  }
  for (int j=i-1; j>=0; j--){
    cout<<niz[j];
  }
}

int main(){
  int n;
  cin>>n;
  vrati_iz_binarnog(n);
}