#include <iostream>

int main()
{
  setlocale(LC_ALL, "RUS");
  long long int a = 0;
  std::cin >> a;
  long long int b = (a / 10 + 1) * (a / 10);
  if (b == 0)
  {
    std::cout << 25 << std::endl;
  }
  else
  {
    std::cout << b << 25 << std::endl;
  }
  return 0;
}