#include <iostream>
using namespace std;
#include <string>

int parentesis(string);

int main(){
  string a;
  cout<<"Ingresa parentesis (): ";
  cin >> a;
  int n = parentesis(a);
  cout<<"El numero de () que hay es: " << n<<endl;
  return 0;
}

int parentesis(string a){
  int j = 0; 
  int n = sizeof(a);
  for(int i = 0 ; i < n; i ++ ){
    if((a[i] == '(') && (a[i+1] == ')')){ 
      j ++; 
      i ++; 
    }
  }
  return j;
}
