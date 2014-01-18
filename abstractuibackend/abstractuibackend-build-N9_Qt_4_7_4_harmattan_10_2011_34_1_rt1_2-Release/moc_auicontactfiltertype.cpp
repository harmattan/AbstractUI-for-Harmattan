/****************************************************************************
** Meta object code from reading C++ file 'auicontactfiltertype.h'
**
** Created: Sun Dec 1 15:50:52 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../abstractuibackend/auicontactfiltertype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auicontactfiltertype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AUIContactFilterType[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      21, 0x0,   10,   18,

 // enum data: key, value
      39, uint(AUIContactFilterType::InvalidFilter),
      53, uint(AUIContactFilterType::ContactDetailFilter),
      73, uint(AUIContactFilterType::ContactDetailRangeFilter),
      98, uint(AUIContactFilterType::ChangeLogFilter),
     114, uint(AUIContactFilterType::ActionFilter),
     127, uint(AUIContactFilterType::RelationshipFilter),
     146, uint(AUIContactFilterType::IntersectionFilter),
     165, uint(AUIContactFilterType::UnionFilter),
     177, uint(AUIContactFilterType::IdFilter),
     186, uint(AUIContactFilterType::DefaultFilter),

       0        // eod
};

static const char qt_meta_stringdata_AUIContactFilterType[] = {
    "AUIContactFilterType\0ContactFilterType\0"
    "InvalidFilter\0ContactDetailFilter\0"
    "ContactDetailRangeFilter\0ChangeLogFilter\0"
    "ActionFilter\0RelationshipFilter\0"
    "IntersectionFilter\0UnionFilter\0IdFilter\0"
    "DefaultFilter\0"
};

const QMetaObject AUIContactFilterType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AUIContactFilterType,
      qt_meta_data_AUIContactFilterType, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AUIContactFilterType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AUIContactFilterType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AUIContactFilterType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AUIContactFilterType))
        return static_cast<void*>(const_cast< AUIContactFilterType*>(this));
    return QObject::qt_metacast(_clname);
}

int AUIContactFilterType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
