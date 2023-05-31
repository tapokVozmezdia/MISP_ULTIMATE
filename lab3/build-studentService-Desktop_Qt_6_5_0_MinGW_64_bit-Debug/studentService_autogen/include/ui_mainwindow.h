/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_6;
    QLabel *totalCost;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *monthPick;
    QPushButton *calculateButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_1;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_3;
    QPushButton *folderButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(618, 468);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        gridLayout_4->addLayout(verticalLayout, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 4, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");

        gridLayout_4->addLayout(gridLayout_3, 0, 2, 2, 3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName("lineEdit_6");
        QFont font;
        font.setPointSize(12);
        lineEdit_6->setFont(font);

        gridLayout_2->addWidget(lineEdit_6, 5, 0, 1, 1);

        totalCost = new QLabel(centralwidget);
        totalCost->setObjectName("totalCost");
        QFont font1;
        font1.setPointSize(18);
        totalCost->setFont(font1);

        gridLayout_2->addWidget(totalCost, 7, 0, 1, 1);

        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setFont(font);

        gridLayout_2->addWidget(lineEdit_5, 4, 0, 1, 1);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        gridLayout_2->addWidget(lineEdit_4, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        monthPick = new QComboBox(centralwidget);
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->addItem(QString());
        monthPick->setObjectName("monthPick");
        QFont font2;
        font2.setPointSize(14);
        monthPick->setFont(font2);

        horizontalLayout_2->addWidget(monthPick);

        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setFont(font1);
        calculateButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(calculateButton);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font);

        gridLayout_2->addWidget(lineEdit_2, 1, 0, 1, 1);

        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setFont(font);

        gridLayout_2->addWidget(lineEdit_1, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 8, 0, 1, 1);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);

        gridLayout_2->addWidget(lineEdit_3, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 1);

        folderButton = new QPushButton(centralwidget);
        folderButton->setObjectName("folderButton");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("folder")));
        folderButton->setIcon(icon);

        gridLayout_4->addWidget(folderButton, 0, 1, 2, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 618, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "AGE", nullptr));
        totalCost->setText(QCoreApplication::translate("MainWindow", "Total Cost:   ----", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "CINEMA", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "CAFFE", nullptr));
        monthPick->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        monthPick->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        monthPick->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        monthPick->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        monthPick->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        monthPick->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        monthPick->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        monthPick->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        monthPick->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        monthPick->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));
        monthPick->setItemText(10, QCoreApplication::translate("MainWindow", "11", nullptr));
        monthPick->setItemText(11, QCoreApplication::translate("MainWindow", "12", nullptr));

        calculateButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "ADRESS", nullptr));
        lineEdit_1->setText(QString());
        lineEdit_1->setPlaceholderText(QCoreApplication::translate("MainWindow", "CITY", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "INSTITUTE", nullptr));
        folderButton->setText(QCoreApplication::translate("MainWindow", "Change directory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
