//
// Created by Jiawei Yao on 6/4/20.
//
#include "Count.h"

#ifndef SMARTPOINTER_SMARTPOINTER_H
#define SMARTPOINTER_SMARTPOINTER_H
template <typename T> class SmartPointer{
private:
    T* data_;
    Count* count_;
public:
    SmartPointer(): data_(0), count_(){
        count_ = new Count();
        count_ ->Add();
    }

    SmartPointer(T* value): data_(value), count_(){
        count_ = new Count();
        count_ -> Add();
    }

    SmartPointer(const SmartPointer<T>& ptr): data_(ptr.data_), count_(ptr.count_){
        count_ -> Add();
    }

    ~SmartPointer(){
        if(count_ -> Release() == 0){
            delete data_;
            delete count_;
        }
    }

    int GetCount(){
        return count_ -> GetCount();
    }

    T& operator*(){
        return *data_;
    }

    T* operator->(){
        return data_;
    }

    SmartPointer<T>& operator = (const SmartPointer<T>& ptr){
         if (this != &ptr){
            if(count_ -> Release() == 0){
                delete data_;
                delete count_;
            }
            data_ = ptr.data_;
            count_ = ptr.count_;
            count_ -> Add();
        }
        return *this;
    }
};

#endif //SMARTPOINTER_SMARTPOINTER_H
