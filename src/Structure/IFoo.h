#include <iostream>

class IFoo {
public:
    virtual void foo_met() = 0;
    void  foo_bar() {
        std::cout<<"HelloWorld\n";
    }
};