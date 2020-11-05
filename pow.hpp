#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>
#include <cmath>

class Pow : public Base {
    private: 
        Op* base; 
        Op* exponent;
    public:
        Pow(Op* base, Op* exp) : Base() { 
            this->base = base;
            exponent = exp; 
        }
        virtual double evaluate() { return pow(base->evaluate(), exponent->evaluate()); }
        virtual std::string stringify() { 
            std::string str = base->stringify() + " ** " + exponent->stringify();
            return str;
        }
};

#endif //__ADD_HPP__