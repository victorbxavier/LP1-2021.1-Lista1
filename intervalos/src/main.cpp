/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.
    int x, qtdNums=0;
    double porcentagens[]={0.0, 0.0, 0.0, 0.0, 0.0};

    while( cin >> std::ws >> x) {
    // realização da contagem em relação aos intervalos

        if ((x>=0) && (x<25)){

            porcentagens[0]++;

        }else if ((x>=25) && (x<50)){

            porcentagens[1]++;

        }else if ((x>=50) && (x<75)){

            porcentagens[2]++;
            
        }else if ((x>=75) && (x<100)){

            porcentagens[3]++;
            
        }else{
            
            porcentagens[4]++;

        }
        
        qtdNums++;
        
    }

    for (size_t i = 0; i < 5; i++){

        porcentagens[i]=( porcentagens[i] / (double)qtdNums )*100;
        cout<<setprecision(4)<<porcentagens[i]<<endl;

    }
    
    



    return 0;
}
