/****************************************************************************
** Meta object code from reading C++ file 'sliding_stacked_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/sliding_stacked_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sliding_stacked_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SlidingStackedWidget_t {
    QByteArrayData data[17];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlidingStackedWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlidingStackedWidget_t qt_meta_stringdata_SlidingStackedWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SlidingStackedWidget"
QT_MOC_LITERAL(1, 21, 17), // "animationFinished"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "setSpeed"
QT_MOC_LITERAL(4, 49, 5), // "speed"
QT_MOC_LITERAL(5, 55, 12), // "setAnimation"
QT_MOC_LITERAL(6, 68, 18), // "QEasingCurve::Type"
QT_MOC_LITERAL(7, 87, 13), // "animationtype"
QT_MOC_LITERAL(8, 101, 15), // "setVerticalMode"
QT_MOC_LITERAL(9, 117, 8), // "vertical"
QT_MOC_LITERAL(10, 126, 11), // "slideInNext"
QT_MOC_LITERAL(11, 138, 11), // "slideInPrev"
QT_MOC_LITERAL(12, 150, 10), // "slideInIdx"
QT_MOC_LITERAL(13, 161, 3), // "idx"
QT_MOC_LITERAL(14, 165, 11), // "t_direction"
QT_MOC_LITERAL(15, 177, 9), // "direction"
QT_MOC_LITERAL(16, 187, 17) // "animationDoneSlot"

    },
    "SlidingStackedWidget\0animationFinished\0"
    "\0setSpeed\0speed\0setAnimation\0"
    "QEasingCurve::Type\0animationtype\0"
    "setVerticalMode\0vertical\0slideInNext\0"
    "slideInPrev\0slideInIdx\0idx\0t_direction\0"
    "direction\0animationDoneSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlidingStackedWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   65,    2, 0x0a /* Public */,
       5,    1,   68,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
       8,    0,   74,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   75,    2, 0x0a /* Public */,
      11,    0,   76,    2, 0x0a /* Public */,
      12,    2,   77,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x2a /* Public | MethodCloned */,
      16,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void SlidingStackedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SlidingStackedWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->animationFinished(); break;
        case 1: _t->setSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setAnimation((*reinterpret_cast< const QEasingCurve::Type(*)>(_a[1]))); break;
        case 3: _t->setVerticalMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setVerticalMode(); break;
        case 5: _t->slideInNext(); break;
        case 6: _t->slideInPrev(); break;
        case 7: _t->slideInIdx((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< t_direction(*)>(_a[2]))); break;
        case 8: _t->slideInIdx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->animationDoneSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SlidingStackedWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlidingStackedWidget::animationFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SlidingStackedWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QStackedWidget::staticMetaObject>(),
    qt_meta_stringdata_SlidingStackedWidget.data,
    qt_meta_data_SlidingStackedWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SlidingStackedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlidingStackedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SlidingStackedWidget.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int SlidingStackedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SlidingStackedWidget::animationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
