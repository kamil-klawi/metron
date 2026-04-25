#include <iostream>
#include "metron/hello.hh"

void hello_greeting()
{
    std::cout << hello::greeting() << "\n";
}