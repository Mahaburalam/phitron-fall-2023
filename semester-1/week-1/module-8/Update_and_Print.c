#include <stdio.h>

int main() {
  int input;
  scanf("%d", &input);

  int arr[input];
  for (int i = 0; i < input; i++) {
    scanf("%d", &arr[i]);
  }

  int arr_index, value;
  scanf("%d %d", &arr_index, &value);

  arr[arr_index] = value;

  for (int i = input - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }

  return 0;
}
