#include <iostream>

using namespace std;

int main(){

    int
        nota,
        cApro,
        cDes,
        maxNota;

    cApro = cDes = 0;
    maxNota = 0; // menos que la minima

    for(int i = 1; i <= 12; i++){
        cout << "Ingrese nota: ";
        cin >> nota;

        if(1 <= nota && nota <= 6)
            cDes++;
        else if(7 <= nota && nota <= 10)
            cApro++;

        if(maxNota < nota){
            maxNota = nota;
        }
    }

    cout << "aprobados: " << cApro << endl;
    cout << "desaprobados: " << cDes << endl;
    cout << "nota maxima: " << maxNota << endl;

    return 0;
}
