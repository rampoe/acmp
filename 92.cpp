#include <iostream>

int main()
{
  setlocale(LC_ALL, "RUS");
  long long int s = 0;
  std::cin >> s;
  std::cout << s * 2 / 12 << " " << s * 2 / 3 << " " << s * 2 / 12 << std::endl;
  return 0;
}