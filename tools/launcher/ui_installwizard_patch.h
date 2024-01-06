/********************************************************************************
** Form generated from reading UI file 'installwizard_patch.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALLWIZARD_PATCH_H
#define UI_INSTALLWIZARD_PATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_InstallWizard_Patch
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblStatus;
    QProgressBar *pbProgress;

    void setupUi(QWizardPage *InstallWizard_Patch)
    {
        if (InstallWizard_Patch->objectName().isEmpty())
            InstallWizard_Patch->setObjectName("InstallWizard_Patch");
        InstallWizard_Patch->resize(640, 480);
        verticalLayout = new QVBoxLayout(InstallWizard_Patch);
        verticalLayout->setObjectName("verticalLayout");
        lblStatus = new QLabel(InstallWizard_Patch);
        lblStatus->setObjectName("lblStatus");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lblStatus);

        pbProgress = new QProgressBar(InstallWizard_Patch);
        pbProgress->setObjectName("pbProgress");
        pbProgress->setValue(0);

        verticalLayout->addWidget(pbProgress);


        retranslateUi(InstallWizard_Patch);

        QMetaObject::connectSlotsByName(InstallWizard_Patch);
    } // setupUi

    void retranslateUi(QWizardPage *InstallWizard_Patch)
    {
        InstallWizard_Patch->setWindowTitle(QCoreApplication::translate("InstallWizard_Patch", "WizardPage", nullptr));
        InstallWizard_Patch->setTitle(QCoreApplication::translate("InstallWizard_Patch", "Installing Patch...", nullptr));
        lblStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InstallWizard_Patch: public Ui_InstallWizard_Patch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALLWIZARD_PATCH_H
