#ifndef Logger_h
#define Logger_h

#include <iostream>

struct Logger
{
public:
    static void log(const std::string& message) 
    {
        std::cout << message << std::endl;
    }
};

#endif 
