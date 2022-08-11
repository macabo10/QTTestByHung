#ifndef QBTEST_H
#define QBTEST_H

#include <QObject>

class QBtest : public QObject
{
    Q_OBJECT
public:
    explicit QBtest(QObject *parent = nullptr);

signals:

};

#endif // QBTEST_H
