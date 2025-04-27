#pragma once
#include "stack.hpp"

struct StackFrame
{
    uint32_t return_address;
    int parameter;
    int local_var;
};

void simulateFunctionCall(Stack &stack, int arg, uint32_t return_address);