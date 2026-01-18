#include <iostream>
using namespace std;

-----------------factorial
int main() {
  cout<<"Prueba del GOTO\n";
  cout << "Ingrese el numero:";
  int n; 
  cin>>n;
  cout << "respuesta : "<<n<<"! = ";
  int res=1;
  ciclo:
    res=res*n;
    n=n-1;
    if(n>1) goto ciclo;
  cout<<res;
}

-----------------fibonacci
int main() {
  cout<<"Prueba del GOTO\n";
  cout << "Ingrese el numero:";
  int n; 
  cin>>n;
  cout << "La serie fibonacci es :";
  int a=0;
  int b=1;
  int con=0;
  ciclo:
    int aux=a;
    cout << a<<" ";
    a=b;
    b=b+aux;
    con++;
    if(con!=n) goto ciclo;
}

-----------------fibonaci inversa
int main() {
  cout<<"Prueba del GOTO\n";
  cout << "Ingrese el numero:";
  int n; 
  cin>>n;
  int v[n];
  cout << "La serie fibonacci es :";
  int a=0;
  int b=1;
  int con=0;
  ciclo1:
    int aux=a;
    v[con]=a;
    a=b;
    b=b+aux;
    con++;
    if(con!=n) goto ciclo1;
  ciclo2:
    con--;
    cout << v[con]<<" ";
    if(con!=0) goto ciclo2;
}
-----------------Suma de fibonaci y su inversa
int main() {
  
  cout<<"Prueba del GOTO\n";
  cout << "Ingrese el numero:";
  int n; 
  cin>>n;
  int v[n];
  cout << "La serie fibonacci es :";
  int a=0;
  int b=1;
  int con=0;
  int con1=0;
  ciclo1:
    int aux=a;
    v[con]=a;
    a=b;
    b=b+aux;
    con++;
    if(con!=n) goto ciclo1;
  
  ciclo2:
    con--;
    int res=v[con]+v[con1];
    cout << res<<" ";
    con1++;
    if(con!=0) goto ciclo2;
}
