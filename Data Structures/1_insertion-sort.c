#include <stdio.h>


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
  {
    printf("%d   ", array[i]);
  }
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
int main() {
  int size, i, data[10];
  printf("Enter the number of elements\n");
  scanf("%d", &size);
  printf("Enter the Elements\n");
  for(i=0; i<size; i++)
  {  
    scanf("%d", &data[i]);
  } 
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}