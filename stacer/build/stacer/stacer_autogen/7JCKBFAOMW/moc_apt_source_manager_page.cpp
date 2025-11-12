/****************************************************************************
** Meta object code from reading C++ file 'apt_source_manager_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/Pages/AptSourceManager/apt_source_manager_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apt_source_manager_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APTSourceManagerPage_t {
    QByteArrayData data[15];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APTSourceManagerPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APTSourceManagerPage_t qt_meta_stringdata_APTSourceManagerPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "APTSourceManagerPage"
QT_MOC_LITERAL(1, 21, 14), // "loadAptSources"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "changeElementsVisible"
QT_MOC_LITERAL(4, 59, 7), // "checked"
QT_MOC_LITERAL(5, 67, 36), // "on_btnAddAPTSourceRepository_..."
QT_MOC_LITERAL(6, 104, 35), // "on_listWidgetAptSources_itemC..."
QT_MOC_LITERAL(7, 140, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 157, 4), // "item"
QT_MOC_LITERAL(9, 162, 41), // "on_listWidgetAptSources_itemD..."
QT_MOC_LITERAL(10, 204, 33), // "on_txtSearchAptSource_textCha..."
QT_MOC_LITERAL(11, 238, 3), // "val"
QT_MOC_LITERAL(12, 242, 29), // "on_btnDeleteAptSource_clicked"
QT_MOC_LITERAL(13, 272, 27), // "on_btnEditAptSource_clicked"
QT_MOC_LITERAL(14, 300, 20) // "on_btnCancel_clicked"

    },
    "APTSourceManagerPage\0loadAptSources\0"
    "\0changeElementsVisible\0checked\0"
    "on_btnAddAPTSourceRepository_clicked\0"
    "on_listWidgetAptSources_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_listWidgetAptSources_itemDoubleClicked\0"
    "on_txtSearchAptSource_textChanged\0val\0"
    "on_btnDeleteAptSource_clicked\0"
    "on_btnEditAptSource_clicked\0"
    "on_btnCancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APTSourceManagerPage[] = {

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
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       9,    1,   69,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void APTSourceManagerPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APTSourceManagerPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadAptSources(); break;
        case 1: _t->changeElementsVisible((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->on_btnAddAPTSourceRepository_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_listWidgetAptSources_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_listWidgetAptSources_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_txtSearchAptSource_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_btnDeleteAptSource_clicked(); break;
        case 7: _t->on_btnEditAptSource_clicked(); break;
        case 8: _t->on_btnCancel_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject APTSourceManagerPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_APTSourceManagerPage.data,
    qt_meta_data_APTSourceManagerPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *APTSourceManagerPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APTSourceManagerPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APTSourceManagerPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int APTSourceManagerPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
