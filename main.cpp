#include <QApplication>
#include<QPushButton>
#include <QProgressBar>
#include <QSlider>
#include <QBEInteger>
#include<queuetest.h>
#include<iostream>
#include<window.h>
using namespace std;

void testQBEInt(QBEInteger<int> *ptr) {
    if (ptr->min() == 10) {
        cout << "ok" << endl;
    } else {
        cout << ptr->operator%=(2) << endl;
    }
}



int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    window *win = new window();
    win->show();
    int n = 10;
    QBEInteger<int> *ptr = new QBEInteger<int>;
    ptr->operator=(n);
    cout << ptr->operator%=(3) << endl;
    testQBEInt(ptr);
    QueueTest qt = QueueTest(5);
    qt.add();
    qt.pull();


 return app.exec();
}
