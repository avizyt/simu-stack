#include "function.hpp"
#include <iostream>

void simulateFunctionCall(Stack &stack, int arg, uint32_t return_address)
{
    StackFrame frame;
    frame.return_address = return_address;
    frame.parameter = arg;
    frame.local_var = 0;

    std::cout << "Pushing function frame with arg = " << arg << "\n";
    stack.push(&frame, sizeof(StackFrame));

    // Simulate doing some work
    frame.local_var = arg + 42;
    std::cout << "Local variable inside function: " << frame.local_var << "\n";

    // Simulate function return
    std::cout << "Popping function frame. \n";
    stack.pop(&frame, sizeof(StackFrame));
    std::cout << "Returned to aggress: " << frame.return_address << "\n";
}