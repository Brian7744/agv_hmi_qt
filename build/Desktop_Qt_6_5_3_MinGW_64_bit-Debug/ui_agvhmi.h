/********************************************************************************
** Form generated from reading UI file 'agvhmi.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGVHMI_H
#define UI_AGVHMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agvHMI
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *agvHMI)
    {
        if (agvHMI->objectName().isEmpty())
            agvHMI->setObjectName("agvHMI");
        agvHMI->resize(800, 600);
        centralwidget = new QWidget(agvHMI);
        centralwidget->setObjectName("centralwidget");
        agvHMI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(agvHMI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        agvHMI->setMenuBar(menubar);
        statusbar = new QStatusBar(agvHMI);
        statusbar->setObjectName("statusbar");
        agvHMI->setStatusBar(statusbar);

        retranslateUi(agvHMI);

        QMetaObject::connectSlotsByName(agvHMI);
    } // setupUi

    void retranslateUi(QMainWindow *agvHMI)
    {
        agvHMI->setWindowTitle(QCoreApplication::translate("agvHMI", "agvHMI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agvHMI: public Ui_agvHMI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGVHMI_H
