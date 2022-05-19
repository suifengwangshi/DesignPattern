#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <string>
#include <list>
#include "observer.h"

using namespace std;

class Observer; // 前置声明

// 抽象“主题”，也就是通知者
class Subject
{
private:
    /* data */
protected:
    string subjectState;
public:
    Subject(/* args */);
    virtual ~Subject();
    virtual void Attach(Observer* observer) = 0; // 添加观察者
    virtual void Detach(Observer* observer) = 0; // 删除观察者
    virtual void Notify() = 0; // 用于通知者状态发生变化时通知观察者
    virtual void setState(string value) = 0; // 设置通知者的状态
    virtual string getState() = 0; // 返回观察者的状态
};

// 具体通知者1
class Boss: public Subject
{
private:
    /* data */
    list<Observer*> observers;
public:
    Boss(/* args */);
    ~Boss();
    void Attach(Observer* observer); // 添加观察者
    void Detach(Observer* observer); // 删除观察者
    void Notify(); // 用于通知者状态发生变化时通知观察者
    void setState(string value); // 设置通知者的状态
    string getState(); // 返回观察者的状态
};

// 具体通知者2
class Secretary: public Subject
{
private:
    /* data */
    list<Observer*> observers;
public:
    Secretary(/* args */);
    ~Secretary();
    void Attach(Observer* observer); // 添加观察者
    void Detach(Observer* observer); // 删除观察者
    void Notify(); // 用于通知者状态发生变化时通知观察者
    void setState(string value); // 设置通知者的状态
    string getState(); // 返回观察者的状态
};





#endif