

#ifndef FIXED_HPP
#define FIXED_HPP
#include <string.h>
#include <iostream>
#include <iomanip>

class Fixed
{
    private:
        int val;
        static int bits;
    public:
        Fixed();
        Fixed(int val1);
        Fixed(Fixed &f1);
        Fixed& operator = (Fixed& fixed);
        // {
        //     val = fixed.val;
        //     bits = fixed.bits;
        //     std::cout << "assignment constructer Called" << std::endl;
        //     return *this;
        // }
        ~Fixed();
        int getRawBits(void) ;
        void setRawBits(int const raw);

};
#endif