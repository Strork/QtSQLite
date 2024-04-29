/****************************************************************************
** Meta object code from reading C++ file 'factorymanage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../factorymanage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'factorymanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_factoryManage_t {
    QByteArrayData data[19];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_factoryManage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_factoryManage_t qt_meta_stringdata_factoryManage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "factoryManage"
QT_MOC_LITERAL(1, 14, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "slot_addSensorData"
QT_MOC_LITERAL(4, 55, 11), // "CTableData&"
QT_MOC_LITERAL(5, 67, 10), // "sensorData"
QT_MOC_LITERAL(6, 78, 21), // "slot_updateSensorData"
QT_MOC_LITERAL(7, 100, 16), // "slot_itemChanged"
QT_MOC_LITERAL(8, 117, 14), // "QStandardItem*"
QT_MOC_LITERAL(9, 132, 4), // "item"
QT_MOC_LITERAL(10, 137, 14), // "slot_rightMenu"
QT_MOC_LITERAL(11, 152, 3), // "pos"
QT_MOC_LITERAL(12, 156, 14), // "slot_actUpdate"
QT_MOC_LITERAL(13, 171, 14), // "slot_actDelete"
QT_MOC_LITERAL(14, 186, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(15, 206, 7), // "checked"
QT_MOC_LITERAL(16, 214, 20), // "on_delButton_clicked"
QT_MOC_LITERAL(17, 235, 20), // "on_udtButton_clicked"
QT_MOC_LITERAL(18, 256, 21) // "on_pushButton_clicked"

    },
    "factoryManage\0on_addButton_clicked\0\0"
    "slot_addSensorData\0CTableData&\0"
    "sensorData\0slot_updateSensorData\0"
    "slot_itemChanged\0QStandardItem*\0item\0"
    "slot_rightMenu\0pos\0slot_actUpdate\0"
    "slot_actDelete\0on_checkBox_clicked\0"
    "checked\0on_delButton_clicked\0"
    "on_udtButton_clicked\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_factoryManage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       7,    1,   76,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,
      17,    0,   88,    2, 0x08 /* Private */,
      18,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, QMetaType::QPoint,   11,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void factoryManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        factoryManage *_t = static_cast<factoryManage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addButton_clicked(); break;
        case 1: { bool _r = _t->slot_addSensorData((*reinterpret_cast< CTableData(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->slot_updateSensorData((*reinterpret_cast< CTableData(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->slot_itemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->slot_rightMenu((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->slot_actUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->slot_actDelete();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_delButton_clicked(); break;
        case 9: _t->on_udtButton_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject factoryManage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_factoryManage.data,
      qt_meta_data_factoryManage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *factoryManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *factoryManage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_factoryManage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int factoryManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
