/****************************************************************************
** Meta object code from reading C++ file 'appearance_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/Pages/GnomeSettings/appearance_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appearance_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppearanceSettings_t {
    QByteArrayData data[13];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppearanceSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppearanceSettings_t qt_meta_stringdata_AppearanceSettings = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AppearanceSettings"
QT_MOC_LITERAL(1, 19, 32), // "on_checkShowDesktopIcons_clicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 7), // "checked"
QT_MOC_LITERAL(4, 61, 24), // "on_checkHomeIcon_clicked"
QT_MOC_LITERAL(5, 86, 25), // "on_checkTrashIcon_clicked"
QT_MOC_LITERAL(6, 112, 33), // "on_checkMountedVulmesIcon_cli..."
QT_MOC_LITERAL(7, 146, 27), // "on_checkNetworkIcon_clicked"
QT_MOC_LITERAL(8, 174, 38), // "cmbDesktopBackMode_currentInd..."
QT_MOC_LITERAL(9, 213, 5), // "index"
QT_MOC_LITERAL(10, 219, 36), // "cmbLoginBackMode_currentIndex..."
QT_MOC_LITERAL(11, 256, 30), // "on_checkScreenKeyboard_clicked"
QT_MOC_LITERAL(12, 287, 28) // "on_checkScreenReader_clicked"

    },
    "AppearanceSettings\0on_checkShowDesktopIcons_clicked\0"
    "\0checked\0on_checkHomeIcon_clicked\0"
    "on_checkTrashIcon_clicked\0"
    "on_checkMountedVulmesIcon_clicked\0"
    "on_checkNetworkIcon_clicked\0"
    "cmbDesktopBackMode_currentIndexChanged\0"
    "index\0cmbLoginBackMode_currentIndexChanged\0"
    "on_checkScreenKeyboard_clicked\0"
    "on_checkScreenReader_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppearanceSettings[] = {

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
       5,    1,   65,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void AppearanceSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppearanceSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_checkShowDesktopIcons_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_checkHomeIcon_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkTrashIcon_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_checkMountedVulmesIcon_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_checkNetworkIcon_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->cmbDesktopBackMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->cmbLoginBackMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_checkScreenKeyboard_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_checkScreenReader_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppearanceSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AppearanceSettings.data,
    qt_meta_data_AppearanceSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppearanceSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppearanceSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppearanceSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AppearanceSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
