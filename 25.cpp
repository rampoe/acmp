#include <iostream>

int main()
{
  long long n1, n2;
  std::cin >> n1 >> n2;
  if (n1 < n2)
    std::cout << "<";
  else if (n1 == n2)
    std::cout << "=";
  else
    std::cout << ">";
  return 0;
}