#include <iostream>

int binarySearch(int arr[], int target, int low, int high) {
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1; // not found
}

int main() {
  int arr[] = {2, 5, 9, 10, 13, 16, 20};
  int target = 13;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, target, 0, n - 1);
  if (result!= -1) {
    std::cout << "Element found at index " << result << std::endl;
  } else {
    std::cout << "Element not found" << std::endl;
  }
  return 0;
}