#include <iostream>
#include <string>

int main()
{
  // Exercise 1
  int x;
  int y;
  int add_xy;
  int sub_xy;
  int mult_xy;
  int div_xy;
  int mod_xy;

  x = 25;
  y = 5;
add_xy = x + y;
sub_xy = x - y;
mult_xy = x * y;
div_xy = x / y;
mod_xy = x % y;
  std::cout << add_xy << std::endl;
  std::cout << sub_xy << std::endl;
  std::cout << mult_xy << std::endl;
  std::cout << div_xy << std::endl;
  std::cout << mod_xy << std::endl;
  int z;
  z = 10;
  bool xgreaterz = (x > z); // True
  if (xgreaterz = 1) {
      std::cout << "X is greater than z" << std::endl;
  }
  bool ylessx = (y < x); // True
   if (ylessx = 1) {
      std::cout << "Y is less than X" << std::endl;
  }
  // Exercise 2
  bool isSunny = true;
  bool hasUmbrella = false;
  if (isSunny && hasUmbrella) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }
  if (isSunny || hasUmbrella) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }
  if (!isSunny) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }
  if (!isSunny && !hasUmbrella) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }
  // Excerise 3
  int n;
  double m;
  bool hasLicense = false;
  n = 7;
  m = 4.0;
  bool ngreaterm = (n > m);
  std::cout << ngreaterm << std::endl;
  bool mequal4 = (m = 4.0);
  std::cout << mequal4 << std::endl;
  bool hlANDmn = (hasLicense && m <= n );
  std::cout << hlANDmn << std::endl;
  bool hlANDn5 = (!hasLicense && n > 5);
  std::cout << hlANDn5 << std::endl;
  return 0;
}  
