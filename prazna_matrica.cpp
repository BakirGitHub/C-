#include <iostream>
using namespace std;

int main() {
  int a;
  cin>>a;
  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
      if (j==0 or i==0 or i==a-1 or j==a-1){
        cout<<"!";
      }
      else{
        cout<<" ";
      }
    }
  cout<<endl;
  }
}