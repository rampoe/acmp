#include <iostream>

int main()
{
  setlocale(LC_ALL, "RUS");
  double n = 0;
  std::cin >> n;
  if (n == 1)
  {
    std::cout << "YES";
    return 0;
  }
  else if (n <= 0)
  {
    std::cout << "NO";
    return 0;
  }
  while (n > 2)
  {
    n = n / 2;
  }
  if (n == 2)
    std::cout << "YES";
  else
    std::cout << "NO";
  return 0;
}