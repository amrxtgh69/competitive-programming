#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 40, 22, 12, 39, 22, 12};
  int size = sizeof(arr)/sizeof(arr[1]);

  int max = arr[0];
  int min = arr[0];

  for(int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  printf("Max value %d\n", max);
  printf("Min value %d\n", min);
  return 0;
}
