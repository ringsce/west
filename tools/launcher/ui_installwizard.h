/********************************************************************************
** Form generated from reading UI file 'installwizard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALLWIZARD_H
#define UI_INSTALLWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWizard>

QT_BEGIN_NAMESPACE

class Ui_InstallWizard
{
public:

    void setupUi(QWizard *InstallWizard)
    {
        if (InstallWizard->objectName().isEmpty())
            InstallWizard->setObjectName("InstallWizard");
        InstallWizard->resize(640, 480);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/iolICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        InstallWizard->setWindowIcon(icon);

        retranslateUi(InstallWizard);

        QMetaObject::connectSlotsByName(InstallWizard);
    } // setupUi

    void retranslateUi(QWizard *InstallWizard)
    {
        InstallWizard->setWindowTitle(QCoreApplication::translate("InstallWizard", "Quake III Arena Install Wizard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InstallWizard: public Ui_InstallWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALLWIZARD_H
