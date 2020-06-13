//
// Created by Jiawei Yao on 6/4/20.
//

#ifndef SMARTPOINTER_COUNT_H
#define SMARTPOINTER_COUNT_H
class Count{
private:
    int count;
public:
    Count(): count(0){}

    void Add(){
        count++;
    }

    int Release(){
        return --count;
    }

    int GetCount(){
        return count;
    }
};

#endif //SMARTPOINTER_COUNT_H
