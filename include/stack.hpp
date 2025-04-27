#pragma once

#include <cstdint>
#include <cstring>

// allocate 1 kb stack
const int STACK_SIZE = 1024;

class Stack
{
private:
    // raw memory
    char memory[STACK_SIZE];
    // stack pointer
    char *sp;

public:
    Stack(); // constructor
    void push(const void *data, size_t size);
    void pop(void *out, size_t size);

    bool isOverflow(size_t size) const;
    bool isUnderflow() const;

    // debug: show stack content
    void dump() const;
};