#include "Objects.h"

#include <cassert>
#include <iostream>
#include <typeinfo>

bool S::operator==(const S& arg) const
{
    return (c == arg.c) and (f == arg.f);
}

void objectFunction(void)
{
    assert(sizeof(S) == 8);
    S s1 = {'a', 3.14};
    S s2 = s1;
    reinterpret_cast<unsigned char *>(&s1)[2] = 'b'; /// change the 2nd byte of padding
    assert(s1 == s2);
    std::cout << "Sizeof S == " << sizeof(S) << " Alignof S == " << alignof(S) << std::endl;
}

void playWithPolymorphic(void)
{
    Derived1 d1;
    Derived2 d2;
    Base1& b1 = d1;
    Base2& b2 = d2;
    std::cout << "Expression type of b1: " << typeid(decltype(b1)).name() << std::endl;
    std::cout << "Expression type of b2: " << typeid(decltype(b2)).name() << std::endl;
    std::cout << "Object type of b1: " << typeid(b1).name() << std::endl;
    std::cout << "Object type of b2: " << typeid(b2).name() << std::endl;
    std::cout << "Size of b1: " << sizeof b1 << std::endl;
    std::cout << "Size of b2: " << sizeof b2 << std::endl;
    std::cout << "Size of d1: " << sizeof d1 << std::endl;
    std::cout << "Size of d2: " << sizeof d2 << std::endl;
}

void objectAlignment(void)
{
    std::cout << "sizeof(AlignmentStruct) = " << sizeof(AlignementStruct)
              << " alignof(AlignmentStruct) = " << alignof(AlignementStruct) << std::endl;
    std::cout << "sizeof(X) = " << sizeof(X)
              << " alignof(X) = " << alignof(X) << std::endl;
}
