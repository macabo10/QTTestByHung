#include <QApplication>
#include<QPushButton>
#include <QProgressBar>
#include <QSlider>
#include <QBEInteger>
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
//    window *win = new window();
//    win->show();
    window win;
    win.show();
    int n = 10;
    QBEInteger<int> *ptr = new QBEInteger<int>;
    cout << ptr->operator%=(2) << endl;
    testQBEInt(ptr);
    cout << ptr->max() << endl;
    cout << ptr->min() << endl;
    cout << ptr->operator=(n) << endl;

    cout << *ptr << endl;


 return app.exec();
}
