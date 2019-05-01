# C++ Terms
## Chapter 2
- A **//** is a comment.
- **<<** is the output operator. It outputs data onto the screen.
- **C++** is the programming language that we are writing in.
- A **comment** is a piece of code that is ignored by the compiler.
- The **compiler** will transform your code from human-readable to machine-readable code.
- A **compile-time error** is an error that is found by the compiler.
- The **cout** refers to the output stream, it's to put data 'in' the output stream.
- An **executable** is a file that can be executed by your computer (on Windows).
- A **function** is a list of instructions that your computer can execute.
- A **header** is a file with function definitions.
- An **IDE** (Integrated Development Envoirnment) is a piece of software that makes programming easier.
- The **#include** directive is for 'including' other files into your source code.
- A **library** is is a file / are files that provide some functions for you.
- The **linker** 'links' libraries or other files together.
- The **main()** is a function every C++ program must have.
- **Object code** is code that a machine can read and execute.
- **Output** is something that is shown to you.
- A **program** is a description of what a computer must do (expressed in source code most of the time).
- **Source code** are a bunch of instructions for the computer that together form a program.
- A **statement** is an action or instruction that is enclosed in a function body.

## Chapter 3
- With an **assignment** you give a value to an object
- The **cin** (see-in) stands for the input stream, and it can read input from an user into your program
- **Concatenation** is when you literally add two things together, for example `"hello" + "world" = "helloworld"`. Or `3 concatenate 5=35` (not valid C++ code).
- **Conversion** is when you convert from one type to another
- **Decleration** is when you say a variable exists but don't know where it is.
- **Decrement** is when you substract `1` from the value of a variable
- A **definition** is when you say a variable exists, and where it exists.
- **Increment** is when you add `1` to the value of a variable.
- **Initialization** is when you first give a value to a variable.
- The **name** of an object is an identifier for it.
- **Narrowing** happens when you conver from an `double` to an `int`. It cuts of the decimals of the double so it can become an int. This 'narrows' down the whole variable.
- An **object** is a region in memory that stores a value.
- An **operation** is an action that you can perform on some type, like adding and substracting for `int` types.
- An **operator** is an action that you can use to perform an *operation*, like `+` or `-`, respectively for adding and substracting.
- A **type** of a *variable* specifies the values that can be stored in it, the operations that we can apply to a *variable* and what those operations mean
- **Type safety** is a concept in C++ (and most other languages) that helps you not to mess up the types of different variables, like how you can't assign a string to an integer.
- A **value** is some data that is assigned to a variable.
- A **variable** is a named *object*.

## Chapter 4
- **Abstraction** is the act of hiding details that we don't need to use behind some sort of library.
- A **computation** gets input, computes on it, and gives back some output.
- A **conditional statement** is a statement that you write (usually inside an if statement) to test for something.
- A **decleration** is a variable that you know exists but don't know where.
- A **definition** is a variable that you know exists, and where it exists.
- **Divide and conquer** is a technique of splitting a problem into different subproblems and then bringing them together at the end
- An **else** statement is a set of computations you (optionally) execute if the condition in the if statement before the else statement fails
- An **expression** computes a value from some set of operands.
- A **for-statement** describes a loop where the loop variable is defined within the statement itself.
- A **range-for-statement** is a simpler definition of a *for-statement* for traversing vectors. For example:
```cpp
for(int element : my_vector) {
    do_something(element);
}
```
- A **function** is a named sequence of statements that optionally returns a value.
- An **if-statement** is a statement that executes what's inside its block if the condition in the parantheses of it evaluates to `true`.
- If you **increment** a variable you add 1 to its value.
- **Input** is data that you put inside a computation. This data can come from other parts of a program, the user of the program or sensors.
- **Iteration** is the act of going over a set of values and doing some computation on them
- A **loop** is a set of statement that repeat themselves some given amount of times
- The **lvalue** is something that has a value and an identity.
- A **member function** is a function that is declared as member of a class.
- **Output** is data that you get back from a computation.
- **push_back()** is a *member function* of a vector that you execute when you want to add an element to the back of a vector.
- **Repetition** is repeating an action over and over.
- The **rvalue** is something that has a value but does not have an identity, like the literal `42`.
- **Selection** is choosing some value from a list of options, just like choosing a fruit.
- The **size()** function is a *member function* of a vector that you gives you the size of some vector.
- The **sort()** function expects a vector as a parameter which it will then sort.
- A **statement** is an action that can be done, like traversing a set of elements, choosing alternatives, or doing something many times.
- A **switch-statement** is a statement that compares a value against different constants
- A **vector** is a set of elements containing data that you can perform operations on.
- A **while-statement** executes the statements inside its body until the condition in the statement itself is met.