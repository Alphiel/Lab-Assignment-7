#include <stdio.h>

void bubbleSort(int *arr, int size) {
  int i, j, temp, swapCounter = 0;
  
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      // swaps elements
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1]=temp;
        swapCounter++;
      }
    }
    
    // prints swaps in each iteration
    printf("Iteration #%d: %d\n", i + 1, swapCounter);
    swapCounter = 0;
  }
}

int main() {
  int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  int size = sizeof(array) / sizeof(array[0]);
  bubbleSort(array, size);
  return 0;
}