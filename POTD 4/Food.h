#ifndef FOOD_H
#define FOOD_H

#include <string>

// Your code here
class Food {
    public:
        Food();
        std::string get_name() const;
        void set_name(const std::string new_name);
        int get_quantity() const;
        void set_quantity(int new_quantity);

    
    private:
        std::string name_;
        int quantity_;

};

#endif