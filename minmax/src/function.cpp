#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    // TODO: Adicione aqui sua solução.

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    int menElemento=0, posMenElemento=0, maiElemento=0, posMaiElemento=0;

    if (n==0){
        
        return {-1,-1};

    }else{
        menElemento=V[0]; 
        maiElemento=V[0];
        for (size_t i = 0; i < n; i++){

            if (menElemento > V[i]){
                menElemento= V[i];
                posMenElemento= i;
            }

            if (maiElemento <= V[i]){
                maiElemento=V[i];
                posMaiElemento= i;
            }
            
            
        }

        return {posMenElemento, posMaiElemento};
    }
}
