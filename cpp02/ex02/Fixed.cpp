
#include "Fixed.hpp"

bool Fixed::operator>(const Fixed &other)
{
    if (this->_value > other._value)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &other)
{
    if (this->_value < other._value)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &other)
{
    if (this->_value >= other._value)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &other)
{
    if (this->_value <= other._value)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &other)
{
    if (this->_value == other._value)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &other)
{
    if (this->_value != other._value)
        return true;
    return false;
}