#ifndef AGVHMI_H
#define AGVHMI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class agvHMI;
}
QT_END_NAMESPACE

class agvHMI : public QMainWindow
{
    Q_OBJECT

public:
    agvHMI(QWidget *parent = nullptr);
    ~agvHMI();

private:
    Ui::agvHMI *ui;
};
#endif // AGVHMI_H
