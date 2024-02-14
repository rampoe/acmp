#include <iostream>

int main()
{
  int m1, m2, m3;
  std::cin >> m1 >> m2 >> m3;
  if (m1 < 94 || m1 > 727 || m2 < 94 || m2 > 727 || m3 < 94 || m3 > 727)
  {
    std::cout << "Error";
  }
  else
  {
    int max = m1;
    if (m2 > m1 && m2 > m3)
      max = m2;
    else if (m3 > m1 && m3 > m2)
      max = m3;
    std::cout << max;
  }
  return 0;
}