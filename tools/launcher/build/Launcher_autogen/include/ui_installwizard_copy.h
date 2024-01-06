/********************************************************************************
** Form generated from reading UI file 'installwizard_copy.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALLWIZARD_COPY_H
#define UI_INSTALLWIZARD_COPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_InstallWizard_Copy
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblStatus;
    QProgressBar *pbProgress;

    void setupUi(QWizardPage *InstallWizard_Copy)
    {
        if (InstallWizard_Copy->objectName().isEmpty())
            InstallWizard_Copy->setObjectName("InstallWizard_Copy");
        InstallWizard_Copy->resize(640, 480);
        verticalLayout = new QVBoxLayout(InstallWizard_Copy);
        verticalLayout->setObjectName("verticalLayout");
        lblStatus = new QLabel(InstallWizard_Copy);
        lblStatus->setObjectName("lblStatus");

        verticalLayout->addWidget(lblStatus);

        pbProgress = new QProgressBar(InstallWizard_Copy);
        pbProgress->setObjectName("pbProgress");
        pbProgress->setValue(0);

        verticalLayout->addWidget(pbProgress);


        retranslateUi(InstallWizard_Copy);

        QMetaObject::connectSlotsByName(InstallWizard_Copy);
    } // setupUi

    void retranslateUi(QWizardPage *InstallWizard_Copy)
    {
        InstallWizard_Copy->setWindowTitle(QCoreApplication::translate("InstallWizard_Copy", "WizardPage", nullptr));
        InstallWizard_Copy->setTitle(QCoreApplication::translate("InstallWizard_Copy", "Installing Quake III Arena", nullptr));
        lblStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InstallWizard_Copy: public Ui_InstallWizard_Copy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALLWIZARD_COPY_H
