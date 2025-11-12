/****************************************************************************
** Meta object code from reading C++ file 'host_manage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/Pages/Helpers/host_manage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'host_manage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HostManage_t {
    QByteArrayData data[16];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HostManage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HostManage_t qt_meta_stringdata_HostManage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HostManage"
QT_MOC_LITERAL(1, 11, 4), // "init"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 21), // "on_btnNewHost_clicked"
QT_MOC_LITERAL(4, 39, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(5, 58, 13), // "loadHostItems"
QT_MOC_LITERAL(6, 72, 13), // "loadTableData"
QT_MOC_LITERAL(7, 86, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(8, 107, 16), // "loadTableRowMenu"
QT_MOC_LITERAL(9, 124, 25), // "on_btnSaveChanges_clicked"
QT_MOC_LITERAL(10, 150, 9), // "createRow"
QT_MOC_LITERAL(11, 160, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(12, 182, 19), // "QPair<int,HostItem>"
QT_MOC_LITERAL(13, 202, 4), // "item"
QT_MOC_LITERAL(14, 207, 44), // "on_tableViewHosts_customConte..."
QT_MOC_LITERAL(15, 252, 3) // "pos"

    },
    "HostManage\0init\0\0on_btnNewHost_clicked\0"
    "on_btnSave_clicked\0loadHostItems\0"
    "loadTableData\0on_btnCancel_clicked\0"
    "loadTableRowMenu\0on_btnSaveChanges_clicked\0"
    "createRow\0QList<QStandardItem*>\0"
    "QPair<int,HostItem>\0item\0"
    "on_tableViewHosts_customContextMenuRequested\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HostManage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      14,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 11, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QPoint,   15,

       0        // eod
};

void HostManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HostManage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->on_btnNewHost_clicked(); break;
        case 2: _t->on_btnSave_clicked(); break;
        case 3: _t->loadHostItems(); break;
        case 4: _t->loadTableData(); break;
        case 5: _t->on_btnCancel_clicked(); break;
        case 6: _t->loadTableRowMenu(); break;
        case 7: _t->on_btnSaveChanges_clicked(); break;
        case 8: { QList<QStandardItem*> _r = _t->createRow((*reinterpret_cast< const QPair<int,HostItem>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->on_tableViewHosts_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HostManage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HostManage.data,
    qt_meta_data_HostManage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HostManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HostManage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HostManage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HostManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
