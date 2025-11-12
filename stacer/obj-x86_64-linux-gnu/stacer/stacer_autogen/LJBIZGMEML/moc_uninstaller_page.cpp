/****************************************************************************
** Meta object code from reading C++ file 'uninstaller_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../stacer/Pages/Uninstaller/uninstaller_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uninstaller_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UninstallerPage_t {
    QByteArrayData data[17];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UninstallerPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UninstallerPage_t qt_meta_stringdata_UninstallerPage = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UninstallerPage"
QT_MOC_LITERAL(1, 16, 16), // "uninstallStarted"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "setAppCount"
QT_MOC_LITERAL(4, 46, 31), // "on_txtPackageSearch_textChanged"
QT_MOC_LITERAL(5, 78, 3), // "val"
QT_MOC_LITERAL(6, 82, 23), // "on_btnUninstall_clicked"
QT_MOC_LITERAL(7, 106, 19), // "getSelectedPackages"
QT_MOC_LITERAL(8, 126, 23), // "getSelectedSnapPackages"
QT_MOC_LITERAL(9, 150, 12), // "loadPackages"
QT_MOC_LITERAL(10, 163, 16), // "loadSnapPackages"
QT_MOC_LITERAL(11, 180, 28), // "on_btnSystemPackages_clicked"
QT_MOC_LITERAL(12, 209, 26), // "on_btnSnapPackages_clicked"
QT_MOC_LITERAL(13, 236, 37), // "on_listWidgetSnapPackages_ite..."
QT_MOC_LITERAL(14, 274, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(15, 291, 4), // "item"
QT_MOC_LITERAL(16, 296, 33) // "on_listWidgetPackages_itemCli..."

    },
    "UninstallerPage\0uninstallStarted\0\0"
    "setAppCount\0on_txtPackageSearch_textChanged\0"
    "val\0on_btnUninstall_clicked\0"
    "getSelectedPackages\0getSelectedSnapPackages\0"
    "loadPackages\0loadSnapPackages\0"
    "on_btnSystemPackages_clicked\0"
    "on_btnSnapPackages_clicked\0"
    "on_listWidgetSnapPackages_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_listWidgetPackages_itemClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UninstallerPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      16,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void UninstallerPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UninstallerPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->uninstallStarted(); break;
        case 1: _t->setAppCount(); break;
        case 2: _t->on_txtPackageSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_btnUninstall_clicked(); break;
        case 4: { QStringList _r = _t->getSelectedPackages();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 5: { QStringList _r = _t->getSelectedSnapPackages();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->loadPackages(); break;
        case 7: _t->loadSnapPackages(); break;
        case 8: _t->on_btnSystemPackages_clicked(); break;
        case 9: _t->on_btnSnapPackages_clicked(); break;
        case 10: _t->on_listWidgetSnapPackages_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->on_listWidgetPackages_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UninstallerPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_UninstallerPage.data,
    qt_meta_data_UninstallerPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UninstallerPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UninstallerPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UninstallerPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UninstallerPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
