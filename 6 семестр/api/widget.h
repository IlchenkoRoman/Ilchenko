#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "api.h"

class Widget : public QWidget
{
    Q_OBJECT
private:

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
