#include <iostream>

int main()
{
  long long int max, min, n1, n2, n3;
  std::cin >> n1 >> n2 >> n3;
  if (n1 >= n2 && n1 >= n3)
    max = n1;
  else if (n2 >= n3)
    max = n2;
  else
    max = n3;
  if (n1 <= n2 && n1 <= n3)
    min = n1;
  else if (n2 <= n3)
    min = n2;
  else
    min = n3;
  std::cout << max - min << std::endl;
  return 0;
}