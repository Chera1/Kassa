/****************************************************************************
** Meta object code from reading C++ file 'z2usb.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../z2usb.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'z2usb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZUSB_t {
    QByteArrayData data[15];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZUSB_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZUSB_t qt_meta_stringdata_ZUSB = {
    {
QT_MOC_LITERAL(0, 0, 4), // "ZUSB"
QT_MOC_LITERAL(1, 5, 8), // "sigZavis"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 9), // "sigRemove"
QT_MOC_LITERAL(4, 25, 7), // "sigCard"
QT_MOC_LITERAL(5, 33, 9), // "sigDiscon"
QT_MOC_LITERAL(6, 43, 6), // "sigCon"
QT_MOC_LITERAL(7, 50, 9), // "slotTimer"
QT_MOC_LITERAL(8, 60, 9), // "slotReady"
QT_MOC_LITERAL(9, 70, 7), // "slotErr"
QT_MOC_LITERAL(10, 78, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(11, 107, 5), // "error"
QT_MOC_LITERAL(12, 113, 3), // "run"
QT_MOC_LITERAL(13, 117, 14), // "slotRepeatCard"
QT_MOC_LITERAL(14, 132, 11) // "getCodeCard"

    },
    "ZUSB\0sigZavis\0\0sigRemove\0sigCard\0"
    "sigDiscon\0sigCon\0slotTimer\0slotReady\0"
    "slotErr\0QSerialPort::SerialPortError\0"
    "error\0run\0slotRepeatCard\0getCodeCard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZUSB[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       5,    0,   74,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   76,    2, 0x0a /* Public */,
       8,    0,   77,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x0a /* Public */,
      12,    0,   81,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QByteArray,

       0        // eod
};

void ZUSB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZUSB *_t = static_cast<ZUSB *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigZavis(); break;
        case 1: _t->sigRemove(); break;
        case 2: _t->sigCard((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->sigDiscon(); break;
        case 4: _t->sigCon(); break;
        case 5: _t->slotTimer(); break;
        case 6: _t->slotReady(); break;
        case 7: _t->slotErr((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 8: _t->run(); break;
        case 9: _t->slotRepeatCard(); break;
        case 10: { QByteArray _r = _t->getCodeCard();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZUSB::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZUSB::sigZavis)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ZUSB::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZUSB::sigRemove)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ZUSB::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZUSB::sigCard)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ZUSB::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZUSB::sigDiscon)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ZUSB::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZUSB::sigCon)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject ZUSB::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ZUSB.data,
      qt_meta_data_ZUSB,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ZUSB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZUSB::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ZUSB.stringdata0))
        return static_cast<void*>(const_cast< ZUSB*>(this));
    return QObject::qt_metacast(_clname);
}

int ZUSB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ZUSB::sigZavis()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ZUSB::sigRemove()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ZUSB::sigCard(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ZUSB::sigDiscon()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void ZUSB::sigCon()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
