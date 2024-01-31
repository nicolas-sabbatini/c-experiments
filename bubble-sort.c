#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Vector {
  int size;
  int *data;
};

void printArray(struct Vector *array) {
  for (int i = 0; i < array->size; i++) {
    printf("%d ", array->data[i]);
  }
  printf("\n");
}

void bubbleSort(struct Vector *array) {
  for (int i = array->size - 1; i > 0; i--) {
    printArray(array);
    for (int j = 0; j < i; j++) {
      if (array->data[j] > array->data[j + 1]) {
        int temp = array->data[j];
        array->data[j] = array->data[j + 1];
        array->data[j + 1] = temp;
      }
    }
  }
  printArray(array);
}

int main(void) {
  srand(time(NULL));
  printf("Bubble Sort\n");
  // Create a random array
  struct Vector *toSort = malloc(sizeof(struct Vector));
  toSort->size = rand() % 5 + 5;
  toSort->data = calloc(toSort->size, sizeof(int));
  for (int i = 0; i < toSort->size; i++) {
    toSort->data[i] = rand() % 100;
  }

  bubbleSort(toSort);

  free(toSort->data);
  free(toSort);

  return 0;
}
