/********************************************************************************
** Form generated from reading UI file 'installwizard_finished.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALLWIZARD_FINISHED_H
#define UI_INSTALLWIZARD_FINISHED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_InstallWizard_Finished
{
public:

    void setupUi(QWizardPage *InstallWizard_Finished)
    {
        if (InstallWizard_Finished->objectName().isEmpty())
            InstallWizard_Finished->setObjectName("InstallWizard_Finished");
        InstallWizard_Finished->resize(640, 480);

        retranslateUi(InstallWizard_Finished);

        QMetaObject::connectSlotsByName(InstallWizard_Finished);
    } // setupUi

    void retranslateUi(QWizardPage *InstallWizard_Finished)
    {
        InstallWizard_Finished->setWindowTitle(QCoreApplication::translate("InstallWizard_Finished", "WizardPage", nullptr));
        InstallWizard_Finished->setTitle(QCoreApplication::translate("InstallWizard_Finished", "Installation Complete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InstallWizard_Finished: public Ui_InstallWizard_Finished {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALLWIZARD_FINISHED_H
