#include <iostream>
#include <stdlib.h>

#include "Foo.h"

char ToUpperCase(char input) {
  if (input >= 97 && input <= 122)
    input -= 32;
  else
    input = 0;
  return input;
}

int main()
{
  for (char i = 97; i <= 122; i++) {
    std::cout << ToUpperCase(i) << ' ';
  }
  std::cout << '\n';
  return 0;
}
