/****************************************************************************
** Meta object code from reading C++ file 'qparticleviewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/
#include "gui/qparticleviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qparticleviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GMapping__QParticleViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      50,   47,   26,   26, 0x05,
      91,   47,   26,   26, 0x05,
     138,   26,   26,   26, 0x05,
     165,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     193,  190,   26,   26, 0x0a,
     235,  190,   26,   26, 0x0a,
     271,   26,   26,   26, 0x0a,
     279,   26,   26,   26, 0x0a,
     286,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GMapping__QParticleViewer[] = {
    "GMapping::QParticleViewer\0\0"
    "neffChanged(double)\0,,\0"
    "poseEntropyChanged(double,double,double)\0"
    "trajectoryEntropyChanged(double,double,double)\0"
    "mapsEntropyChanged(double)\0"
    "mapsIGainChanged(double)\0mp\0"
    "setMatchingParameters(MatchingParameters)\0"
    "setStartParameters(StartParameters)\0"
    "start()\0stop()\0loadFile(const char*)\0"
};

void GMapping::QParticleViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QParticleViewer *_t = static_cast<QParticleViewer *>(_o);
        switch (_id) {
        case 0: _t->neffChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->poseEntropyChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->trajectoryEntropyChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->mapsEntropyChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->mapsIGainChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setMatchingParameters((*reinterpret_cast< const MatchingParameters(*)>(_a[1]))); break;
        case 6: _t->setStartParameters((*reinterpret_cast< const StartParameters(*)>(_a[1]))); break;
        case 7: _t->start(); break;
        case 8: _t->stop(); break;
        case 9: _t->loadFile((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GMapping::QParticleViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GMapping::QParticleViewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GMapping__QParticleViewer,
      qt_meta_data_GMapping__QParticleViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GMapping::QParticleViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GMapping::QParticleViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GMapping::QParticleViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GMapping__QParticleViewer))
        return static_cast<void*>(const_cast< QParticleViewer*>(this));
    return QWidget::qt_metacast(_clname);
}

int GMapping::QParticleViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void GMapping::QParticleViewer::neffChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GMapping::QParticleViewer::poseEntropyChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GMapping::QParticleViewer::trajectoryEntropyChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GMapping::QParticleViewer::mapsEntropyChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GMapping::QParticleViewer::mapsIGainChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
