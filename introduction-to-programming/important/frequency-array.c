#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d ", &arr[i]);
  }

  int freq[5] = {0};
  for (int i = 0; i < n; i++) {
    // if(arr[i] == 0){
    //   freq[0] ++;
    // }
    int val = arr[i];
    freq[val]++; // freq[arr[i]]++;
  }
  for (int i = 0; i < 5; i++) {
    printf("number[%d] - %d\n", i, freq[i]);
  }

  return 0;
}