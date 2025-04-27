#include "stack.hpp"
#include <iostream>

Stack::Stack()
{
    sp = memory + STACK_SIZE;
}

// stack push operation
void Stack::push(const void *data, size_t size)
{
    if (isOverflow(size))
    {
        std::cerr << "Stack overflow!" << "\n";
        return;
    }
    sp -= size;
    memcpy(sp, data, size);
}

// stack pop operation
void Stack::pop(void *out, size_t size)
{
    if (isUnderflow())
    {
        std::cerr << "Stack Underflow!" << "\n";
    }
    memcpy(out, sp, size);
    sp += size;
}

bool Stack::isOverflow(size_t size) const
{
    return (sp - size) < memory;
}

bool Stack::isUnderflow() const
{
    return sp >= memory + STACK_SIZE;
}

void Stack::dump() const
{
    std::cout << "---- Stack Dump ----\n";
    for (const char *p = sp; p < memory + STACK_SIZE; ++p)
    {
        printf("%02X ", static_cast<unsigned char>(*p));
    }
    std::cout << "\n------------------\n";
}