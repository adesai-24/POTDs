#ifndef BASE_H
#define BASE_H

#include <string>

class Base {
    public:
    std::string foo();
    virtual std::string bar();
    virtual ~Base();
};

#endif