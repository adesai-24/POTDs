// Your code here! :)
#ifndef STUDENT_H
#define STUDENT_H

#include <string>


namespace potd {
    class Student {
        public:
            Student();
            std::string get_name() const;
            void set_name(std::string new_name);
            int get_grade() const;
            void set_grade(int new_grade);
        private:
            std::string name_;
            int grade_;
    };
}






#endif 