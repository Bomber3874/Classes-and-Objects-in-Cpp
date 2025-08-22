# Classes-and-Objects-in-Cpp

# Aim

To study and implement the concept of classes and objects in C++, including class definition, object creation, member functions, data members, and practical applications in various programming scenarios.

# Software Used

Compiler: GNU GCC (g++)

IDE: Visual Studio Code

Operating System: Windows/Linux

# Theory

# 1. Classes and Objects

In object-oriented programming, a class is a blueprint for creating objects. It defines the properties (data members) and behaviors (member functions) that the objects will have. An object is an instance of a class.

# 2. Access Specifiers

public: Members are accessible from outside the class

private: Members are accessible only within the class (default)

protected: Members are accessible within the class and by derived classes

# 3. Member Functions

Functions defined inside a class that operate on the object's data members. They can be defined inside or outside the class.

# 4. Constructors and Destructors

Special member functions for initializing objects and cleaning up resources when objects are destroyed.

# Algorithms

# 1. Calculator Using Class (calculator using class.cpp)

Algorithm:

    Start the program
    
    Define a class Calculator with:
      
      Public data members a and b
      
      Member function add() that returns the sum of a and b
      
      Member function subtract() that returns the difference of a and b
    
    Define an external function multiply() that takes a Calculator object and returns the product of a and b
    
    Define an external function divide() that takes a Calculator object and returns the quotient of a and b, with error handling for division by zero
    
    In the main function:
    
      Create an object of Calculator class
      
      Prompt the user to enter two numbers and store them in the object's data members
      
      Call the member functions and external functions to perform arithmetic operations
      
      Display the results of addition, subtraction, multiplication, and division
      
    End the program

# 2. Car Details (Car details.cpp)

Algorithm:

    Start the program
    
    Define a class Car with:
    
      Public data members: brand, model, year, price
      
      Member function displayDetails() to show all car information
    
    In the main function:
    
      Create two Car objects (car1 and car2)
      
      Assign values to their data members
      
      Call the displayDetails() function for each car to show their information
      
    End the program

# 3. Student Information (students.cpp)

Algorithm:

    Start the program
    
    Define a class Student with:
    
      Public data members: name, branch, subject, year, cgpa
    
    In the main function:
    
      Create two Student objects (s1 and s2)
      
      Assign values to their data members
      
      Display all information for both students using cout statements
    
    End the program

# 4. Rectangle Area Calculation (Rect Area.cpp)

Algorithm:

    Start the program
    
    Define a class Rectangle with:
    
      Public data members: length and breadth
    
    Define an external function calculateArea() that takes a Rectangle object and returns the area (length × breadth)
    
    In the main function:
    
      Create a Rectangle object
      
      Prompt the user to enter length and breadth
      
      Call the calculateArea() function
      
      Display the calculated area
    
    End the program

# 5. Cube Volume Calculation (vol of cube.cpp)

Algorithm:

    Start the program
    
    Define a class Cube with:
    
      Public data member: side
      
      Member function volume() that returns the volume (side³)
    
    Define an external function calculateVolume() that takes a Cube object and returns the volume (side³)
    
    In the main function:
    
      Create a Cube object
      
      Prompt the user to enter the side length
      
      Call both the member function and external function to calculate volume
      
      Display both results
    
    End the program

# 6. Cuboid Volume with Private Members (vol using pvt and pub.cpp)

Algorithm:

    Start the program
    
    Define a class Cuboid with:
    
      Private data members: height, width, length (with default values)
      
      Public member function volume() that returns the product of height, width, and length
    
    In the main function:
    
      Create a Cuboid object
      
      Call the volume() member function
      
      Display the calculated volume
    
    End the program

# Conclusion

This experiment demonstrated the implementation of classes and objects in C++ through various practical examples. Key concepts covered include:

    Class definition with data members and member functions
    
    Object creation and accessing class members
    
    Implementation of member functions inside and outside the class
    
    Use of access specifiers (public and private)
    
    Practical applications of classes in different scenarios including:
    
        Mathematical operations (Calculator)
        
        Data representation (Car details, Student information)
        
        Geometric calculations (Rectangle area, Cube volume, Cuboid volume)

The examples show how classes help in organizing code, encapsulating data, and creating reusable components in object-oriented programming.
