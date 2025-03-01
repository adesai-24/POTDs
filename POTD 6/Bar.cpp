// your code here
#include "Bar.h"

namespace potd {
    Bar::Bar() {

    }

    Bar::Bar(std::string input) {
        f_ = new potd::Foo(input);
    }

    Bar::Bar(Bar& b2) {
        f_ = new potd::Foo(b2.f_->get_name());
    }

    Bar::~Bar() {
        delete f_;
    }

    Bar &Bar::operator=(Bar& b2) {
        if (this != &b2) { 
            delete f_;  
            f_ = new potd::Foo(b2.f_->get_name());  
        }
        return *this;
    }

    std::string Bar::get_name() const {
        return f_->get_name();
    }
}

