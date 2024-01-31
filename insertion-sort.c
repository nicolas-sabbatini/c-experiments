#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArray(int *array, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int *array, int size) {
  for (int i = 1; i < size; i++) {
    printArray(array, size);
    int j = i;
    while (j > 0 && array[j] < array[j - 1]) {
      int temp = array[j];
      array[j] = array[j - 1];
      array[j - 1] = temp;
      j--;
    }
  }
  printArray(array, size);
}

int main(void) {
  srand(time(NULL));
  printf("Insertion Sort\n");
  int array[SIZE];
  for (int i = 0; i < SIZE; i++) {
    array[i] = rand() % 100;
  }

  insertionSort(array, SIZE);

  return 0;
}
