#include <iostream>
using namespace std;

int parni(int broj){
  if (broj%2==0){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int a,b;
  cin>>a;
  cin>>b;
  if (parni(a)==false and parni(b)==true){
      cout<<"crno polje"<<endl;
  }
  if (parni(a)==false and parni(b)==false){
    cout<<"bijelo je polje"<<endl;
  }
  if (parni(a)==true and parni(b)==false){
    cout<<"crno je polje"<<endl;
  }
  if (parni(a)==true and parni(b)==true){
    cout<<"bijelo je polje"<<endl;
  }
}
