/****************************************************************************
** Meta object code from reading C++ file 'auicontactblankpolicytype.h'
**
** Created: Sun Dec 1 16:05:30 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../abstractuibackend/auicontactblankpolicytype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auicontactblankpolicytype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AUIContactBlankPolicyType[] = {

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
      26, 0x0,    2,   18,

 // enum data: key, value
      49, uint(AUIContactBlankPolicyType::BlanksFirst),
      61, uint(AUIContactBlankPolicyType::BlanksLast),

       0        // eod
};

static const char qt_meta_stringdata_AUIContactBlankPolicyType[] = {
    "AUIContactBlankPolicyType\0"
    "ContactBlankPolicyType\0BlanksFirst\0"
    "BlanksLast\0"
};

const QMetaObject AUIContactBlankPolicyType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AUIContactBlankPolicyType,
      qt_meta_data_AUIContactBlankPolicyType, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AUIContactBlankPolicyType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AUIContactBlankPolicyType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AUIContactBlankPolicyType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AUIContactBlankPolicyType))
        return static_cast<void*>(const_cast< AUIContactBlankPolicyType*>(this));
    return QObject::qt_metacast(_clname);
}

int AUIContactBlankPolicyType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
