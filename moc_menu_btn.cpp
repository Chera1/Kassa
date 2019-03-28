/****************************************************************************
** Meta object code from reading C++ file 'menu_btn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../menu_btn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu_btn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BtnMenu_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BtnMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BtnMenu_t qt_meta_stringdata_BtnMenu = {
    {
QT_MOC_LITERAL(0, 0, 7), // "BtnMenu"
QT_MOC_LITERAL(1, 8, 13), // "sigChangeCard"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "sigPushCash"
QT_MOC_LITERAL(4, 35, 11), // "sigCashBack"
QT_MOC_LITERAL(5, 47, 7), // "sigExit"
QT_MOC_LITERAL(6, 55, 8), // "slotMenu"
QT_MOC_LITERAL(7, 64, 17), // "slotBtnChangeCard"
QT_MOC_LITERAL(8, 82, 15), // "slotBtnPushCash"
QT_MOC_LITERAL(9, 98, 15), // "slotBtnCashBack"
QT_MOC_LITERAL(10, 114, 8) // "slotExit"

    },
    "BtnMenu\0sigChangeCard\0\0sigPushCash\0"
    "sigCashBack\0sigExit\0slotMenu\0"
    "slotBtnChangeCard\0slotBtnPushCash\0"
    "slotBtnCashBack\0slotExit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BtnMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BtnMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BtnMenu *_t = static_cast<BtnMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigChangeCard(); break;
        case 1: _t->sigPushCash(); break;
        case 2: _t->sigCashBack(); break;
        case 3: _t->sigExit(); break;
        case 4: _t->slotMenu(); break;
        case 5: _t->slotBtnChangeCard(); break;
        case 6: _t->slotBtnPushCash(); break;
        case 7: _t->slotBtnCashBack(); break;
        case 8: _t->slotExit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BtnMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BtnMenu::sigChangeCard)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BtnMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BtnMenu::sigPushCash)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BtnMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BtnMenu::sigCashBack)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BtnMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BtnMenu::sigExit)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BtnMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BtnMenu.data,
      qt_meta_data_BtnMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BtnMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BtnMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BtnMenu.stringdata0))
        return static_cast<void*>(const_cast< BtnMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int BtnMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void BtnMenu::sigChangeCard()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BtnMenu::sigPushCash()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void BtnMenu::sigCashBack()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void BtnMenu::sigExit()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
