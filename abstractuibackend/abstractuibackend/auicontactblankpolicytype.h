#ifndef AUICONTACTBLANKPOLICYTYPE_H
#define AUICONTACTBLANKPOLICYTYPE_H

#include <QObject>

class AUIContactBlankPolicyType : public QObject
{
    Q_OBJECT
    Q_ENUMS(ContactBlankPolicyType)
public:

    enum ContactBlankPolicyType {
        BlanksFirst,
        BlanksLast
    };
};


#endif // AUICONTACTBLANKPOLICYTYPE_H
