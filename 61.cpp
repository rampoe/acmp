#include <iostream>

int main()
{
  int a, b, s1 = 0, s2 = 0;
  for (int i = 0; i < 4; i++)
  {
    std::cin >> a >> b;
    s1 += a;
    s2 += b;
  }
  if (s1 > s2)
    std::cout << 1;
  else if (s2 > s1)
    std::cout << 2;
  else
    std::cout << "DRAW";

  return 0;
}