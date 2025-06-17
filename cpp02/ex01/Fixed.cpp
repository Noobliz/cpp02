#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

//having a cake that we always want to divide in x equal slices
//ex: 5 * 256 same as 5 << _fractionalBits
// once converted, we can get the int back with intVal = _value >> _fractionalBits
// pas de 1 << n car on garde les bits a 0 car par de fraction
Fixed::Fixed(const int intVal)
{
    this->_value = intVal << _fractionalBits;
}

//set the fractional part with 8 bits instead of floating
Fixed::Fixed(const float floatVal)
{
    this->_value = roundf(floatVal * (1 <<_fractionalBits));
}

//ex: stocking 340cl, if i want to know how many liters: 340 / 100 = 3.40L
float Fixed::toFloat(void) const
{
    float res;
    res = (float)this->_value / (1 << _fractionalBits);
    return (res);
}

//removing fractional part 
int Fixed::toInt(void) const
{
    int res;
    res = this->_value >> _fractionalBits;
    return (res);
}