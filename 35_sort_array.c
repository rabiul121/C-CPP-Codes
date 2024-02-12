//
// Created by robi on 2/12/2024.
//
#include <stdio.h>


void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}


int main() {
    int arr[] = {5, 8, 1, 7, 3, 2, 6, 9, 0, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);
    displayArray(arr, size);
    return 0;
}