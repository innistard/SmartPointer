//
// Created by Jiawei Yao on 6/4/20.
//
#include <string>

#ifndef SMARTPOINTER_PERSON_H
#define SMARTPOINTER_PERSON_H
class Person{
    int age;
    std::string pName;

public:
    Person(): pName("0"),age(0){}
    Person(std::string pName, int age): pName(pName), age(age){}
    ~Person(){}
};
#endif //SMARTPOINTER_PERSON_H
