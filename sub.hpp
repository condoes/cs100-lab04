#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
#include <string>

class Sub : public Base {
    private: 
        double firstVal;
        double secondVal;
    public:
        Sub(double value1, double value2) : Base() { 
            firstVal = value1;
            secondVal = value2; 
        }
        virtual double evaluate() { return firstVal-secondVal; }
        virtual std::string stringify() { 
            std::string str = std::to_string(firstVal) + " - " + std::to_string(secondVal);
            return str;
        }
};

#endif //__SUB_HPP__