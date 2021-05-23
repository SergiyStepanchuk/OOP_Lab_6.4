#include <iostream>
#include <cstring>
#include <cmath>
#include <time.h>

using namespace std;

template<class T>
void print_arr(T* arr, const int &size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template<class T>
void sort_arr(T* arr, const int &size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < size - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    srand(time(NULL));

    int sizeA;
    cout << "Enter size of A array: ";
    cin >> sizeA;

    int* A = new int[sizeA];
    for (int i = 0; i < sizeA; i++) 
        A[i] = rand() % 100;

    cout << endl << "Array A: ";
    print_arr(A, sizeA);

    sort_arr(A, sizeA);

    cout << "Modified array A: ";
    print_arr(A, sizeA);

    delete[] A;
    return 0;
}