/****************************************************************************
** Meta object code from reading C++ file 'filecopy.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../filecopy.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filecopy.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFileCopyWorkerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFileCopyWorkerENDCLASS = QtMocHelpers::stringData(
    "FileCopyWorker",
    "fileChanged",
    "",
    "filename",
    "progressChanged",
    "bytesWritten",
    "bytesTotal",
    "errorMessage",
    "message",
    "copyFinished",
    "QList<FileOperation>",
    "renameOperations",
    "copy"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFileCopyWorkerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[15];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[16];
    char stringdata5[13];
    char stringdata6[11];
    char stringdata7[13];
    char stringdata8[8];
    char stringdata9[13];
    char stringdata10[21];
    char stringdata11[17];
    char stringdata12[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFileCopyWorkerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFileCopyWorkerENDCLASS_t qt_meta_stringdata_CLASSFileCopyWorkerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "FileCopyWorker"
        QT_MOC_LITERAL(15, 11),  // "fileChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 8),  // "filename"
        QT_MOC_LITERAL(37, 15),  // "progressChanged"
        QT_MOC_LITERAL(53, 12),  // "bytesWritten"
        QT_MOC_LITERAL(66, 10),  // "bytesTotal"
        QT_MOC_LITERAL(77, 12),  // "errorMessage"
        QT_MOC_LITERAL(90, 7),  // "message"
        QT_MOC_LITERAL(98, 12),  // "copyFinished"
        QT_MOC_LITERAL(111, 20),  // "QList<FileOperation>"
        QT_MOC_LITERAL(132, 16),  // "renameOperations"
        QT_MOC_LITERAL(149, 4)   // "copy"
    },
    "FileCopyWorker",
    "fileChanged",
    "",
    "filename",
    "progressChanged",
    "bytesWritten",
    "bytesTotal",
    "errorMessage",
    "message",
    "copyFinished",
    "QList<FileOperation>",
    "renameOperations",
    "copy"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFileCopyWorkerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    2,   47,    2, 0x06,    3 /* Public */,
       7,    1,   52,    2, 0x06,    6 /* Public */,
       9,    1,   55,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,   58,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileCopyWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSFileCopyWorkerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFileCopyWorkerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFileCopyWorkerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileCopyWorker, std::true_type>,
        // method 'fileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'progressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'errorMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'copyFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<FileOperation>, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FileCopyWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileCopyWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->progressChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 2: _t->errorMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->copyFinished((*reinterpret_cast< std::add_pointer_t<QList<FileOperation>>>(_a[1]))); break;
        case 4: _t->copy(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileCopyWorker::*)(const QString & );
            if (_t _q_method = &FileCopyWorker::fileChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileCopyWorker::*)(qint64 , qint64 );
            if (_t _q_method = &FileCopyWorker::progressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileCopyWorker::*)(const QString & );
            if (_t _q_method = &FileCopyWorker::errorMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileCopyWorker::*)(QList<FileOperation> );
            if (_t _q_method = &FileCopyWorker::copyFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *FileCopyWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileCopyWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFileCopyWorkerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileCopyWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void FileCopyWorker::fileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileCopyWorker::progressChanged(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileCopyWorker::errorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileCopyWorker::copyFinished(QList<FileOperation> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
