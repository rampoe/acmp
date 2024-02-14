#include <iostream>
#include <vector>

int main()
{
  setlocale(LC_ALL, "RUS");
  int n = 0;
  std::cin >> n;
  std::vector<int> numbers;
  for (int i = 0; i < n; i++)
  {
    int current_number = 0;
    std::cin >> current_number;
    numbers.push_back(current_number);
  }
  for (int i = n - 1; i >= 0; i--)
  {
    std::cout << numbers[i] << " ";
  }
  return 0;
}