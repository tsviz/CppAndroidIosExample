#include <string.h>
#include "Core.h"

const char *CPP_BASE_STRING = "cpp says hello to %s";

const char *concatenateMyStringWithCppString(const char *myString) {
    char *concatenatedString = new char[strlen(CPP_BASE_STRING) + strlen(myString) + 1];
    snprintf(concatenatedString, strlen(CPP_BASE_STRING) + strlen(myString) + 1, CPP_BASE_STRING, myString);
    return concatenatedString;
}

// method example with cwe-787 (Out-of-bounds Write)
const char *methodWithCWE787() {
    char *buffer = new char[10];
    strcpy(buffer, "0123456789");
    buffer[10] = 'a';
    return buffer;
}
