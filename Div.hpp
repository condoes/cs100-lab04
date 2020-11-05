#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>

class Div : public Base {
    private: 
        Base* v1;
        Base* v2;
    public:
        Div(Base* val1, Base* val2) : Base() { 
            v1 = val1; 
            v2 = val2;
        }
        double evaluate() { return v1->evaluate() / v2->evaluate(); }
        std::string stringify() { 
            std::string myString = v1->stringify() + " / " + v2->stringify();
            return myString; 
        }
};

#endif // __DIV_HPP__
