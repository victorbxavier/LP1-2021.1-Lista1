/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void){
    // TODO: Adicione aqui seu código.

    int xie,xsd,xp,yie,ysd,yp;
    
    Ponto ie,sd,p;

    while(cin >> std::ws >> xie >> yie >> xsd >> ysd >> xp >> yp){

        ie={xie,yie};
        sd={xsd,ysd};
        p={xp,yp};

        if((ie.x != sd.x) && (ie.y != sd.y)){

            if(pt_in_rect(ie,sd,p) == INSIDE){
                cout << "inside\n";
            }else if(pt_in_rect(ie,sd,p) == BORDER){
                cout << "border\n";
            }else{
                cout << "outside\n";
            }
        }
    }

    return 0;
}
