/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ioLaunch
{
public:
    QWidget *centralWidget;
    QPushButton *btnLaunch;
    QTabWidget *tabWidget;
    QWidget *tabMain;
    QWidget *tabSettings;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *screenModeLayout;
    QLabel *label_2;
    QRadioButton *rbFull;
    QRadioButton *rbWin;
    QSpacerItem *horizontalSpacer;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *resolutionLayout;
    QLabel *label_6;
    QComboBox *cbResolution;
    QLabel *label_3;
    QSpinBox *sbWidth;
    QLabel *label_4;
    QSpinBox *sbHeight;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *installWizardLayout;
    QPushButton *btnRunInstallWizard;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tabRend2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ioLaunch)
    {
        if (ioLaunch->objectName().isEmpty())
            ioLaunch->setObjectName("ioLaunch");
        ioLaunch->setEnabled(true);
        ioLaunch->resize(450, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(ioLaunch->sizePolicy().hasHeightForWidth());
        ioLaunch->setSizePolicy(sizePolicy);
        ioLaunch->setMinimumSize(QSize(450, 360));
        ioLaunch->setMaximumSize(QSize(450, 360));
        ioLaunch->setSizeIncrement(QSize(1, 1));
        ioLaunch->setBaseSize(QSize(450, 360));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        ioLaunch->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/iolICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        ioLaunch->setWindowIcon(icon);
        ioLaunch->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(ioLaunch);
        centralWidget->setObjectName("centralWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setSizeIncrement(QSize(1, 1));
        btnLaunch = new QPushButton(centralWidget);
        btnLaunch->setObjectName("btnLaunch");
        btnLaunch->setGeometry(QRect(0, 279, 451, 61));
        btnLaunch->setStyleSheet(QString::fromUtf8("font: 24pt \"Arial Black\";\n"
"color: #7fa0d3;"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-10, 0, 471, 281));
        tabWidget->setMinimumSize(QSize(451, 0));
        tabWidget->setStyleSheet(QString::fromUtf8("#tabMain{\n"
"	background-image: url(:/imgs/iol.png);\n"
"	background-repeat: no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"QTabBar::tab{\n"
"	width: 150px;\n"
"}\n"
"QTabWidget::tab-bar{\n"
"	alignment: center;\n"
"}"));
        tabMain = new QWidget();
        tabMain->setObjectName("tabMain");
        tabMain->setMinimumSize(QSize(445, 0));
        tabMain->setLayoutDirection(Qt::LeftToRight);
        tabWidget->addTab(tabMain, QString());
        tabSettings = new QWidget();
        tabSettings->setObjectName("tabSettings");
        horizontalLayoutWidget = new QWidget(tabSettings);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 40, 441, 31));
        screenModeLayout = new QHBoxLayout(horizontalLayoutWidget);
        screenModeLayout->setSpacing(6);
        screenModeLayout->setContentsMargins(11, 11, 11, 11);
        screenModeLayout->setObjectName("screenModeLayout");
        screenModeLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");

        screenModeLayout->addWidget(label_2);

        rbFull = new QRadioButton(horizontalLayoutWidget);
        rbFull->setObjectName("rbFull");
        rbFull->setChecked(true);

        screenModeLayout->addWidget(rbFull);

        rbWin = new QRadioButton(horizontalLayoutWidget);
        rbWin->setObjectName("rbWin");

        screenModeLayout->addWidget(rbWin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        screenModeLayout->addItem(horizontalSpacer);

        horizontalLayoutWidget_2 = new QWidget(tabSettings);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 0, 441, 41));
        resolutionLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        resolutionLayout->setSpacing(6);
        resolutionLayout->setContentsMargins(11, 11, 11, 11);
        resolutionLayout->setObjectName("resolutionLayout");
        resolutionLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName("label_6");

        resolutionLayout->addWidget(label_6);

        cbResolution = new QComboBox(horizontalLayoutWidget_2);
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->addItem(QString());
        cbResolution->setObjectName("cbResolution");

        resolutionLayout->addWidget(cbResolution);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName("label_3");

        resolutionLayout->addWidget(label_3);

        sbWidth = new QSpinBox(horizontalLayoutWidget_2);
        sbWidth->setObjectName("sbWidth");
        sbWidth->setMaximum(100000);

        resolutionLayout->addWidget(sbWidth);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName("label_4");

        resolutionLayout->addWidget(label_4);

        sbHeight = new QSpinBox(horizontalLayoutWidget_2);
        sbHeight->setObjectName("sbHeight");
        sbHeight->setMaximum(100000);

        resolutionLayout->addWidget(sbHeight);

        horizontalLayoutWidget_3 = new QWidget(tabSettings);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 70, 441, 41));
        installWizardLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        installWizardLayout->setSpacing(6);
        installWizardLayout->setContentsMargins(11, 11, 11, 11);
        installWizardLayout->setObjectName("installWizardLayout");
        installWizardLayout->setContentsMargins(0, 0, 0, 0);
        btnRunInstallWizard = new QPushButton(horizontalLayoutWidget_3);
        btnRunInstallWizard->setObjectName("btnRunInstallWizard");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnRunInstallWizard->sizePolicy().hasHeightForWidth());
        btnRunInstallWizard->setSizePolicy(sizePolicy2);

        installWizardLayout->addWidget(btnRunInstallWizard);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        installWizardLayout->addItem(horizontalSpacer_3);

        tabWidget->addTab(tabSettings, QString());
        tabRend2 = new QWidget();
        tabRend2->setObjectName("tabRend2");
        tabWidget->addTab(tabRend2, QString());
        ioLaunch->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ioLaunch);
        statusBar->setObjectName("statusBar");
        ioLaunch->setStatusBar(statusBar);

        retranslateUi(ioLaunch);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ioLaunch);
    } // setupUi

    void retranslateUi(QMainWindow *ioLaunch)
    {
        ioLaunch->setWindowTitle(QCoreApplication::translate("ioLaunch", "ioLaunch 0.2", nullptr));
        btnLaunch->setText(QCoreApplication::translate("ioLaunch", "Launch", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMain), QCoreApplication::translate("ioLaunch", "Launch", nullptr));
        label_2->setText(QCoreApplication::translate("ioLaunch", "Screen Mode:", nullptr));
        rbFull->setText(QCoreApplication::translate("ioLaunch", "Full Screen", nullptr));
        rbWin->setText(QCoreApplication::translate("ioLaunch", "Windowed", nullptr));
        label_6->setText(QCoreApplication::translate("ioLaunch", "Resolution:", nullptr));
        cbResolution->setItemText(0, QCoreApplication::translate("ioLaunch", "Native", nullptr));
        cbResolution->setItemText(1, QCoreApplication::translate("ioLaunch", "Custom", nullptr));
        cbResolution->setItemText(2, QCoreApplication::translate("ioLaunch", "320x240", nullptr));
        cbResolution->setItemText(3, QCoreApplication::translate("ioLaunch", "400x300", nullptr));
        cbResolution->setItemText(4, QCoreApplication::translate("ioLaunch", "512x384", nullptr));
        cbResolution->setItemText(5, QCoreApplication::translate("ioLaunch", "640x480", nullptr));
        cbResolution->setItemText(6, QCoreApplication::translate("ioLaunch", "800x600", nullptr));
        cbResolution->setItemText(7, QCoreApplication::translate("ioLaunch", "960x720", nullptr));
        cbResolution->setItemText(8, QCoreApplication::translate("ioLaunch", "1024x768", nullptr));
        cbResolution->setItemText(9, QCoreApplication::translate("ioLaunch", "1152x864", nullptr));
        cbResolution->setItemText(10, QCoreApplication::translate("ioLaunch", "1280x1024", nullptr));
        cbResolution->setItemText(11, QCoreApplication::translate("ioLaunch", "1600x1200", nullptr));
        cbResolution->setItemText(12, QCoreApplication::translate("ioLaunch", "2048x1536", nullptr));
        cbResolution->setItemText(13, QCoreApplication::translate("ioLaunch", "856x480(16:9)", nullptr));
        cbResolution->setItemText(14, QCoreApplication::translate("ioLaunch", "1280x720(16:9)", nullptr));
        cbResolution->setItemText(15, QCoreApplication::translate("ioLaunch", "1920x1080(16:9)", nullptr));
        cbResolution->setItemText(16, QCoreApplication::translate("ioLaunch", "1280x800(16:10)", nullptr));

        label_3->setText(QCoreApplication::translate("ioLaunch", "W", nullptr));
        label_4->setText(QCoreApplication::translate("ioLaunch", "H", nullptr));
        btnRunInstallWizard->setText(QCoreApplication::translate("ioLaunch", "Run Install Wizard", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSettings), QCoreApplication::translate("ioLaunch", "Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRend2), QCoreApplication::translate("ioLaunch", "Rend2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ioLaunch: public Ui_ioLaunch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
