#include <iostream>

int main()
{
  setlocale(LC_ALL, "RUS");
  int r1 = 0;
  int r2 = 0;
  int r3 = 0;
  std::cin >> r1 >> r2 >> r3;
  if (r1 < r2 + r3)
    std::cout << "NO";
  else
    std::cout << "YES";
  return 0;
}