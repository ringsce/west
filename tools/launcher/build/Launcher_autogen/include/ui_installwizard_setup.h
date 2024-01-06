/********************************************************************************
** Form generated from reading UI file 'installwizard_setup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALLWIZARD_SETUP_H
#define UI_INSTALLWIZARD_SETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_InstallWizard_Setup
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbLocate;
    QRadioButton *rbInstall;
    QRadioButton *rbInstallSteam;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QStackedWidget *stackPages;
    QWidget *pageLocate;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txtLocatePath;
    QPushButton *btnLocateBrowse;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageInstallFromCd;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *btnInstallBrowseDest;
    QPushButton *btnInstallBrowseSource;
    QLabel *label_2;
    QLineEdit *txtInstallDest;
    QComboBox *cbInstallSource;
    QSpacerItem *verticalSpacer_3;
    QWidget *pageInstallFromSteam;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *txtInstallSteamSource;
    QPushButton *btnInstallSteamBrowseSource;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *txtInstallSteamDest;
    QPushButton *btnInstallSteamBrowseDest;

    void setupUi(QWizardPage *InstallWizard_Setup)
    {
        if (InstallWizard_Setup->objectName().isEmpty())
            InstallWizard_Setup->setObjectName("InstallWizard_Setup");
        InstallWizard_Setup->resize(640, 480);
        horizontalLayout = new QHBoxLayout(InstallWizard_Setup);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        rbLocate = new QRadioButton(InstallWizard_Setup);
        rbLocate->setObjectName("rbLocate");
        rbLocate->setChecked(true);

        verticalLayout->addWidget(rbLocate);

        rbInstall = new QRadioButton(InstallWizard_Setup);
        rbInstall->setObjectName("rbInstall");

        verticalLayout->addWidget(rbInstall);

        rbInstallSteam = new QRadioButton(InstallWizard_Setup);
        rbInstallSteam->setObjectName("rbInstallSteam");

        verticalLayout->addWidget(rbInstallSteam);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(InstallWizard_Setup);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        stackPages = new QStackedWidget(InstallWizard_Setup);
        stackPages->setObjectName("stackPages");
        pageLocate = new QWidget();
        pageLocate->setObjectName("pageLocate");
        verticalLayout_2 = new QVBoxLayout(pageLocate);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        txtLocatePath = new QLineEdit(pageLocate);
        txtLocatePath->setObjectName("txtLocatePath");

        horizontalLayout_2->addWidget(txtLocatePath);

        btnLocateBrowse = new QPushButton(pageLocate);
        btnLocateBrowse->setObjectName("btnLocateBrowse");

        horizontalLayout_2->addWidget(btnLocateBrowse);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        stackPages->addWidget(pageLocate);
        pageInstallFromCd = new QWidget();
        pageInstallFromCd->setObjectName("pageInstallFromCd");
        gridLayout = new QGridLayout(pageInstallFromCd);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(pageInstallFromCd);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnInstallBrowseDest = new QPushButton(pageInstallFromCd);
        btnInstallBrowseDest->setObjectName("btnInstallBrowseDest");

        gridLayout->addWidget(btnInstallBrowseDest, 1, 2, 1, 1);

        btnInstallBrowseSource = new QPushButton(pageInstallFromCd);
        btnInstallBrowseSource->setObjectName("btnInstallBrowseSource");

        gridLayout->addWidget(btnInstallBrowseSource, 0, 2, 1, 1);

        label_2 = new QLabel(pageInstallFromCd);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtInstallDest = new QLineEdit(pageInstallFromCd);
        txtInstallDest->setObjectName("txtInstallDest");

        gridLayout->addWidget(txtInstallDest, 1, 1, 1, 1);

        cbInstallSource = new QComboBox(pageInstallFromCd);
        cbInstallSource->setObjectName("cbInstallSource");
        cbInstallSource->setEditable(true);

        gridLayout->addWidget(cbInstallSource, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        stackPages->addWidget(pageInstallFromCd);
        pageInstallFromSteam = new QWidget();
        pageInstallFromSteam->setObjectName("pageInstallFromSteam");
        formLayout_3 = new QFormLayout(pageInstallFromSteam);
        formLayout_3->setObjectName("formLayout_3");
        label_3 = new QLabel(pageInstallFromSteam);
        label_3->setObjectName("label_3");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        txtInstallSteamSource = new QLineEdit(pageInstallFromSteam);
        txtInstallSteamSource->setObjectName("txtInstallSteamSource");

        horizontalLayout_7->addWidget(txtInstallSteamSource);

        btnInstallSteamBrowseSource = new QPushButton(pageInstallFromSteam);
        btnInstallSteamBrowseSource->setObjectName("btnInstallSteamBrowseSource");

        horizontalLayout_7->addWidget(btnInstallSteamBrowseSource);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_7);

        label_4 = new QLabel(pageInstallFromSteam);
        label_4->setObjectName("label_4");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        txtInstallSteamDest = new QLineEdit(pageInstallFromSteam);
        txtInstallSteamDest->setObjectName("txtInstallSteamDest");

        horizontalLayout_8->addWidget(txtInstallSteamDest);

        btnInstallSteamBrowseDest = new QPushButton(pageInstallFromSteam);
        btnInstallSteamBrowseDest->setObjectName("btnInstallSteamBrowseDest");

        horizontalLayout_8->addWidget(btnInstallSteamBrowseDest);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, horizontalLayout_8);

        stackPages->addWidget(pageInstallFromSteam);

        horizontalLayout->addWidget(stackPages);


        retranslateUi(InstallWizard_Setup);

        QMetaObject::connectSlotsByName(InstallWizard_Setup);
    } // setupUi

    void retranslateUi(QWizardPage *InstallWizard_Setup)
    {
        InstallWizard_Setup->setWindowTitle(QCoreApplication::translate("InstallWizard_Setup", "WizardPage", nullptr));
        InstallWizard_Setup->setTitle(QCoreApplication::translate("InstallWizard_Setup", "Select the installation type", nullptr));
        rbLocate->setText(QCoreApplication::translate("InstallWizard_Setup", "Locate Quake III Arena", nullptr));
        rbInstall->setText(QCoreApplication::translate("InstallWizard_Setup", "Install from CD", nullptr));
        rbInstallSteam->setText(QCoreApplication::translate("InstallWizard_Setup", "Install from Steam", nullptr));
        btnLocateBrowse->setText(QCoreApplication::translate("InstallWizard_Setup", "Browse...", nullptr));
        label->setText(QCoreApplication::translate("InstallWizard_Setup", "CD-ROM Drive:", nullptr));
        btnInstallBrowseDest->setText(QCoreApplication::translate("InstallWizard_Setup", "Browse...", nullptr));
        btnInstallBrowseSource->setText(QCoreApplication::translate("InstallWizard_Setup", "Browse...", nullptr));
        label_2->setText(QCoreApplication::translate("InstallWizard_Setup", "Destination:", nullptr));
        label_3->setText(QCoreApplication::translate("InstallWizard_Setup", "Steam Path:", nullptr));
        btnInstallSteamBrowseSource->setText(QCoreApplication::translate("InstallWizard_Setup", "Browse...", nullptr));
        label_4->setText(QCoreApplication::translate("InstallWizard_Setup", "Destination:", nullptr));
        btnInstallSteamBrowseDest->setText(QCoreApplication::translate("InstallWizard_Setup", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InstallWizard_Setup: public Ui_InstallWizard_Setup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALLWIZARD_SETUP_H
