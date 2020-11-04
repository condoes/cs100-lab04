#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <string>
#include <cmath>

class Pow : public Base {
    private: 
        double base; 
        double exponent;
    public:
        Pow(double base, double exp) : Base() { 
            this->base = base;
            exponent = exp; 
        }
        virtual double evaluate() { return pow(base, exponent); }
        virtual std::string stringify() { 
            std::string str = std::to_string(base) + " ** " + std::to_string(exponent);
            return str;
        }
};

#endif //__ADD_HPP__