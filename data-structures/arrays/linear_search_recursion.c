#include <stdio.h>

int linear_search_recursive(int arr[], int size, int target, int index) {
  if (index == size) {
    return -1;
  }
  if (arr[index] == target) {
    return index;
  }
  return linear_search_recursive(arr, size, target, index + 1);
}

int main() {
  int arr[] = {10, 23, 43, 41, 32, 434, 54, 65, 63, 423};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target = 23;
  int  
}
