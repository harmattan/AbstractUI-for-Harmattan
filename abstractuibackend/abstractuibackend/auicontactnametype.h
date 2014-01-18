#ifndef AUICONTACTNAMETYPE_H
#define AUICONTACTNAMETYPE_H


#include <QObject>

class AUIContactNameType : public QObject
{
    Q_OBJECT
    Q_ENUMS(FieldType)
public:
    enum FieldType {
        Prefix = 0,
        FirstName,
        MiddleName,
        LastName,
        Suffix,
        CustomLabel
    };
};


#endif // AUICONTACTNAMETYPE_H
