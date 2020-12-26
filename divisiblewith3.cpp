#include <iostream>
using namespace std;

int djeljivi_sa_tri(int x){
  if (x%3==0){
    return true;
  }
  return false;
}

int main(){
  int n;
  cin>>n;
  for (int i=5; i<=n; i++){
    if (djeljivi_sa_tri(i)==true){
      cout<<i<<endl;
    }
  }
  return 0;
}