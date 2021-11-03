#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    unsigned int n1=1, n2=1, aux=0;
    std::vector<unsigned int> serie_fibo;

    if (n==1 || n==0){
        return serie_fibo;
    }else{
        serie_fibo.push_back(n1);
        serie_fibo.push_back(n2);

        while ((n1+n2)<n){
            aux=n2;
            n2=n1+n2;

            if (n2>n){
                break;
            }
            
            n1=aux;
            serie_fibo.push_back(n2);
        }

        return serie_fibo;
    }
    
}
