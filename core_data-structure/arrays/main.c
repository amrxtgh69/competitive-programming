#include <stdio.h>

int main() {
  int arr[10] = {10, 20, 30, 40, 50, 60};
  int size = 6;
  int pos = 3;
  int val = 100;

  for (int i = size; i > pos; i--) {
    arr[i] = arr[i - 1];
  }
  arr[pos] = val;
  size++;

  for (int i = 0; i < size; i++) {
    printf("%d\n ", arr[i]);
  }
  printf("\n");
  return 0;
}

