#include <iostream>
using namespace std;

// This function is implemented correctly 
// void printArray(int arr[], int len){
//     cout << "[";
//     for (int i = 0; i < len; i++){
//         cout << arr[i] << " ";
//     }
//     cout << "]" << endl;
// }

// This function is implemented correctly 
// void printArray(int* arr, int len){
//     cout << "[";
//     for (int i = 0; i < len; i++){
//         cout << *(arr+i) << " ";
//     }
//     cout << "]" << endl;
// }

// This function is implemented correctly 
void printArray(int arr[], int len){
    int* p = arr;
    cout << "[";
    for (int i = 0; i < len; i++){
        cout << *(p+i) << " ";
    }
    cout << "]" << endl;
}

// This function is implemented correctly 
int* doubleVal(int arr[], int len){
      int* resultArr = new int[len];
      for (int i = 0; i < len; i++){
           resultArr[i] = 2 * arr[i];
      }
      return resultArr;
}

// This function contains errors 
// int[] doubleVal(int arr[], int len){
//       int* resultArr = new int[len];
//       for (int i = 0; i < len; i++){
//            resultArr[i] = 2 * arr[i];
//       }
//       return resultArr;
// }

// This function contains errors 
// int* doubleVal(int arr[], int len){
//     int resultArr[len];
//     for (int i = 0; i < len; i++){
//         resultArr[i] = 2 * arr[i];
//     }
//     return resultArr;
// }


int main() {
    int arr1[5];
    int arr2[5] = {}; // initializing an array with all 0 elemetns 
    int arr3[] = {1,2,3,4,5};
    int arr4[5] = {1,2,3,4,5};

    cout << "Array 1:" << endl;
    printArray(arr1, 5);
    cout << "Array 2:" << endl;
    printArray(arr2, 5);
    cout << "Array 3:" << endl;
    printArray(arr3, 5);
    cout << "Array 4:" << endl;
    printArray(arr4, 5);

    // Common mistakes using arrays 
    // The line of code commented out below gives compilation error
    // arr1 = arr3 
    for (int i = 0; i < 5; i++){
        arr1[i] = arr3[i];
    }
    cout << "After copying arr3 elements into arr1. arr1:" << endl;
    printArray(arr1, 5);

    int* doubledArr3 = doubleVal(arr3, 5);
    cout << "Result of douleVal on arr3:" << endl;
    printArray(doubledArr3, 5);


    return 0;
}