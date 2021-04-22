#include <iostream>

using namespace std;
int main() {
  float altura, base;
  float area;

  cout <<"Calcular el area del traingulo ";

  cout <<"\nDigite la altura: "; cin>>altura;
  cout <<"Digite la base: "; cin>>base;
  area = (base*altura)/2;
  cout <<"El area del triangulo es " <<area;
  
  return 0;
}