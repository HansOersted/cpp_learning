/* Desried results
Array 1: [ 1 2 3 4 5 ]
Array 2: [ 10 20 30 ]
Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/

# include <iostream>

void print(const int *const,const size_t);
int * apply_all(const int *const, const size_t, const int *const, const size_t);

int main() {
    constexpr size_t size_array1 {5};
    constexpr int array1[] {1,2,3,4,5};

    constexpr size_t size_array2 {3};
    constexpr int array2[] {10,20,30};

    std::cout << "Array 1: ";
    print(array1,size_array1);

    std::cout << "Array 2: ";
    print(array2,size_array2);

    int *results = apply_all(array1, size_array1, array2, size_array2);
    std::cout << "Result: ";
    print(results, size_array1 * size_array2);

    delete [] results;

    return 0;
}


void print(const int *const array_ptr,const size_t size) {
    std::cout << "[ ";
    for (size_t i=0; i<size; i++){
        std::cout << *(array_ptr + i) << " ";
    }
    std::cout << "]";
    std::cout << std::endl;
}


int * apply_all(const int *const array_ptr1, const size_t size1, const int *const array_ptr2, const size_t size2){
    const size_t size { size1 * size2 };
    int * results {nullptr};
    results = new int [size];
    int index {0};
    for (size_t i=0; i<size2; i++){
        for (size_t j=0; j<size1; j++){
            index = size1 * i + j;
            *(results + index) = *(array_ptr2 + i) * *(array_ptr1 + j);
        }
    }
    return results;
}