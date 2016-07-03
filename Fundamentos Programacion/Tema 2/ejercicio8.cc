#include <iostream>

using namespace std;

int main () {
int n, m;
float resto ;
cout << "Introduce un numero" << endl;
cin >> n;
m=2;
resto=n%m;
if (resto==0)
    cout << "El numero " << n << " Es par" << endl;
else
    cout << "El numero " << n << " Es impar" << endl;

return 0;
}
