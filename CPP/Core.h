#ifndef __HelloCpp__Core__
#define __HelloCpp__Core__

#include <iostream>

const char *concatenateMyStringWithCppString(const char *myString);
// add methods with cwe-787 (Out-of-bounds Write) and cwe-79 (Improper Neutralization of Input During Web Page Generation ('Cross-site Scripting'))
const char *methodWithCWE787();

#endif /* defined(__HelloCpp__Core__) */