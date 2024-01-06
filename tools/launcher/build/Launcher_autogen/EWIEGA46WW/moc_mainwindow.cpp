/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSioLaunchENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSioLaunchENDCLASS = QtMocHelpers::stringData(
    "ioLaunch",
    "on_btnLaunch_clicked",
    "",
    "on_cbResolution_currentIndexChanged",
    "index",
    "on_rbFull_toggled",
    "checked",
    "on_rbWin_toggled",
    "on_sbWidth_valueChanged",
    "arg1",
    "on_sbHeight_valueChanged",
    "on_btnRunInstallWizard_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSioLaunchENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[9];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[36];
    char stringdata4[6];
    char stringdata5[18];
    char stringdata6[8];
    char stringdata7[17];
    char stringdata8[24];
    char stringdata9[5];
    char stringdata10[25];
    char stringdata11[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSioLaunchENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSioLaunchENDCLASS_t qt_meta_stringdata_CLASSioLaunchENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "ioLaunch"
        QT_MOC_LITERAL(9, 20),  // "on_btnLaunch_clicked"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 35),  // "on_cbResolution_currentIndexC..."
        QT_MOC_LITERAL(67, 5),  // "index"
        QT_MOC_LITERAL(73, 17),  // "on_rbFull_toggled"
        QT_MOC_LITERAL(91, 7),  // "checked"
        QT_MOC_LITERAL(99, 16),  // "on_rbWin_toggled"
        QT_MOC_LITERAL(116, 23),  // "on_sbWidth_valueChanged"
        QT_MOC_LITERAL(140, 4),  // "arg1"
        QT_MOC_LITERAL(145, 24),  // "on_sbHeight_valueChanged"
        QT_MOC_LITERAL(170, 30)   // "on_btnRunInstallWizard_clicked"
    },
    "ioLaunch",
    "on_btnLaunch_clicked",
    "",
    "on_cbResolution_currentIndexChanged",
    "index",
    "on_rbFull_toggled",
    "checked",
    "on_rbWin_toggled",
    "on_sbWidth_valueChanged",
    "arg1",
    "on_sbHeight_valueChanged",
    "on_btnRunInstallWizard_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSioLaunchENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    1,   57,    2, 0x08,    2 /* Private */,
       5,    1,   60,    2, 0x08,    4 /* Private */,
       7,    1,   63,    2, 0x08,    6 /* Private */,
       8,    1,   66,    2, 0x08,    8 /* Private */,
      10,    1,   69,    2, 0x08,   10 /* Private */,
      11,    0,   72,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ioLaunch::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSioLaunchENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSioLaunchENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSioLaunchENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ioLaunch, std::true_type>,
        // method 'on_btnLaunch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cbResolution_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_rbFull_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_rbWin_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_sbWidth_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sbHeight_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnRunInstallWizard_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ioLaunch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ioLaunch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnLaunch_clicked(); break;
        case 1: _t->on_cbResolution_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_rbFull_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_rbWin_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_sbWidth_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_sbHeight_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_btnRunInstallWizard_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *ioLaunch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ioLaunch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSioLaunchENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ioLaunch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
