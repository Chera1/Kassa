/****************************************************************************
** Meta object code from reading C++ file 'atolkkm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../atolkkm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'atolkkm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AtolKKM_t {
    QByteArrayData data[11];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AtolKKM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AtolKKM_t qt_meta_stringdata_AtolKKM = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AtolKKM"
QT_MOC_LITERAL(1, 8, 4), // "done"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 9), // "getStatus"
QT_MOC_LITERAL(4, 24, 10), // "numDocSent"
QT_MOC_LITERAL(5, 35, 8), // "numShift"
QT_MOC_LITERAL(6, 44, 15), // "getSerialNumber"
QT_MOC_LITERAL(7, 60, 7), // "QRPrint"
QT_MOC_LITERAL(8, 68, 9), // "openShift"
QT_MOC_LITERAL(9, 78, 10), // "closeShift"
QT_MOC_LITERAL(10, 89, 8) // "tryPrint"

    },
    "AtolKKM\0done\0\0getStatus\0numDocSent\0"
    "numShift\0getSerialNumber\0QRPrint\0"
    "openShift\0closeShift\0tryPrint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AtolKKM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    2,   64,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
       9,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void AtolKKM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AtolKKM *_t = static_cast<AtolKKM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->getStatus(); break;
        case 2: _t->numDocSent(); break;
        case 3: _t->numShift(); break;
        case 4: _t->getSerialNumber(); break;
        case 5: _t->QRPrint((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->openShift((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->closeShift((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->tryPrint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AtolKKM::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AtolKKM::done)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AtolKKM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AtolKKM.data,
      qt_meta_data_AtolKKM,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AtolKKM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AtolKKM::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AtolKKM.stringdata0))
        return static_cast<void*>(const_cast< AtolKKM*>(this));
    return QObject::qt_metacast(_clname);
}

int AtolKKM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AtolKKM::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
