#include <limits.h>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int min = INT_MAX, max = INT_MIN;
  int minIndex = -1,
      maxIndex = -1; // loop start from 0. thats why initally kept default -1

  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
      minIndex = i; // store index
    }
    if (arr[i] > max) {
      max = arr[i];
      maxIndex = i; // store index
    }
  }

  // swap their positions in array
  int temp = arr[minIndex];
  arr[minIndex] = arr[maxIndex];
  arr[maxIndex] = temp;

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}