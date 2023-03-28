#include<iostream>

class MyClass{
public:
      int my_variable;
       void set_value(int value){
        my_variable=value;
       }

       int get_value(){
        return my_variable;
       }
};

 int main(int argc, const char** argv) {
    
    //creating object
    MyClass my_objec;
    int n;
    std::cin>>n;
    my_objec.set_value(n);
    
    //print values;
    std::cout<<my_objec.get_value()<<std::endl;
    
    
    return 0;
}