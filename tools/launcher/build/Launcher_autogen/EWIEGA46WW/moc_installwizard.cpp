/****************************************************************************
** Meta object code from reading C++ file 'installwizard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../installwizard.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'installwizard.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSInstallWizardENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInstallWizardENDCLASS = QtMocHelpers::stringData(
    "InstallWizard",
    "cancel",
    "",
    "finished",
    "result"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInstallWizardENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[14];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInstallWizardENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInstallWizardENDCLASS_t qt_meta_stringdata_CLASSInstallWizardENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "InstallWizard"
        QT_MOC_LITERAL(14, 6),  // "cancel"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 8),  // "finished"
        QT_MOC_LITERAL(31, 6)   // "result"
    },
    "InstallWizard",
    "cancel",
    "",
    "finished",
    "result"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInstallWizardENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    1,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject InstallWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizard::staticMetaObject>(),
    qt_meta_stringdata_CLASSInstallWizardENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInstallWizardENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInstallWizardENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstallWizard, std::true_type>,
        // method 'cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void InstallWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstallWizard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *InstallWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstallWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInstallWizardENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int InstallWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
