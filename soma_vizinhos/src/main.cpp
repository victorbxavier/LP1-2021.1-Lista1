/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    // TODO: Adicione seu código aqui. 
    int m=0, n=0, soma=0;
    while( cin >> std::ws >> n >> m) {

        if(m<0){

            for (size_t i = 0; i < -m; i++){
                soma=soma+n;
                n--;  
            }

            cout<<soma<<endl;
        }else if (m>0){

            for (size_t i = 0; i < m; i++){
                soma=soma+n;
                n++;
            }

            cout<<soma<<endl;

        }else if (m==0){

            cout<<n<<endl;
        }
        
        soma=0;

    }
    return 0;
}
