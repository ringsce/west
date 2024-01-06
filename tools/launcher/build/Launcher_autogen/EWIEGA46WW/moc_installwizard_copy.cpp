/****************************************************************************
** Meta object code from reading C++ file 'installwizard_copy.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../installwizard_copy.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'installwizard_copy.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSInstallWizard_CopyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInstallWizard_CopyENDCLASS = QtMocHelpers::stringData(
    "InstallWizard_Copy",
    "copy",
    "",
    "setCopyFilename",
    "filename",
    "setCopyProgress",
    "bytesWritten",
    "bytesTotal",
    "setCopyErrorMessage",
    "message",
    "finishCopy",
    "QList<FileOperation>",
    "renameOperations"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInstallWizard_CopyENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[19];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[9];
    char stringdata5[16];
    char stringdata6[13];
    char stringdata7[11];
    char stringdata8[20];
    char stringdata9[8];
    char stringdata10[11];
    char stringdata11[21];
    char stringdata12[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInstallWizard_CopyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInstallWizard_CopyENDCLASS_t qt_meta_stringdata_CLASSInstallWizard_CopyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "InstallWizard_Copy"
        QT_MOC_LITERAL(19, 4),  // "copy"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 15),  // "setCopyFilename"
        QT_MOC_LITERAL(41, 8),  // "filename"
        QT_MOC_LITERAL(50, 15),  // "setCopyProgress"
        QT_MOC_LITERAL(66, 12),  // "bytesWritten"
        QT_MOC_LITERAL(79, 10),  // "bytesTotal"
        QT_MOC_LITERAL(90, 19),  // "setCopyErrorMessage"
        QT_MOC_LITERAL(110, 7),  // "message"
        QT_MOC_LITERAL(118, 10),  // "finishCopy"
        QT_MOC_LITERAL(129, 20),  // "QList<FileOperation>"
        QT_MOC_LITERAL(150, 16)   // "renameOperations"
    },
    "InstallWizard_Copy",
    "copy",
    "",
    "setCopyFilename",
    "filename",
    "setCopyProgress",
    "bytesWritten",
    "bytesTotal",
    "setCopyErrorMessage",
    "message",
    "finishCopy",
    "QList<FileOperation>",
    "renameOperations"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInstallWizard_CopyENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   45,    2, 0x08,    2 /* Private */,
       5,    2,   48,    2, 0x08,    4 /* Private */,
       8,    1,   53,    2, 0x08,    7 /* Private */,
      10,    1,   56,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject InstallWizard_Copy::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSInstallWizard_CopyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInstallWizard_CopyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInstallWizard_CopyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstallWizard_Copy, std::true_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCopyFilename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCopyProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'setCopyErrorMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'finishCopy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<FileOperation>, std::false_type>
    >,
    nullptr
} };

void InstallWizard_Copy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstallWizard_Copy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->copy(); break;
        case 1: _t->setCopyFilename((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setCopyProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 3: _t->setCopyErrorMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->finishCopy((*reinterpret_cast< std::add_pointer_t<QList<FileOperation>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstallWizard_Copy::*)();
            if (_t _q_method = &InstallWizard_Copy::copy; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *InstallWizard_Copy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstallWizard_Copy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInstallWizard_CopyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int InstallWizard_Copy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void InstallWizard_Copy::copy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
