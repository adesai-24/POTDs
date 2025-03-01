// Your code here! :)
#include "student.h"
namespace potd {
    Student::Student() {

    }

    std::string Student::get_name() const {
        return name_;
    }

    void Student::set_name(std::string new_name) {
        name_ = new_name;
    }

    int Student::get_grade() const {
        return grade_;
    }

    void Student::set_grade(int new_grade) {
        grade_ = new_grade;
    }
}
