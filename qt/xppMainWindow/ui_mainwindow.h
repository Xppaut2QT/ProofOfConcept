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
#include <QtGui/QAction>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionICs;
    QAction *actionICs_2;
    QAction *actionDelay;
    QAction *actionData;
    QAction *actionEquations;
    QWidget *centralwidget;
    QOpenGLWidget *openGLWidget;
    QLabel *label_graphLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QPushButton *pushButton_16;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
    QPushButton *button_Text;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_15;
    QPushButton *pushButton_18;
    QPushButton *button_Zoom;
    QPushButton *pushButton_19;
    QMenuBar *menubar;
    QMenu *menuFiles;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 600);
        actionICs = new QAction(MainWindow);
        actionICs->setObjectName("actionICs");
        actionICs_2 = new QAction(MainWindow);
        actionICs_2->setObjectName("actionICs_2");
        actionDelay = new QAction(MainWindow);
        actionDelay->setObjectName("actionDelay");
        actionData = new QAction(MainWindow);
        actionData->setObjectName("actionData");
        actionEquations = new QAction(MainWindow);
        actionEquations->setObjectName("actionEquations");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName("openGLWidget");
        openGLWidget->setGeometry(QRect(180, 40, 801, 481));
        label_graphLabel = new QLabel(centralwidget);
        label_graphLabel->setObjectName("label_graphLabel");
        label_graphLabel->setGeometry(QRect(180, 0, 591, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Vemana2000")});
        font.setItalic(true);
        label_graphLabel->setFont(font);
        label_graphLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_graphLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextEditable|Qt::TextSelectableByMouse);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(180, 530, 801, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 210, 22);"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 0, 0);"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 101, 164);"));

        horizontalLayout->addWidget(pushButton_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 40, 125, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setMouseTracking(true);
        pushButton_5->setFocusPolicy(Qt::StrongFocus);
        pushButton_5->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_5);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_9);

        pushButton_12 = new QPushButton(verticalLayoutWidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_12->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_12);

        pushButton_14 = new QPushButton(verticalLayoutWidget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_14->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(verticalLayoutWidget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_15->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_15);

        pushButton_17 = new QPushButton(verticalLayoutWidget);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_17->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_17);

        pushButton_16 = new QPushButton(verticalLayoutWidget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_16->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_16);

        pushButton_13 = new QPushButton(verticalLayoutWidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_13->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_13);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_11->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_11);

        button_Text = new QPushButton(verticalLayoutWidget);
        button_Text->setObjectName("button_Text");
        button_Text->setCursor(QCursor(Qt::PointingHandCursor));
        button_Text->setToolTipDuration(-1);

        verticalLayout->addWidget(button_Text);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setToolTipDuration(-1);

        verticalLayout->addWidget(pushButton_6);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 40, 27, 401));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_3);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_6);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName("label_10");
        label_10->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_10);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName("label_14");
        label_14->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_14);

        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName("label_13");
        label_13->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_13);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_7);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName("label_12");
        label_12->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_12);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_9);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName("label_11");
        label_11->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_11);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_8);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_5);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        verticalLayout_2->addWidget(label_4);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(780, 0, 197, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(horizontalLayoutWidget_2);
        label_15->setObjectName("label_15");
        label_15->setPixmap(QPixmap(QString::fromUtf8("ph.png")));

        horizontalLayout_2->addWidget(label_15);

        pushButton_18 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton_18);

        button_Zoom = new QPushButton(horizontalLayoutWidget_2);
        button_Zoom->setObjectName("button_Zoom");
        button_Zoom->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(button_Zoom);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(8, 454, 161, 111));
        pushButton_19->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        menuFiles = new QMenu(menubar);
        menuFiles->setObjectName("menuFiles");
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuFiles->menuAction());
        menuFiles->addAction(actionICs);
        menuFiles->addAction(actionICs_2);
        menuFiles->addSeparator();
        menuFiles->addAction(actionData);
        menuFiles->addAction(actionDelay);
        menuFiles->addAction(actionEquations);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_3, &QPushButton::clicked, label_graphLabel, qOverload<>(&QLabel::clear));
        QObject::connect(button_Zoom, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::showMaximized));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionICs->setText(QCoreApplication::translate("MainWindow", "BCs", nullptr));
        actionICs_2->setText(QCoreApplication::translate("MainWindow", "ICs", nullptr));
        actionDelay->setText(QCoreApplication::translate("MainWindow", "Delay", nullptr));
        actionData->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        actionEquations->setText(QCoreApplication::translate("MainWindow", "Equations", nullptr));
        label_graphLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>GRAPH LABEL</p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Erase", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Restore", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Run boundary value solver</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Boundaries", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_9->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Adding graphs, hard copies, etc</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Graphics", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_12->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Direction of fields and flows on phaseplane</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Field/Flow", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_14->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Integrate the equation</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Initial Conditions", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_15->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Take snapshot of screen</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Kinescope", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_17->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Draw nullclines</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Nullcline", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_16->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Numeric options</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Numerics", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_13->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Set up periodic / torus phasespace</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Phasespace", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_11->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Fixed points and stability</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Sing Points", nullptr));
#if QT_CONFIG(tooltip)
        button_Text->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Add text, lines, arrows, etc</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_Text->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_8->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Change 2D and 3D views</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "View Axes", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_7->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Plot variables vs time</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Xi vs t", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_6->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Set parameters for 3D view</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "3D Parameters", nullptr));
        label_3->setText(QString());
        label_6->setText(QString());
        label_10->setText(QString());
        label_14->setText(QString());
        label_13->setText(QString());
        label_7->setText(QString());
        label_12->setText(QString());
        label_9->setText(QString());
        label_11->setText(QString());
        label_8->setText(QString());
        label_5->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_15->setText(QString());
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_Zoom->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "Make Window", nullptr));
        menuFiles->setTitle(QCoreApplication::translate("MainWindow", "Conditions", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
