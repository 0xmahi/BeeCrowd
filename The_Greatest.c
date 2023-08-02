#include <stdio.h>

int findMaxNum(int arr[], int size) {
  int max = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int nums[3];
  scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
  int maxNum = findMaxNum(nums, 3);
  printf("%d eh o maior\n", maxNum);
  return 0;
}