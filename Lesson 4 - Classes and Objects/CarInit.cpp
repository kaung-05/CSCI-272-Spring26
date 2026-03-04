/*
Name: Kaung Myat Min
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Class Member Initialization
Date: 03/03/2026
*/

#include <iostream>
#include <string>

class Car {
private:
    // Using different initialization methods from the slides
    std::string brand{"Volkswagen"}; 
    std::string model = "Polo";
    int year{2012};

public:
    void startEngine() {
        std::cout << "start engine" << std::endl;
    }

    void accelerate() {
        std::cout << "accelerate engine" << std::endl;
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
I understood that C++ allows for direct initialization of data members within 
the class definition using braces or the assignment operator[cite: 17].
2. Difficulties:
None, the syntax was straightforward after the first example.
3. Research:
I researched the difference between brace initialization {} and assignment =.
4. AI Usage:
No AI was used for this specific file.
5. What I learned:
I learned how to set default values for attributes directly in the class 
blueprint[cite: 17].
*/