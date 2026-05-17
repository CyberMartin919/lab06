#include "print.h"
#include <iostream>
#include "formatter.h"
void print(const std::string& text) {
    std::cout << formatter(text);
}
