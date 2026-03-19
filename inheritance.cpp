#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Student\n";
    }
};

class Marks : public Student {
public:
    Marks() {
        cout << "Marks\n";
    }
};

class Sports {
public:
    Sports() {
        cout << "Sports\n";
    }
};

class Result : public Marks, public Sports {
public:
    Result() {
        cout << "Result\n";
    }
};

int main() {
    Result r;
    return 0;
}
/* Output:
Student
Marks
Sports
Result
*/   
