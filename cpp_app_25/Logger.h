#ifndef LOGGER_H
#define LOGGER_H

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
