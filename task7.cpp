#include <iostream>

int removeAll(int source[], int size, int element) {
  int write_idx = 0;  // Index to write non-removed elements

  for (int i = 0; i < size; ++i) {
    if (source[i] != element) {
      source[write_idx] = source[i];
      write_idx++;
    }
  }

  return write_idx;  // Return the new size of the array
}

int main() {
  int source[] = {10, 2, 30, 2, 50, 2, 2, 0, 0};
  int size = sizeof(source) / sizeof(source[0]);

  int new_size = removeAll(source, size, 2);

  // Print the array after removing all occurrences of 2
  std::cout << "[ ";
  for (int i = 0; i < new_size; ++i) {
    std::cout << source[i] << " ";
  }
  std::cout << "]" << std::endl;

  return 0;
}
