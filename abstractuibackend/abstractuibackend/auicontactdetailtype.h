#ifndef AUICONTACTDETAILTYPE_H
#define AUICONTACTDETAILTYPE_H

#include <QObject>

class AUIContactDetailType : public QObject
{
    Q_OBJECT
    Q_ENUMS(ContactDetailType)
public:
    enum ContactDetailType {
            Address = 0,
            Anniversary,
            Avatar,
            Birthday,
            DisplayLabel,
            Email,
            Family,
            Favorite,
            Gender,
            Geolocation,
            GlobalPresence,
            Guid,
            Name,
            NickName,
            Note,
            OnlineAccount,
            Organization,
            PhoneNumber,
            Presence,
            Ringtone,
            SyncTarget,
            Tag,
            Timestamp,
            Url,
            Hobby,
            Customized = 100
        };

};

#endif // AUICONTACTDETAILTYPE_H
