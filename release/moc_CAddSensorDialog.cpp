/****************************************************************************
** Meta object code from reading C++ file 'CAddSensorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CAddSensorDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CAddSensorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CAddSensorDialog_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CAddSensorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CAddSensorDialog_t qt_meta_stringdata_CAddSensorDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CAddSensorDialog"
QT_MOC_LITERAL(1, 17, 13), // "sig_addSensor"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "CTableData&"
QT_MOC_LITERAL(4, 44, 10), // "sensorData"
QT_MOC_LITERAL(5, 55, 16), // "sig_updateSensor"
QT_MOC_LITERAL(6, 72, 20), // "on_yesButton_clicked"
QT_MOC_LITERAL(7, 93, 19) // "on_noButton_clicked"

    },
    "CAddSensorDialog\0sig_addSensor\0\0"
    "CTableData&\0sensorData\0sig_updateSensor\0"
    "on_yesButton_clicked\0on_noButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CAddSensorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CAddSensorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CAddSensorDialog *_t = static_cast<CAddSensorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_addSensor((*reinterpret_cast< CTableData(*)>(_a[1]))); break;
        case 1: _t->sig_updateSensor((*reinterpret_cast< CTableData(*)>(_a[1]))); break;
        case 2: _t->on_yesButton_clicked(); break;
        case 3: _t->on_noButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CAddSensorDialog::*_t)(CTableData & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CAddSensorDialog::sig_addSensor)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CAddSensorDialog::*_t)(CTableData & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CAddSensorDialog::sig_updateSensor)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CAddSensorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CAddSensorDialog.data,
      qt_meta_data_CAddSensorDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CAddSensorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CAddSensorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CAddSensorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CAddSensorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CAddSensorDialog::sig_addSensor(CTableData & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CAddSensorDialog::sig_updateSensor(CTableData & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
