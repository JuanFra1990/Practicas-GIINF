#include <iostream>
using namespace std;

int main () {
    int producto;
    cout << "¿Cual es el precio del producto?"<<endl;
    cin >> producto;
    cout << "El precio del producto con iva es: "<<producto*0.21+producto<<endl;
    return 0;
}
