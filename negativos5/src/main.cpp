#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void){
    int num=0,cont=0;
    // TODO: Adicione aqui seu código.
    for (size_t i = 0; i < SIZE; i++){
        cin>>num;
        if (num<0){
            cont++;
        }
        
    }
    cout<<cont;
    

    return 0;
}
