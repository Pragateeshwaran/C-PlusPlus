#include <iostream>
using namespace std;

void printArray(int arr[], int left, int right) {
    cout << "Subarray [" << left << " to " << right << "]: ";
    for (int i = left; i <= right; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  
    int n2 = right - mid;    
 
    int L[n1], R[n2];
 
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
 
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
 
    while (i < n1)
        arr[k++] = L[i++];
 
    while (j < n2)
        arr[k++] = R[j++];
}
 
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (right + left) / 2 ;
        
        cout << "Splitting [" << left << " to " << right << "] into:";
        cout << " [" << left << " to " << mid << "] and [" << (mid+1) << " to " << right << "]" << endl;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        cout << "Merging: ";
        printArray(arr, left, right);
        merge(arr, left, mid, right);
        cout << "After merge: ";
        printArray(arr, left, right);
        cout << endl;
    }
}
 
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl << endl;
    
    mergeSort(arr, 0, size - 1);
    
    cout << "\nFinal sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}