#ifndef WINDOW_H
#define WINDOW_H

#include <QObject>
#include <QWidget>

class QPushButton;
class window : public QWidget
{
    Q_OBJECT
public:
    explicit window(QWidget *parent = nullptr);
private:
    QPushButton *m_button;
    int m_counter;

signals:
    void counterReached();
private slots:
    void slotButtonClicked(bool checked);

};

#endif // WINDOW_H
