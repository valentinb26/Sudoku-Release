/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *inputFrame;
    QVBoxLayout *verticalLayout;
    QLabel *playerLabel;
    QLabel *rowLabel;
    QLineEdit *rowEdit;
    QLabel *colLabel;
    QLineEdit *colEdit;
    QLabel *numLabel;
    QLineEdit *numEdit;
    QPushButton *submitBtn;
    QFrame *gridFrame;
    QLabel *gridLabel;
    QFrame *playerInFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *playerInEdit;
    QPushButton *playerInBtn;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *numToRemLabel;
    QLineEdit *numToRemEdit;
    QPushButton *genBtn;
    QPushButton *resetBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(589, 475);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        inputFrame = new QFrame(centralwidget);
        inputFrame->setObjectName("inputFrame");
        inputFrame->setEnabled(false);
        inputFrame->setGeometry(QRect(410, 130, 153, 231));
        inputFrame->setFrameShape(QFrame::Box);
        inputFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(inputFrame);
        verticalLayout->setObjectName("verticalLayout");
        playerLabel = new QLabel(inputFrame);
        playerLabel->setObjectName("playerLabel");

        verticalLayout->addWidget(playerLabel);

        rowLabel = new QLabel(inputFrame);
        rowLabel->setObjectName("rowLabel");
        rowLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(rowLabel);

        rowEdit = new QLineEdit(inputFrame);
        rowEdit->setObjectName("rowEdit");

        verticalLayout->addWidget(rowEdit);

        colLabel = new QLabel(inputFrame);
        colLabel->setObjectName("colLabel");

        verticalLayout->addWidget(colLabel);

        colEdit = new QLineEdit(inputFrame);
        colEdit->setObjectName("colEdit");

        verticalLayout->addWidget(colEdit);

        numLabel = new QLabel(inputFrame);
        numLabel->setObjectName("numLabel");

        verticalLayout->addWidget(numLabel);

        numEdit = new QLineEdit(inputFrame);
        numEdit->setObjectName("numEdit");

        verticalLayout->addWidget(numEdit);

        submitBtn = new QPushButton(inputFrame);
        submitBtn->setObjectName("submitBtn");

        verticalLayout->addWidget(submitBtn);

        gridFrame = new QFrame(centralwidget);
        gridFrame->setObjectName("gridFrame");
        gridFrame->setEnabled(false);
        gridFrame->setGeometry(QRect(10, 10, 371, 351));
        gridFrame->setFrameShape(QFrame::StyledPanel);
        gridFrame->setFrameShadow(QFrame::Raised);
        gridLabel = new QLabel(gridFrame);
        gridLabel->setObjectName("gridLabel");
        gridLabel->setGeometry(QRect(10, 10, 351, 331));
        gridLabel->setTextFormat(Qt::RichText);
        gridLabel->setAlignment(Qt::AlignCenter);
        playerInFrame = new QFrame(centralwidget);
        playerInFrame->setObjectName("playerInFrame");
        playerInFrame->setGeometry(QRect(420, 0, 151, 101));
        playerInFrame->setFrameShape(QFrame::StyledPanel);
        playerInFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(playerInFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(playerInFrame);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        playerInEdit = new QLineEdit(playerInFrame);
        playerInEdit->setObjectName("playerInEdit");

        verticalLayout_2->addWidget(playerInEdit);

        playerInBtn = new QPushButton(playerInFrame);
        playerInBtn->setObjectName("playerInBtn");

        verticalLayout_2->addWidget(playerInBtn);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setEnabled(false);
        frame->setGeometry(QRect(10, 370, 371, 47));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        numToRemLabel = new QLabel(frame);
        numToRemLabel->setObjectName("numToRemLabel");

        horizontalLayout->addWidget(numToRemLabel);

        numToRemEdit = new QLineEdit(frame);
        numToRemEdit->setObjectName("numToRemEdit");

        horizontalLayout->addWidget(numToRemEdit);

        genBtn = new QPushButton(frame);
        genBtn->setObjectName("genBtn");
        genBtn->setAutoDefault(false);

        horizontalLayout->addWidget(genBtn);

        resetBtn = new QPushButton(centralwidget);
        resetBtn->setObjectName("resetBtn");
        resetBtn->setGeometry(QRect(450, 380, 100, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 589, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(submitBtn, SIGNAL(clicked()), MainWindow, SLOT(submit()));
        QObject::connect(genBtn, SIGNAL(clicked()), MainWindow, SLOT(generate()));
        QObject::connect(playerInBtn, SIGNAL(clicked()), MainWindow, SLOT(player()));
        QObject::connect(resetBtn, SIGNAL(clicked()), MainWindow, SLOT(reset()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sudoku-Fun", nullptr));
        playerLabel->setText(QCoreApplication::translate("MainWindow", "Current Player:", nullptr));
        rowLabel->setText(QCoreApplication::translate("MainWindow", "Row", nullptr));
        colLabel->setText(QCoreApplication::translate("MainWindow", "Column", nullptr));
        numLabel->setText(QCoreApplication::translate("MainWindow", "Number:", nullptr));
        submitBtn->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        gridLabel->setText(QCoreApplication::translate("MainWindow", "Loading...", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "How much Player ?", nullptr));
        playerInBtn->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        numToRemLabel->setText(QCoreApplication::translate("MainWindow", "Numbers to remove :", nullptr));
        genBtn->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        resetBtn->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
