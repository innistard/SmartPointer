#include <iostream>
#include "SmartPointer.h"
#include "Person.h"

int main() {
    SmartPointer<Person> p = new Person("tom", 25);
    std::cout << p.GetCount() << std::endl;
    {
        SmartPointer<Person> q = p;
        std::cout << p.GetCount() << std::endl;

        SmartPointer<Person> r(p);
        std::cout << p.GetCount() << std::endl;
    }
    std::cout << p.GetCount() << std::endl;
    return 0;
}