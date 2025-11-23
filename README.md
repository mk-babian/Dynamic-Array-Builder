# Dynamic Array Implementation in C

A straightforward implementation of a dynamically resizing array in C, demonstrating memory management fundamentals and data structure design.

## Overview

This project implements a basic dynamic array (vector-like structure) in C that automatically grows when capacity is reached. The implementation serves as a practical example of manual memory management, pointer manipulation, and fundamental data structure operations.

## Features

- **Dynamic resizing**: Array doubles in capacity when full
- **Simple interface**: Append elements and display contents
- **Interactive CLI**: Add integers through a loop-based interface
- **Memory-efficient**: Only allocates what's needed, grows on demand

## Implementation Details

### Structure Definition

```c
typedef struct {
    int* data;      // Pointer to heap-allocated array
    int size;       // Current number of elements
    int capacity;   // Total allocated space
} Darray;
```

### Core Functions

- `grow()`: Doubles array capacity using `realloc()`
- `append()`: Adds element to array, triggers growth if needed
- `show()`: Displays all elements in the array

### Memory Management

- Initial capacity: 12 elements
- Growth strategy: Multiply by 2 when full
- Manual allocation via `malloc()` and `realloc()`

## Usage

Compile and run:

```bash
gcc -o darray darray.c
./darray
```

Input integers when prompted. Enter `0` to exit and display the final array.

## Educational Purpose

This project demonstrates:

- Dynamic memory allocation in C
- Pointer usage and dereferencing
- Manual memory management patterns
- Basic data structure implementation
- Amortized O(1) append operations

## Limitations & Improvements

Current limitations that could be addressed:

1. **No bounds checking**: `realloc()` failure not handled—allocation could fail on large datasets
2. **Integer-only**: Could be generalized with void pointers or macros
3. **No removal operations**: Only supports append, no delete/pop functionality
4. **Minimal error handling**: Input validation could be more robust
5. **No shrink operation**: Memory never deallocated until program exit

## Learning Outcomes

Understanding this code provides insight into:

- How high-level data structures work under the hood
- Why languages like C++ and Rust abstract these patterns
- The cost and complexity of manual memory management
- Trade-offs between simplicity and robustness

## License

This is an educational project. Use freely for learning purposes.
---

*A simple demonstration of fundamental CS concepts: pointers, dynamic allocation, and the
