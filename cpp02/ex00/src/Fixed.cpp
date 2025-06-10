
#include "../header/Fixed.hpp"


Fixed::Fixed(): _value(0){
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &other){
    std::cout<<"Copy constructor called"<<std::endl;
    this->_value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other){
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &other)
        this->_value = other.getRawBits();
    return (*this);
}

Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->_value);
}

void Fixed::setRwaBits(int const raw){
    std::cout<<"setRawBits member function called"<<std::endl;
    this->_value = raw;
}


int main( void ) {
Fixed a;
Fixed b = a;
//a.setRwaBits(5);
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}