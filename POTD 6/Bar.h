// your code here
#ifndef BAR_H
#define BAR_H

#include <string>
#include "Foo.h"

namespace potd {
    class Bar {
        private:
        potd::Foo * f_;

        public:
        Bar();
        Bar(std::string input);
        Bar(Bar& b2);
        Bar &operator=(Bar& b2);
        ~Bar();
        std::string get_name() const;


    };
}


#endif