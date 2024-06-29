# ZakyPratama
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

Let me break down the code into smaller parts and explain each section:
1. Function signature
int binarySearch(int arr[], int target, int low, int high) {
int binarySearch: This is the function name, which returns an integer value.
int arr[]: This is the input array, which is an array of integers.
int target: This is the value we're searching for in the array.
int low and int high: These are the lower and upper bounds of the range of indices to search in the array.
2. Loop initialization
while (low <= high) {
This loop will continue to execute as long as low is less than or equal to high. This ensures that we don't go out of bounds of the array.
3. Calculate midpoint
int mid = (low + high) / 2;
We calculate the midpoint of the range low to high using the formula (low + high) / 2. This gives us the index of the middle element of the range.
4. Compare midpoint element to target
if (arr[mid] == target) {
  return mid;
}
If the element at the midpoint index mid is equal to the target value, we return the mid index, indicating that we've found the target value.
5. Adjust search range
else if (arr[mid] < target) {
  low = mid + 1;
} else {
  high = mid - 1;
}
If the element at the midpoint index mid is less than the target value, we know that the target value must be in the second half of the range, so we set low to mid + 1.
If the element at the midpoint index mid is greater than the target value, we know that the target value must be in the first half of the range, so we set high to mid - 1.
6. Repeat loop
}
The loop will repeat until low is greater than high, indicating that the target value was not found in the array.
7. Return -1 if not found
return -1; // not found
If the loop completes without finding the target value, we return -1 to indicate that the value was not found.
Main function
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int target = 5;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, target, 0, n - 1);
  if (result!= -1) {
    std::cout << "Element found at index " << result << std::endl;
  } else {
    std::cout << "Element not found" << std::endl;
  }
  return 0;
}
The main function demonstrates how to use the binarySearch function.
We define an array arr and a target value target.
We calculate the size of the array n using the formula sizeof(arr) / sizeof(arr[0]).
We call the binarySearch function with the array, target value, and range of indices 0 to n - 1.
We print the result of the search, either the index of the target value or a message indicating that the value was not found.
