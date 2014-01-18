/****************************************************************************
** Meta object code from reading C++ file 'auicontactdetailtype.h'
**
** Created: Sun Dec 1 15:50:50 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../abstractuibackend/auicontactdetailtype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auicontactdetailtype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AUIContactDetailType[] = {

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
      21, 0x0,   26,   18,

 // enum data: key, value
      39, uint(AUIContactDetailType::Address),
      47, uint(AUIContactDetailType::Anniversary),
      59, uint(AUIContactDetailType::Avatar),
      66, uint(AUIContactDetailType::Birthday),
      75, uint(AUIContactDetailType::DisplayLabel),
      88, uint(AUIContactDetailType::Email),
      94, uint(AUIContactDetailType::Family),
     101, uint(AUIContactDetailType::Favorite),
     110, uint(AUIContactDetailType::Gender),
     117, uint(AUIContactDetailType::Geolocation),
     129, uint(AUIContactDetailType::GlobalPresence),
     144, uint(AUIContactDetailType::Guid),
     149, uint(AUIContactDetailType::Name),
     154, uint(AUIContactDetailType::NickName),
     163, uint(AUIContactDetailType::Note),
     168, uint(AUIContactDetailType::OnlineAccount),
     182, uint(AUIContactDetailType::Organization),
     195, uint(AUIContactDetailType::PhoneNumber),
     207, uint(AUIContactDetailType::Presence),
     216, uint(AUIContactDetailType::Ringtone),
     225, uint(AUIContactDetailType::SyncTarget),
     236, uint(AUIContactDetailType::Tag),
     240, uint(AUIContactDetailType::Timestamp),
     250, uint(AUIContactDetailType::Url),
     254, uint(AUIContactDetailType::Hobby),
     260, uint(AUIContactDetailType::Customized),

       0        // eod
};

static const char qt_meta_stringdata_AUIContactDetailType[] = {
    "AUIContactDetailType\0ContactDetailType\0"
    "Address\0Anniversary\0Avatar\0Birthday\0"
    "DisplayLabel\0Email\0Family\0Favorite\0"
    "Gender\0Geolocation\0GlobalPresence\0"
    "Guid\0Name\0NickName\0Note\0OnlineAccount\0"
    "Organization\0PhoneNumber\0Presence\0"
    "Ringtone\0SyncTarget\0Tag\0Timestamp\0Url\0"
    "Hobby\0Customized\0"
};

const QMetaObject AUIContactDetailType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AUIContactDetailType,
      qt_meta_data_AUIContactDetailType, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AUIContactDetailType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AUIContactDetailType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AUIContactDetailType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AUIContactDetailType))
        return static_cast<void*>(const_cast< AUIContactDetailType*>(this));
    return QObject::qt_metacast(_clname);
}

int AUIContactDetailType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
