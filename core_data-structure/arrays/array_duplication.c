#include <stdio.h>
#include <stdlib.h>

int array_duplication(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int idx = abs(arr[i]);
    if (arr[idx] < 0) {
      return idx;
    }
    arr[idx] = -arr[idx];
  }
  return -1;
}


int main() {
  int arr[] = {10, 20, 30, 40, 30, 60, 50};
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("Duplicate element is %d\n", array_duplication(arr, size));
  return 0;
}
