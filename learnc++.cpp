#include <iostream>

int main (int argc, char *argv[]) {
  int age;
  std::cin >> age;
  if (age <= 18) {
    std::cout << "he is an adult" << "\n";
  }
  else {
    std::cout << "he is not adult" << "\n";
  }
  return 0;
}
