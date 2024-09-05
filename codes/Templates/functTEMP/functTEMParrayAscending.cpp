
//reference from chatGPt
#include <iostream>
using namespace std;
// Template function to sort an array in ascending order
template <typename T>
void sortArray(T arr[], int size) {
    // Implementing a simple bubble sort algorithm
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to read an array from user input
template <typename T>
void readArray(T arr[], int size) {
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

int main() {
    // Handle int type
    int intSize;
    cout << "Enter the number of elements for integer array: ";
    cin >> intSize;
    
    int* intArr = new int[intSize];
    
    readArray(intArr, intSize);
    
    cout << "Original int array: ";
    printArray(intArr, intSize);
    
    sortArray(intArr, intSize);
    
    cout << "Sorted int array: ";
    printArray(intArr, intSize);
    
    delete[] intArr; // Don't forget to deallocate memory

    // Handle float type
    int floatSize;
    cout << "Enter the number of elements for float array: ";
    cin >> floatSize;
    
    float* floatArr = new float[floatSize];
    
    readArray(floatArr, floatSize);
    
    cout << "Original float array: ";
    printArray(floatArr, floatSize);
    
    sortArray(floatArr, floatSize);
    
    cout << "Sorted float array: ";
    printArray(floatArr, floatSize);
    
    delete[] floatArr; // Don't forget to deallocate memory

    return 0;
}
