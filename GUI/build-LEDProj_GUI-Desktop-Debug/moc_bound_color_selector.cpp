/****************************************************************************
** Meta object code from reading C++ file 'bound_color_selector.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LEDProj_GUI/Qt-Color-Widgets-master/include/QtColorWidgets/bound_color_selector.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bound_color_selector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_color_widgets__BoundColorSelector_t {
    QByteArrayData data[3];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_color_widgets__BoundColorSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_color_widgets__BoundColorSelector_t qt_meta_stringdata_color_widgets__BoundColorSelector = {
    {
QT_MOC_LITERAL(0, 0, 33), // "color_widgets::BoundColorSele..."
QT_MOC_LITERAL(1, 34, 16), // "update_reference"
QT_MOC_LITERAL(2, 51, 0) // ""

    },
    "color_widgets::BoundColorSelector\0"
    "update_reference\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_color_widgets__BoundColorSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    2,

       0        // eod
};

void color_widgets::BoundColorSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoundColorSelector *_t = static_cast<BoundColorSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_reference((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject color_widgets::BoundColorSelector::staticMetaObject = {
    { &ColorSelector::staticMetaObject, qt_meta_stringdata_color_widgets__BoundColorSelector.data,
      qt_meta_data_color_widgets__BoundColorSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *color_widgets::BoundColorSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *color_widgets::BoundColorSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_color_widgets__BoundColorSelector.stringdata0))
        return static_cast<void*>(const_cast< BoundColorSelector*>(this));
    return ColorSelector::qt_metacast(_clname);
}

int color_widgets::BoundColorSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorSelector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
