/****************************************************************************
** Meta object code from reading C++ file 'feedback.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/feedback.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'feedback.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Feedback_t {
    QByteArrayData data[12];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Feedback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Feedback_t qt_meta_stringdata_Feedback = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Feedback"
QT_MOC_LITERAL(1, 9, 16), // "setErrorMessageS"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "msg"
QT_MOC_LITERAL(4, 31, 12), // "clearInputsS"
QT_MOC_LITERAL(5, 44, 16), // "disableElementsS"
QT_MOC_LITERAL(6, 61, 6), // "status"
QT_MOC_LITERAL(7, 68, 15), // "setErrorMessage"
QT_MOC_LITERAL(8, 84, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(9, 103, 11), // "clearInputs"
QT_MOC_LITERAL(10, 115, 15), // "disableElements"
QT_MOC_LITERAL(11, 131, 19) // "on_btnClose_clicked"

    },
    "Feedback\0setErrorMessageS\0\0msg\0"
    "clearInputsS\0disableElementsS\0status\0"
    "setErrorMessage\0on_btnSend_clicked\0"
    "clearInputs\0disableElements\0"
    "on_btnClose_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Feedback[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   61,    2, 0x08 /* Private */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void Feedback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Feedback *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setErrorMessageS((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->clearInputsS(); break;
        case 2: _t->disableElementsS((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->setErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_btnSend_clicked(); break;
        case 5: _t->clearInputs(); break;
        case 6: _t->disableElements((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->on_btnClose_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Feedback::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feedback::setErrorMessageS)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Feedback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feedback::clearInputsS)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Feedback::*)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feedback::disableElementsS)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Feedback::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Feedback.data,
    qt_meta_data_Feedback,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Feedback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Feedback::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Feedback.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Feedback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Feedback::setErrorMessageS(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Feedback::clearInputsS()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Feedback::disableElementsS(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
