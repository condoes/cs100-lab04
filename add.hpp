#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include <string>

class Add : public Base {
    private: 
        double firstVal;
        double secondVal;
    public:
        Add(double value1, double value2) : Base() { 
            firstVal = value1;
            secondVal = value2; 
        }
        virtual double evaluate() { return firstVal+secondVal; }
        virtual std::string stringify() { 
            std::string str = std::to_string(firstVal) + " + " + std::to_string(secondVal);
            return str;
        }
};

#endif //__ADD_HPP__