#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>

class Sub : public Base {
    private: 
        Op* firstVal; 
        Op* secondVal;
    public:
        Sub(Op* value1, Op* value2) : Base() { 
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