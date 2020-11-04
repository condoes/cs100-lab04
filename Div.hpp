#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include <string>

class Div : public Base {
    private: 
        double v1, v2, result;
    public:
        Div(double val1, double val2) : Base() { 
            v1 = val1; 
            v2 = val2;
            result = v1 / v2;
        }
        virtual double evaluate() { return result; }
        virtual std::string stringify() { 
            std::string myString = std::to_string(v1) + " / " + std::to_string(v2);
            return myString; 
        }
};

#endif //__DIV_HPP__
