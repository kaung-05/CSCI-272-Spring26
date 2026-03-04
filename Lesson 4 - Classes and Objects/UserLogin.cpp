/*
Name: Kaung Myat Min
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Encapsulation (User Class)
Date: 03/03/2026
*/

#include <iostream>
#include <string>

class User {
private:
    std::string username;
    std::string password;

public:
    User(const std::string& uname, const std::string& pwd) {
        username = uname;
        password = pwd;
    }

    bool login(const std::string& inputUser, const std::string& inputPwd) const {
        return (inputUser == username) && (inputPwd == password);
    }

    void updatePassword(const std::string& newPwd) {
        password = newPwd;
    }
};

int main() {
    User user1("student123", "pass456");
    if(user1.login("student123", "pass456")) {
        std::cout << "Login successful!" << std::endl;
    }
    return 0;
}

/*
Reflection:
1. What I understood:
I understood that encapsulation hides the internal mechanics (like the password) 
while providing a clean interface (the login method).
2. Difficulties:
I had to ensure the logic in the login method correctly compared the strings.
3. Research:
I looked up why the 'const' keyword is used at the end of the login function 
and found it prevents the function from modifying any member variables.
4. AI Usage:
Gemini helped explain why data hiding is important for security.
5. What I learned:
I learned how to enforce data hiding using the 'private' access specifier.
*/