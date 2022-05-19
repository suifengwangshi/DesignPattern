#include "observer.h"
#include "subject.h"
#include <iostream>

using namespace std;

int main() {
    Boss* huhansan = new Boss();

    // 看股票的同事
    StockObserver* tongshi1 = new StockObserver("xieshijie", huhansan);

    // 看NBA的同事
    NBAObserver* tongshi2 = new NBAObserver("xuyouhong", huhansan);

    // 将观察者注册到通知者的观察者列表中
    huhansan->Attach(tongshi1);
    huhansan->Attach(tongshi2);

    // 设置通知者的状态
    huhansan->setState("I am back");

    huhansan->Notify(); // 通知观察者

    // 剔除部分观察者
    huhansan->Detach(tongshi2);

    huhansan->Notify(); // 通知观察者

    return 0;
}