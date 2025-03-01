// your code here
#include "q5.h"

void increase_quantity(Food *food) {
    int x = food->get_quantity();
    x++;
    food->set_quantity(x);
}