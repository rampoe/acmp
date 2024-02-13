#include <iostream>

int main()
{
  long long int a, b, c;
  std::cin >> a >> b >> c;
  if (a * b == c)
    std::cout << "YES";
  else
    std::cout << "NO";
  return 0;
}