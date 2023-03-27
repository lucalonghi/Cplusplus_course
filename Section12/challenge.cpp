#include <iostream>
#include <vector>

using namespace std;

int * apply_all(const int *, int, const int *, int);
void print(const int *, int);

int main()
{
    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};

    cout << "Array 1: ";
    print(array1, 5);

    cout << "Array 2: ";
    print(array2, 3);

    int * result = apply_all(array1, 5, array2, 3);
    cout << "Result: ";
    print(result, 15);
    
    delete[] result;
    return 0;
}

void print(const int * array, int size){

    cout << "[ ";
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

int * apply_all(const int * array1, int size1, const int * array2, int size2){
    int * result = new int[size1*size2];

    for(int i=0; i<size2; i++){

        for(int j=0; j<size1; j++){
            
            result[j+(i*size1)] = array1[j]*array2[i];
        }
    }

    return result;
}