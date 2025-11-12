/****************************************************************************
** Meta object code from reading C++ file 'search_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/Pages/Search/search_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'search_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchPage_t {
    QByteArrayData data[22];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchPage_t qt_meta_stringdata_SearchPage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SearchPage"
QT_MOC_LITERAL(1, 11, 4), // "init"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 29), // "on_btnBrowseSearchDir_clicked"
QT_MOC_LITERAL(4, 47, 31), // "on_btnAdvancePaneToggle_clicked"
QT_MOC_LITERAL(5, 79, 27), // "on_btnSearchAdvance_clicked"
QT_MOC_LITERAL(6, 107, 18), // "initComboboxValues"
QT_MOC_LITERAL(7, 126, 47), // "on_tableFoundResults_customCo..."
QT_MOC_LITERAL(8, 174, 3), // "pos"
QT_MOC_LITERAL(9, 178, 51), // "tableFoundResults_header_cust..."
QT_MOC_LITERAL(10, 230, 16), // "loadTableRowMenu"
QT_MOC_LITERAL(11, 247, 14), // "loadHeaderMenu"
QT_MOC_LITERAL(12, 262, 15), // "loadDataToTable"
QT_MOC_LITERAL(13, 278, 14), // "QList<QString>"
QT_MOC_LITERAL(14, 293, 7), // "results"
QT_MOC_LITERAL(15, 301, 9), // "searching"
QT_MOC_LITERAL(16, 311, 9), // "createRow"
QT_MOC_LITERAL(17, 321, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(18, 343, 8), // "filepath"
QT_MOC_LITERAL(19, 352, 34), // "on_tableFoundResults_doubleCl..."
QT_MOC_LITERAL(20, 387, 11), // "QModelIndex"
QT_MOC_LITERAL(21, 399, 5) // "index"

    },
    "SearchPage\0init\0\0on_btnBrowseSearchDir_clicked\0"
    "on_btnAdvancePaneToggle_clicked\0"
    "on_btnSearchAdvance_clicked\0"
    "initComboboxValues\0"
    "on_tableFoundResults_customContextMenuRequested\0"
    "pos\0tableFoundResults_header_customContextMenuRequested\0"
    "loadTableRowMenu\0loadHeaderMenu\0"
    "loadDataToTable\0QList<QString>\0results\0"
    "searching\0createRow\0QList<QStandardItem*>\0"
    "filepath\0on_tableFoundResults_doubleClicked\0"
    "QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
       9,    1,   87,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      11,    0,   91,    2, 0x08 /* Private */,
      12,    1,   92,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,
      16,    1,   96,    2, 0x08 /* Private */,
      19,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    0x80000000 | 17, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void SearchPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->on_btnBrowseSearchDir_clicked(); break;
        case 2: _t->on_btnAdvancePaneToggle_clicked(); break;
        case 3: _t->on_btnSearchAdvance_clicked(); break;
        case 4: _t->initComboboxValues(); break;
        case 5: _t->on_tableFoundResults_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->tableFoundResults_header_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->loadTableRowMenu(); break;
        case 8: _t->loadHeaderMenu(); break;
        case 9: _t->loadDataToTable((*reinterpret_cast< const QList<QString>(*)>(_a[1]))); break;
        case 10: _t->searching(); break;
        case 11: { QList<QStandardItem*> _r = _t->createRow((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->on_tableFoundResults_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SearchPage.data,
    qt_meta_data_SearchPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SearchPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
