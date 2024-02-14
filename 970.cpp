#include <iostream>

int main()
{
  setlocale(LC_ALL, "RUS");
  signed long long int a1 = 0;
  signed long long int a2 = 0;
  signed long long int a3 = 0;
  std::cin >> a1 >> a2 >> a3;
  if (a1 + a2 == a3 || a2 + a3 == a1 || a1 + a3 == a2)
  {
    std::cout << "YES";
  }
  else
  {
    std::cout << "NO";
  }
  return 0;
}