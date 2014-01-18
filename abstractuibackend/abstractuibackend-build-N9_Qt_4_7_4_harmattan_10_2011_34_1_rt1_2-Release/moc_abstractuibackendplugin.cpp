/****************************************************************************
** Meta object code from reading C++ file 'abstractuibackendplugin.h'
**
** Created: Sun Dec 1 15:50:51 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../abstractuibackend/abstractuibackendplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractuibackendplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractUIBackendPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_AbstractUIBackendPlugin[] = {
    "AbstractUIBackendPlugin\0"
};

const QMetaObject AbstractUIBackendPlugin::staticMetaObject = {
    { &QDeclarativeExtensionPlugin::staticMetaObject, qt_meta_stringdata_AbstractUIBackendPlugin,
      qt_meta_data_AbstractUIBackendPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractUIBackendPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractUIBackendPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractUIBackendPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractUIBackendPlugin))
        return static_cast<void*>(const_cast< AbstractUIBackendPlugin*>(this));
    return QDeclarativeExtensionPlugin::qt_metacast(_clname);
}

int AbstractUIBackendPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeExtensionPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
