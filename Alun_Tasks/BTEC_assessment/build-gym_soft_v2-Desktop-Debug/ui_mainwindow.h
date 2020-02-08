/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionPrint;
    QAction *actionOpen;
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *gender_label;
    QComboBox *gender_combo;
    QLabel *weight_label;
    QComboBox *weight_combo;
    QComboBox *height_combo;
    QLabel *height_label;
    QLabel *age_label;
    QComboBox *exercise_combo;
    QPushButton *run;
    QFrame *frame;
    QLabel *bmr_label;
    QLabel *bmi_label;
    QLabel *maintain_label;
    QDoubleSpinBox *age_spinbox;
    QDoubleSpinBox *weight_spinbox;
    QDoubleSpinBox *height_spinbox;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(541, 322);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gender_label = new QLabel(centralWidget);
        gender_label->setObjectName(QStringLiteral("gender_label"));
        gender_label->setGeometry(QRect(20, 20, 53, 31));
        gender_combo = new QComboBox(centralWidget);
        gender_combo->setObjectName(QStringLiteral("gender_combo"));
        gender_combo->setGeometry(QRect(90, 20, 71, 32));
        weight_label = new QLabel(centralWidget);
        weight_label->setObjectName(QStringLiteral("weight_label"));
        weight_label->setGeometry(QRect(20, 100, 51, 31));
        weight_combo = new QComboBox(centralWidget);
        weight_combo->setObjectName(QStringLiteral("weight_combo"));
        weight_combo->setGeometry(QRect(180, 100, 93, 32));
        height_combo = new QComboBox(centralWidget);
        height_combo->setObjectName(QStringLiteral("height_combo"));
        height_combo->setGeometry(QRect(180, 140, 131, 32));
        height_label = new QLabel(centralWidget);
        height_label->setObjectName(QStringLiteral("height_label"));
        height_label->setGeometry(QRect(20, 140, 51, 31));
        age_label = new QLabel(centralWidget);
        age_label->setObjectName(QStringLiteral("age_label"));
        age_label->setGeometry(QRect(40, 60, 31, 31));
        exercise_combo = new QComboBox(centralWidget);
        exercise_combo->setObjectName(QStringLiteral("exercise_combo"));
        exercise_combo->setGeometry(QRect(20, 180, 511, 41));
        run = new QPushButton(centralWidget);
        run->setObjectName(QStringLiteral("run"));
        run->setGeometry(QRect(20, 230, 88, 34));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(320, 10, 211, 161));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        bmr_label = new QLabel(frame);
        bmr_label->setObjectName(QStringLiteral("bmr_label"));
        bmr_label->setGeometry(QRect(10, 10, 191, 18));
        bmi_label = new QLabel(frame);
        bmi_label->setObjectName(QStringLiteral("bmi_label"));
        bmi_label->setGeometry(QRect(10, 30, 191, 18));
        maintain_label = new QLabel(frame);
        maintain_label->setObjectName(QStringLiteral("maintain_label"));
        maintain_label->setGeometry(QRect(10, 50, 191, 20));
        age_spinbox = new QDoubleSpinBox(centralWidget);
        age_spinbox->setObjectName(QStringLiteral("age_spinbox"));
        age_spinbox->setGeometry(QRect(90, 60, 71, 32));
        age_spinbox->setDecimals(0);
        weight_spinbox = new QDoubleSpinBox(centralWidget);
        weight_spinbox->setObjectName(QStringLiteral("weight_spinbox"));
        weight_spinbox->setGeometry(QRect(90, 100, 71, 32));
        weight_spinbox->setDecimals(0);
        height_spinbox = new QDoubleSpinBox(centralWidget);
        height_spinbox->setObjectName(QStringLiteral("height_spinbox"));
        height_spinbox->setGeometry(QRect(90, 140, 71, 32));
        height_spinbox->setDecimals(0);
        height_spinbox->setMaximum(250);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 541, 30));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gym Soft", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        gender_label->setText(QApplication::translate("MainWindow", "Gender: ", Q_NULLPTR));
        gender_combo->clear();
        gender_combo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Male", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Female", Q_NULLPTR)
        );
        weight_label->setText(QApplication::translate("MainWindow", "Weight: ", Q_NULLPTR));
        weight_combo->clear();
        weight_combo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Kilograms", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Pounds", Q_NULLPTR)
        );
        height_combo->clear();
        height_combo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CM", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Feet and Inches", Q_NULLPTR)
        );
        height_label->setText(QApplication::translate("MainWindow", "Height:", Q_NULLPTR));
        age_label->setText(QApplication::translate("MainWindow", "Age:", Q_NULLPTR));
        exercise_combo->clear();
        exercise_combo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Do you do little to no exercise", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Light exercise (1-3 day per week)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Moderate exercise (3-5 days per week)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Heavy Exercise (6 - 7 days per week)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Very heavy exercise (twice per day, extra heavy workouts)", Q_NULLPTR)
        );
        run->setText(QApplication::translate("MainWindow", "Go", Q_NULLPTR));
        bmr_label->setText(QApplication::translate("MainWindow", "BMR is:", Q_NULLPTR));
        bmi_label->setText(QApplication::translate("MainWindow", "BMI is:", Q_NULLPTR));
        maintain_label->setText(QApplication::translate("MainWindow", "Calories to maintain:", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuWindow->setTitle(QApplication::translate("MainWindow", "Window", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
