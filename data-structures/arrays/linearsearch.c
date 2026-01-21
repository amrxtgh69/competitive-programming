#include <stdio.h>


int linear_search(int arr[], int size, int target) {
    if (size == 0) {
    return -1;
  }
  for (int index = 0; index < size; index++) {
    int element = arr[index];
    if (target == element) {
      return index;
    }
  }
  return -1;
}

int main() {
  int arr[] = {12, 34, 54, 5, 3, 23, 534, 65};
  int size = sizeof(arr)/sizeof(arr[0]);
  int target = 54;

  printf("The target element is in index %d\n", linear_search(arr, size, target));
}
