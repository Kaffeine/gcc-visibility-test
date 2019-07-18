#include "MyClass.hpp"

#ifndef OMIT_PRIVATE_IMPLEMENTATION
int MyClassPrivate::getPrivateNumber() const
{
    return 5;
}
#endif

int MyClass::getNumber() const
{
    MyClassPrivate instance;
    return instance.getPrivateNumber();
}
