/*
Name: Kaung Myat Min
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Basic Class Structure (Car)
Date: 03/03/2026
*/

#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    void startEngine() {
        std::cout << "The engine is starting..." << std::endl;
    }

    void accelerate() {
        std::cout << "The car is accelerating!" << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine();
    myCar.accelerate();
    return 0;
}

/*
Reflection:
1. What I understood:
I understood that a class serves as a blueprint for objects[cite: 2]. This example 
shows how to define private data members (attributes) and public member 
functions (behaviors)[cite: 8, 10, 12].
2. Difficulties:
I initially forgot to add the semicolon at the end of the class definition, 
which caused a compilation error.
3. Research:
I looked up why data members are usually private and learned it is for 
encapsulation to protect data integrity[cite: 11].
4. AI Usage:
I used Gemini to help structure the initial class syntax based on the slides.
5. What I learned:
I learned that member functions can access and modify the data members 
of the same class[cite: 15].
*/