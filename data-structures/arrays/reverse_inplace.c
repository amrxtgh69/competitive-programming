#include <stdio.h>

int reverse_arr(int arr[], int size) {
  int i = 0, j = size - 1;
  do {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }while (i < j);
  return -1;
} 

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr)/sizeof(arr[1]);
  
  reverse_arr(arr, size);
  printf("Reversed array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
