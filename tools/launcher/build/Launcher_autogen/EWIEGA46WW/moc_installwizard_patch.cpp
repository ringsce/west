/****************************************************************************
** Meta object code from reading C++ file 'installwizard_patch.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../installwizard_patch.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'installwizard_patch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSInstallWizard_PatchENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInstallWizard_PatchENDCLASS = QtMocHelpers::stringData(
    "InstallWizard_Patch",
    "extract",
    "",
    "downloadRead",
    "downloadFinished",
    "updateProgress",
    "bytesRead",
    "bytesTotal",
    "setExtractFilename",
    "filename",
    "setErrorMessage",
    "message",
    "finishExtract",
    "QList<FileOperation>",
    "renameOperations"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInstallWizard_PatchENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[20];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[17];
    char stringdata5[15];
    char stringdata6[10];
    char stringdata7[11];
    char stringdata8[19];
    char stringdata9[9];
    char stringdata10[16];
    char stringdata11[8];
    char stringdata12[14];
    char stringdata13[21];
    char stringdata14[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInstallWizard_PatchENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInstallWizard_PatchENDCLASS_t qt_meta_stringdata_CLASSInstallWizard_PatchENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "InstallWizard_Patch"
        QT_MOC_LITERAL(20, 7),  // "extract"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 12),  // "downloadRead"
        QT_MOC_LITERAL(42, 16),  // "downloadFinished"
        QT_MOC_LITERAL(59, 14),  // "updateProgress"
        QT_MOC_LITERAL(74, 9),  // "bytesRead"
        QT_MOC_LITERAL(84, 10),  // "bytesTotal"
        QT_MOC_LITERAL(95, 18),  // "setExtractFilename"
        QT_MOC_LITERAL(114, 8),  // "filename"
        QT_MOC_LITERAL(123, 15),  // "setErrorMessage"
        QT_MOC_LITERAL(139, 7),  // "message"
        QT_MOC_LITERAL(147, 13),  // "finishExtract"
        QT_MOC_LITERAL(161, 20),  // "QList<FileOperation>"
        QT_MOC_LITERAL(182, 16)   // "renameOperations"
    },
    "InstallWizard_Patch",
    "extract",
    "",
    "downloadRead",
    "downloadFinished",
    "updateProgress",
    "bytesRead",
    "bytesTotal",
    "setExtractFilename",
    "filename",
    "setErrorMessage",
    "message",
    "finishExtract",
    "QList<FileOperation>",
    "renameOperations"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInstallWizard_PatchENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    2,   59,    2, 0x08,    4 /* Private */,
       8,    1,   64,    2, 0x08,    7 /* Private */,
      10,    1,   67,    2, 0x08,    9 /* Private */,
      12,    1,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject InstallWizard_Patch::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSInstallWizard_PatchENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInstallWizard_PatchENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInstallWizard_PatchENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstallWizard_Patch, std::true_type>,
        // method 'extract'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'setExtractFilename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setErrorMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'finishExtract'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<FileOperation>, std::false_type>
    >,
    nullptr
} };

void InstallWizard_Patch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstallWizard_Patch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->extract(); break;
        case 1: _t->downloadRead(); break;
        case 2: _t->downloadFinished(); break;
        case 3: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 4: _t->setExtractFilename((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setErrorMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->finishExtract((*reinterpret_cast< std::add_pointer_t<QList<FileOperation>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstallWizard_Patch::*)();
            if (_t _q_method = &InstallWizard_Patch::extract; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *InstallWizard_Patch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstallWizard_Patch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInstallWizard_PatchENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int InstallWizard_Patch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void InstallWizard_Patch::extract()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
