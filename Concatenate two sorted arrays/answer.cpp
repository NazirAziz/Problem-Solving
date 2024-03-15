// Concatenate two sored arrays in O(n)
#include <iostream>
int *concat(int *A, int sizeOfA, int *B ,int sizeofB){
    int *C = new int[sizeOfA + sizeofB];
    int i = 0, j = 0, index = 0; 
    while (i < sizeOfA && j < sizeofB){
        if (A[i] <= B[j]){
            C[index] = A[i];
            i++;
            index++;
        }else if (B[j] < A[i]){
            C[index] = B[j];
            j++;
            index++;
        }
    }

    while (i < sizeOfA){
        C[index] = A[i];
        i++;
        index++;
    }

    while (j < sizeofB){
        C[index] = B[j];
        j++;
        index++;
    }
    return C;
}
int main(){
    int A[5] {10,22,55,67,89};
    int B[5] {25,41,64,80,86};
    int *C = concat(A,5,B,5);
    for (int i = 0; i < 10; ++i)
        std::cout << C[i] << " ";

    delete[] C;


}
