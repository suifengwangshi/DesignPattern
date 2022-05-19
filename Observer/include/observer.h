#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>
#include "subject.h"

using namespace std;

class Subject; // 前置声明

// 抽象观察者
class Observer
{
private:
    /* data */
protected:
    string name;
    Subject* sub;
public:
    Observer(string name, Subject* sub);
    ~Observer();
    virtual void Update() = 0; // 通知者状态改变时给观察者的通知接口
};

// 具体观察者1
class StockObserver: public Observer
{
private:
    /* data */
public:
    StockObserver(string name, Subject* sub);
    ~StockObserver();
    void Update(); 
};

// 具体观察者2
class NBAObserver: public Observer
{
private:
    /* data */
public:
    NBAObserver(string name, Subject* sub);
    ~NBAObserver();
    void Update();
};

#endif