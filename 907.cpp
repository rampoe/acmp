#include <iostream>
#include <cmath>

int main()
{
  setlocale(LC_ALL, "RUS");
  long long int w = 0;
  long long int h = 0;
  long long int r = 0;
  std::cin >> w >> h >> r;
  if (r * 2 > w || r * 2 > h)
  {
    std::cout << "NO";
  }
  else
  {
    std::cout << "YES";
  }
  return 0;
}