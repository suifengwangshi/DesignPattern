#include "observer.h"
#include <string>
#include <iostream>

using namespace std;

// 抽象观察者
Observer::Observer(string name, Subject* sub)
{
    this->name = name;
    this->sub = sub;
}

Observer::~Observer()
{
}

// 具体观察者1
StockObserver::StockObserver(string name, Subject* sub)
    :Observer(name, sub) {
}

StockObserver::~StockObserver()
{
}

void StockObserver::Update() {
    cout << sub->getState() << ", " << this->name << " shut down Stock, continue work!" << endl;
}

// 具体观察者2
NBAObserver::NBAObserver(string name, Subject* sub)
    :Observer(name, sub) {
}

NBAObserver::~NBAObserver()
{
}

void NBAObserver::Update() {
    cout << sub->getState() << ", " << this->name << " shut down NBA, continue work!" << endl;
}
