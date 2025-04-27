# 🖥️ Stack Simulator: Manual Call Stack Management in C++

---

## 📚 Project Overview

This project simulates how a CPU **call stack** works during function calls, parameter passing, and returns — but in **pure C++**, without relying on real language recursion.

It manually builds **stack frames**, manages **function contexts**, and **visualizes stack operations** like:
- Function calls (push frame)
- Function returns (pop frame)
- Parameter passing
- Return address simulation
- Manual recursion without language recursion

✅ Designed for **low-level computing**, **systems programming practice**, and **deep learning of memory layout**.

---

## 🚀 Features

- Manual creation and management of stack frames using **pointer-based structures**
- Simulation of **function calling**, **stack overflow/underflow detection**
- Visualization of **stack growth** and **memory behavior**
- Optionally simulate **recursive functions manually**
- Debugging support with **GDB** and **VSCode**

---

## 📂 Project Structure
stack_simulator/
├── src/
│   ├── main.cpp
│   ├── stack.cpp
│   └── function.cpp
│
├── include/
│   ├── stack.hpp
│   └── function.hpp
│
├── CMakeLists.txt
├── README.md
└── .vscode/
    ├── tasks.json
    └── launch.json



---

## 🔧 Build and Run

### 🛠️ Prerequisites

- C++17 compatible compiler (GCC, Clang, MSVC)
- CMake 3.10+
- GDB (for debugging)
- [VSCode](https://code.visualstudio.com/) + C++ Extensions recommended

---

### 📦 Build Instructions

```bash
git clone https://github.com/avizyt/simu-stack.git
cd simu-stack

# Configure the project
cmake -S . -B build

# Build the project
cmake --build build
