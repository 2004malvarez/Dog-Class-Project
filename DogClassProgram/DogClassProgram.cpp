#include <iostream>
#include <string>
using namespace std;

// Dog class definition
class Dog {
private:
    string name;
    int age;
    string breed;

public:
    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setBreed(string b) {
        breed = b;
    }

    // Getter functions
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getBreed() {
        return breed;
    }

    // Bark function
    void bark() {
        cout << "Woof! Woof!" << endl;
    }
};
