#include <stdio.h>

void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }
    int temp = arr[min_index];
    arr[min_index] = arr[i];
    arr[i] = temp;
  }
}

int main() {
  int arr[] = {5, 2, 8, 1, 9, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  selection_sort(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}

