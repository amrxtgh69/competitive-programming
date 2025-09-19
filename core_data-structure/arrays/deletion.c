#include <stdio.h>

int main() {
  int arr[10] = {10, 20, 30, 40, 50};
  int size = 5;
  int del = 2;

  for (int i = del; i < size -1; i++) {
    arr[i] = arr[i+1];
  }
  size--;

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
