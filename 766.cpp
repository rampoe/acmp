#include <iostream>

int main()
{
  long long n, m, k;
  std::cin >> n >> m >> k;
  if (n * m <= k)
    std::cout << "YES";
  else
    std::cout << "NO";
  return 0;
}