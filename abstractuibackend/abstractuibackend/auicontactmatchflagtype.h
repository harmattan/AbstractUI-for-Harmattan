#ifndef AUICONTACTMATCHFLAGTYPE_H
#define AUICONTACTMATCHFLAGTYPE_H

#include <QObject>

class AUIContactMatchFlagType : public QObject
{
    Q_OBJECT
    Q_ENUMS(ContactMatchFlagType)
public:

    enum ContactMatchFlagType {
        MatchExactly = 0x0000,        // 0
        MatchContains = 0x0001,       // 1
        MatchStartsWith = 0x0002,     // 2
        MatchEndsWith = 0x0004,       // 4
        MatchFixedString = 0x0008,      // 8
        MatchCaseSensitive = 0x0010,    // 16
        MatchPhoneNumber = 0x400,    //1024
        MatchKeypadCollation = 0x800 //2048
    };

};



#endif // AUICONTACTMATCHFLAGTYPE_H
