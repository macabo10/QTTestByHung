#ifndef QUEUETEST_H
#define QUEUETEST_H
#include <QQueue>


class QueueTest
{

    QQueue<int> queue;

public:
    int n;
    QueueTest(int _n);
    void add();
    void pull();
};

#endif // QUEUETEST_H
