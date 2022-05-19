#include "subject.h"

// 抽象通知者
Subject::Subject(/* args */)
{
}

Subject::~Subject()
{
}

// 具体观察者1
Boss::Boss(/* args */)
{
}

Boss::~Boss()
{
}

void Boss::Attach(Observer* observer) {
    this->observers.push_back(observer);
}

void Boss::Detach(Observer* observer) {
    this->observers.remove(observer);
}

void Boss::Notify() {
    for(Observer* var: this->observers) {
        var->Update(); // 通知者状态发生变化就通知每个观察者
    }
}

void Boss::setState(string value) {
    this->subjectState = value; // 设置通知者的状态
}

string Boss::getState() {
    return this->subjectState;
}

// 具体观察者2
Secretary::Secretary(/* args */)
{
}

Secretary::~Secretary()
{
}

void Secretary::Attach(Observer* observer) {
    this->observers.push_back(observer);
}

void Secretary::Detach(Observer* observer) {
    this->observers.remove(observer);
}

void Secretary::Notify() {
    for(Observer* var: this->observers) {
        var->Update(); // 通知者状态发生变化就通知每个观察者
    }
}

void Secretary::setState(string value) {
    this->subjectState = value; // 设置通知者的状态
}

string Secretary::getState() {
    return this->subjectState;
}
