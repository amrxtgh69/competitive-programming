#include <stdio.h>

int pairSum(int arr[], int n, int S) {
  int left = 0, right = n - 1;
  while (left < right) {
    int sum = arr[left] + arr[right];
    if (sum == S) {
      printf("(%d, %d)\n", arr[left], arr[right]);
      left++;
      right--;
    } else if (sum < S) {
      left++;
    }else {
      right--;
    }
  }
  return -1;
}

int main() {
  //this is for sorted array
  int arr[] = {3, 4, 5, 6, 7, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int S = 11;
  pairSum(arr, n, S);
  return 0;
}
