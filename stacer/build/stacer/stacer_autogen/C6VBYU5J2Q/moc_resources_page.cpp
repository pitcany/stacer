/****************************************************************************
** Meta object code from reading C++ file 'resources_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/Pages/Resources/resources_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resources_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ResourcesPage_t {
    QByteArrayData data[9];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResourcesPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResourcesPage_t qt_meta_stringdata_ResourcesPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ResourcesPage"
QT_MOC_LITERAL(1, 14, 14), // "updateCpuChart"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "updateCpuLoadAvg"
QT_MOC_LITERAL(4, 47, 19), // "updateDiskReadWrite"
QT_MOC_LITERAL(5, 67, 17), // "updateMemoryChart"
QT_MOC_LITERAL(6, 85, 18), // "updateNetworkChart"
QT_MOC_LITERAL(7, 104, 16), // "initDiskPieChart"
QT_MOC_LITERAL(8, 121, 22) // "diskPieSeriesCustomize"

    },
    "ResourcesPage\0updateCpuChart\0\0"
    "updateCpuLoadAvg\0updateDiskReadWrite\0"
    "updateMemoryChart\0updateNetworkChart\0"
    "initDiskPieChart\0diskPieSeriesCustomize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResourcesPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ResourcesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResourcesPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateCpuChart(); break;
        case 1: _t->updateCpuLoadAvg(); break;
        case 2: _t->updateDiskReadWrite(); break;
        case 3: _t->updateMemoryChart(); break;
        case 4: _t->updateNetworkChart(); break;
        case 5: _t->initDiskPieChart(); break;
        case 6: _t->diskPieSeriesCustomize(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ResourcesPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ResourcesPage.data,
    qt_meta_data_ResourcesPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ResourcesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourcesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ResourcesPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ResourcesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
