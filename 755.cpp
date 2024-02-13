#include <iostream>

int main()
{
  int x, y, z;
  std::cin >> x >> y >> z;
  if (x + y >= z)
  {
    std::cout << x + y - z;
  }
  else
  {
    std::cout << "Impossible";
  }
  return 0;
}