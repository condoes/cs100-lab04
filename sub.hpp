#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>

class Sub : public Base {
    private: 
        Base* firstVal; 
        Base* secondVal;
    public:
        Sub(Base* value1, Base* value2) : Base() { 
            firstVal = value1;
            secondVal = value2; 
        }
        double evaluate() { return firstVal->evaluate() - secondVal->evaluate(); }
        std::string stringify() { 
            std::string str = firstVal->stringify() + " - " + secondVal->stringify();
            return str;
        }
};

#endif //__SUB_HPP__