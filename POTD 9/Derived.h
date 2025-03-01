#ifndef DERIVED_H
#define DERIVED_H

#include <string>
#include "Base.h"

class Derived : public Base {
    public:
    std::string foo();
    virtual std::string bar() override;
    virtual ~Derived();
};


#endif