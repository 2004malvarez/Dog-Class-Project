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

int main() {
    // Create a Dog object
    Dog myDog;

    // Set initial values
    myDog.setName("Buddy");
    myDog.setAge(3);
    myDog.setBreed("Golden Retriever");

    // Display dog information using getters
    cout << "Dog Name: " << myDog.getName() << endl;
    cout << "Dog Age: " << myDog.getAge() << endl;
    cout << "Dog Breed: " << myDog.getBreed() << endl << endl;

    // Modify one attribute using a setter
    myDog.setAge(4);

    cout << "After updating age:" << endl;
    cout << "Dog Age: " << myDog.getAge() << endl;

    // Call the bark function
    myDog.bark();

    return 0;
}
