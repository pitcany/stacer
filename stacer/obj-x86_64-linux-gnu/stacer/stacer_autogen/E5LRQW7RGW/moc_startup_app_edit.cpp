/****************************************************************************
** Meta object code from reading C++ file 'startup_app_edit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/Pages/StartupApps/startup_app_edit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startup_app_edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StartupAppEdit_t {
    QByteArrayData data[12];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StartupAppEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StartupAppEdit_t qt_meta_stringdata_StartupAppEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "StartupAppEdit"
QT_MOC_LITERAL(1, 15, 15), // "startupAppAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "show"
QT_MOC_LITERAL(4, 37, 4), // "init"
QT_MOC_LITERAL(5, 42, 7), // "isValid"
QT_MOC_LITERAL(6, 50, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(7, 69, 18), // "changeDesktopValue"
QT_MOC_LITERAL(8, 88, 12), // "QStringList&"
QT_MOC_LITERAL(9, 101, 5), // "lines"
QT_MOC_LITERAL(10, 107, 3), // "reg"
QT_MOC_LITERAL(11, 111, 4) // "text"

    },
    "StartupAppEdit\0startupAppAdded\0\0show\0"
    "init\0isValid\0on_btnSave_clicked\0"
    "changeDesktopValue\0QStringList&\0lines\0"
    "reg\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartupAppEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    3,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QRegExp, QMetaType::QString,    9,   10,   11,

       0        // eod
};

void StartupAppEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StartupAppEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startupAppAdded(); break;
        case 1: _t->show(); break;
        case 2: _t->init(); break;
        case 3: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_btnSave_clicked(); break;
        case 5: _t->changeDesktopValue((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StartupAppEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StartupAppEdit::startupAppAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StartupAppEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_StartupAppEdit.data,
    qt_meta_data_StartupAppEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StartupAppEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartupAppEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StartupAppEdit.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int StartupAppEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void StartupAppEdit::startupAppAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
