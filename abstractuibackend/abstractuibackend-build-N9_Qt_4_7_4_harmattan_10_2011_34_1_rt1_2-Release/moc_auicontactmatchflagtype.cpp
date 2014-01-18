/****************************************************************************
** Meta object code from reading C++ file 'auicontactmatchflagtype.h'
**
** Created: Sun Dec 1 15:50:52 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../abstractuibackend/auicontactmatchflagtype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auicontactmatchflagtype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AUIContactMatchFlagType[] = {

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
      24, 0x0,    8,   18,

 // enum data: key, value
      45, uint(AUIContactMatchFlagType::MatchExactly),
      58, uint(AUIContactMatchFlagType::MatchContains),
      72, uint(AUIContactMatchFlagType::MatchStartsWith),
      88, uint(AUIContactMatchFlagType::MatchEndsWith),
     102, uint(AUIContactMatchFlagType::MatchFixedString),
     119, uint(AUIContactMatchFlagType::MatchCaseSensitive),
     138, uint(AUIContactMatchFlagType::MatchPhoneNumber),
     155, uint(AUIContactMatchFlagType::MatchKeypadCollation),

       0        // eod
};

static const char qt_meta_stringdata_AUIContactMatchFlagType[] = {
    "AUIContactMatchFlagType\0ContactMatchFlagType\0"
    "MatchExactly\0MatchContains\0MatchStartsWith\0"
    "MatchEndsWith\0MatchFixedString\0"
    "MatchCaseSensitive\0MatchPhoneNumber\0"
    "MatchKeypadCollation\0"
};

const QMetaObject AUIContactMatchFlagType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AUIContactMatchFlagType,
      qt_meta_data_AUIContactMatchFlagType, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AUIContactMatchFlagType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AUIContactMatchFlagType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AUIContactMatchFlagType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AUIContactMatchFlagType))
        return static_cast<void*>(const_cast< AUIContactMatchFlagType*>(this));
    return QObject::qt_metacast(_clname);
}

int AUIContactMatchFlagType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
