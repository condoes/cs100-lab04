#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>

class Add : public Base{
    private: 
        Op* firstVal; 
        Op* secondVal;
    public:
        Add(Op* value1, Op* value2) : Base() { 
            firstVal = value1;
            secondVal = value2; 
        }
        double evaluate() { return firstVal->evaluate()+secondVal->evaluate(); }
        std::string stringify() { 
            std::string str = firstVal->stringify() + " + " + secondVal->stringify();
            return str;
        }
};

#endif //__ADD_HPP__