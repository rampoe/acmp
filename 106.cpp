#include <iostream>

int main()
{
  setlocale(LC_ALL, "RUS");

  int zeros = 0;
  int ones = 0;

  int n = 0;
  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int n1 = 0;
    std::cin >> n1;

    if (n1 == 0)
      zeros++;
    else
      ones++;
  }

  if (ones > zeros)
    std::cout << zeros;
  else
    std::cout << ones;

  return 0;
}