/* Your code here! */
#include <string>
#include <iostream>

int my_age = 19;
std::string my_name = "Aadi";

std::string hello() {
    std::string to_return = "Hello world! My name is " + my_name + " and I am " + std::to_string(my_age) + " years old.";
    return to_return;
}
