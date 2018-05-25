/****************************************************************************
** Meta object code from reading C++ file 'qgraphpainter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/qgraphpainter.h"

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphpainter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGraphPainter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      23,   14,   14,   14, 0x0a,
      45,   42,   14,   14, 0x0a,
      80,   78,   14,   14, 0x0a,
     102,   14,   14,   14, 0x0a,
     130,  122,   14,   14, 0x0a,
     161,  154,   14,   14, 0x0a,
     178,  172,   14,   14, 0x0a,
     202,  200,   14,   14, 0x0a,
     226,   14,  221,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGraphPainter[] = {
    "QGraphPainter\0\0clear()\0valueAdded(double)\0"
    ",,\0valueAdded(double,double,double)\0"
    "y\0setYReference(double)\0disableYReference()\0"
    "min,max\0setRange(double,double)\0period\0"
    "start(int)\0title\0setTitle(const char*)\0"
    "a\0setAutoscale(bool)\0bool\0getAutoscale()\0"
};

void QGraphPainter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphPainter *_t = static_cast<QGraphPainter *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->valueAdded((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->valueAdded((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->setYReference((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->disableYReference(); break;
        case 5: _t->setRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->start((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setTitle((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 8: _t->setAutoscale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { bool _r = _t->getAutoscale();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphPainter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphPainter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGraphPainter,
      qt_meta_data_QGraphPainter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphPainter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphPainter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphPainter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphPainter))
        return static_cast<void*>(const_cast< QGraphPainter*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGraphPainter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
