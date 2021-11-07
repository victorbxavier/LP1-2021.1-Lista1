#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr ){
    size_t tam=arr.size()/2;
    size_t cont=arr.size()-1;
    for (size_t i = 0; i < tam; i++){
        std::swap(arr[i],arr[cont]);
        --cont;
    }
    
}
