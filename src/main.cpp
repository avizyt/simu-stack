#include "stack.hpp"
#include "function.hpp"
#include <iostream>

int main()
{
    Stack stack;
    uint32_t fake_return_address = 0xDEADBEEF;
    simulateFunctionCall(stack, 5, fake_return_address);
    stack.dump();

    return 0;
}