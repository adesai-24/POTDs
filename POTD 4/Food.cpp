#include "Food.h"
#include <string>
// Your code here

Food::Food() {}

std::string Food::get_name() const {
    return name_;
}

void Food::set_name(const std::string new_name) {
    name_ = new_name;
}

int Food::get_quantity() const {
    return quantity_;
}

void Food::set_quantity(int new_quantity) {
    quantity_ = new_quantity;
}
