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
  int arr[] = {1, 2, 3, 5, 3, 4, 6};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  //this works only if arrays values are [0, size-1]

  int dups = array_duplication(arr, size);
  if (dups != -1)
      printf("Duplicate element is %d\n", dups);
  else
   printf("No duplication found");
  return 0;
}
