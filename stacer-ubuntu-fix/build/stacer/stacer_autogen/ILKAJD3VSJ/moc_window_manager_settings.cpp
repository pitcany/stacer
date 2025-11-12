/****************************************************************************
** Meta object code from reading C++ file 'window_manager_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/Pages/GnomeSettings/window_manager_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window_manager_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowManagerSettings_t {
    QByteArrayData data[14];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowManagerSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowManagerSettings_t qt_meta_stringdata_WindowManagerSettings = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WindowManagerSettings"
QT_MOC_LITERAL(1, 22, 34), // "cmbTextQuality_currentIndexCh..."
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 5), // "index"
QT_MOC_LITERAL(4, 64, 30), // "checkWorkspaceSwitcher_clicked"
QT_MOC_LITERAL(5, 95, 7), // "checked"
QT_MOC_LITERAL(6, 103, 33), // "spinHorizonWorkspace_valueCha..."
QT_MOC_LITERAL(7, 137, 5), // "value"
QT_MOC_LITERAL(8, 143, 32), // "spinVerticWorkspace_valueChanged"
QT_MOC_LITERAL(9, 176, 25), // "checkRaiseOnClick_clicked"
QT_MOC_LITERAL(10, 202, 32), // "cmbFocusMode_currentIndexChanged"
QT_MOC_LITERAL(11, 235, 42), // "cmbTitleBarDoubleClick_curren..."
QT_MOC_LITERAL(12, 278, 42), // "cmbTitleBarMiddleClick_curren..."
QT_MOC_LITERAL(13, 321, 41) // "cmbTitleBarRightClick_current..."

    },
    "WindowManagerSettings\0"
    "cmbTextQuality_currentIndexChanged\0\0"
    "index\0checkWorkspaceSwitcher_clicked\0"
    "checked\0spinHorizonWorkspace_valueChanged\0"
    "value\0spinVerticWorkspace_valueChanged\0"
    "checkRaiseOnClick_clicked\0"
    "cmbFocusMode_currentIndexChanged\0"
    "cmbTitleBarDoubleClick_currentIndexChanged\0"
    "cmbTitleBarMiddleClick_currentIndexChanged\0"
    "cmbTitleBarRightClick_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowManagerSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       8,    1,   68,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void WindowManagerSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowManagerSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cmbTextQuality_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->checkWorkspaceSwitcher_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->spinHorizonWorkspace_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->spinVerticWorkspace_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->checkRaiseOnClick_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->cmbFocusMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->cmbTitleBarDoubleClick_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->cmbTitleBarMiddleClick_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->cmbTitleBarRightClick_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WindowManagerSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WindowManagerSettings.data,
    qt_meta_data_WindowManagerSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowManagerSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowManagerSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowManagerSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WindowManagerSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
