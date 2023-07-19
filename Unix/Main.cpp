#include <iostream>
#include <string>
#include "../CPP/Core.h"


int main() {
  std::string textFromCppCore = concatenateMyStringWithCppString("Unix");
  std::cout << textFromCppCore << '\n';
  // invoke method with cwe-787 (Out-of-bounds Write) and cwe-79 (Improper Neutralization of Input During Web Page Generation ('Cross-site Scripting'))
  std::string textFromCppCore2 = methodWithCWE787();
  std::cout << textFromCppCore2 << '\n';
  return 0;
}
