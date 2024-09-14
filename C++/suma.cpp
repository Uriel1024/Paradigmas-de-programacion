#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

void suma(int[], int,int, int &, int &);

int main(){
  int n,target;
  srand(time(0));
  cout<<"Ingresa el tamano del arreglo: ";
  cin>>n;
  cout<<"Ingresa el numero a buscar:";
  cin>>target;
  int lista[n];
  for(int i = 0; i < n ; i++){
   lista[i] = rand() % 10;
  }
  int a,b;
  suma(lista, n,target , a, b);
  cout<<"Lista: "; 
  for(int j=0 ; j<n ; j++){
    cout<<lista[j]<<",";
  }
  if(a >= 0 && a < 10){
    cout<<"\nLos numeros de la lista son: "<<a<<b;
  }else{
    cout<<"\nEl par de numeros no esta en la lista";  
  }
}

void suma(int array[], int n,int target, int &a, int &b){
  for(int i =0 ; i < n ; i++ ){
    for(int j = 0 ; j < n ; j++){
      if(array[i] + array[j] ==  target){
        a = i;
        b = j;
        break;
      }
    } 
  }
}
