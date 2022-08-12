#include "queuetest.h"
#include <QQueue>
#include<iostream>
using namespace std;


QueueTest::QueueTest(int _n)
{
    n = _n;
}

void QueueTest::add() {
    for (int i = 0; i < n; i++) {
        queue.enqueue(i);
    }
}

void QueueTest::pull() {
    while (!queue.isEmpty()) {
        cout << queue.dequeue() << " " << "ok";
    }
}
