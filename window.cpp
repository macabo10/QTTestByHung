#include "window.h"
#include<QPushButton>
#include <QApplication>

window::window(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1000, 500);
    m_button = new QPushButton ("Hello boy", this);
    m_button->setGeometry(10, 10, 80, 30);
    m_button->setCheckable(true);
    m_counter = 0;
    connect(m_button, SIGNAL (clicked(bool)), this, SLOT (slotButtonClicked(bool)));
    connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT (quit()));

}

void window::slotButtonClicked(bool checked)
{
 if (checked) {
 m_button->setText("Hung");
 } else {
 m_button->setText("Hello World");
 }

m_counter ++;
 if (m_counter == 10) {
 emit counterReached();
 }
}
