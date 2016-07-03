#include <iostream>
using namespace std;

int fibonaci (int v[], int n){
if (n==0)
    cout <<"Su numero debe ser mayor de 0"<< endl;
if (n==1){
    cout << "El " << n << " numero de fibonaci es:"<< endl;
    cout << v[0];
    };
if (n==2){
    cout << "El " << n << " numero de fibonaci es:"<< endl;
    cout << v[0] << " y " << v[1] << endl;
    };
if (n>2){
    cout << "Los " << n << " numeros de fibonaci son:"<< endl;
    cout << v[0] << "," << v[1];
    for (int i=2; i<n;i++) {
        v[i]=v[i-2]+v[i-1];
        cout << "," << v[i];
    };
  };
};


int main() {
int n;
cout << "Inserte hasta que numero de fibonaci quiere ver: " << endl;
cin >> n;

int* v = new int[n];
v[0]=0;
v[1]=1;
fibonaci(v,n);


return 0;
}
