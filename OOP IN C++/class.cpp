#include <iostream>

class MyClass {
public:
    int my_variable;

    void set_value(int value) {
        my_variable = value;
    } 

    int get_value() {
        return my_variable;
    }
};

int main() {
    // create an object of the class
    MyClass my_object;

    // set the value of the object's member variable
    my_object.set_value(42);

    // print the value of the object's member variable
    std::cout << my_object.get_value() << std::endl;

    return 0;
}
