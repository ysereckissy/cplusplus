#ifndef CPLUSPLUS_OBJECTS_H
#define CPLUSPLUS_OBJECTS_H
///---------------------------------------------------------------------------------------------------
/// Object Representation and value representation
///---------------------------------------------------------------------------------------------------
struct S
{
    char c; /// 1 byte value
            /// 3 bytes padding (assuming alignof(float) == 4
    float f; /// 4 bytes value (assuming sizof(float) == 4
    bool operator==(const S& arg) const;
};
extern void objectFunction(void);
///---------------------------------------------------------------------------------------------------
/// Polymorphic Objects
///---------------------------------------------------------------------------------------------------
struct Base1
{
    /// polymorphic type: declares a virtual member
    virtual ~Base1(){}
};

struct Base2
{
    /// non-polymorphic type
};

struct Derived1: Base1
{
    /// polymorphic type: inherits a virtual member
};

struct Derived2 : Base2
{
    /// non polymorphic type
};
extern void playWithPolymorphic(void);
///---------------------------------------------------------------------------------------------------
/// Object Alignment
///---------------------------------------------------------------------------------------------------
struct AlignementStruct
{
    char a; /// size: 1, alignment 1
    char b; /// size: 1, alignment 1
}; /// size: 2, alignment 1
/// objects of type X must be allocated at 4-byte boundaries
/// because X.n must be allocated at 4-byte boundaries
/// because int's alignment requirement is (usually) 4
struct X
{
    int n;
    char c;
    /// three bytes padding
}; /// size: 8, alignment 4
extern void objectAlignment(void);

#endif //CPLUSPLUS_OBJECTS_H
