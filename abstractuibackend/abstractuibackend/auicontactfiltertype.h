#ifndef AUICONTACTFILTERTYPE_H
#define AUICONTACTFILTERTYPE_H

#include <QObject>

class AUIContactFilterType : public QObject
{
    Q_OBJECT
    Q_ENUMS(ContactFilterType)
public:

    enum ContactFilterType {
            InvalidFilter,
            ContactDetailFilter,
            ContactDetailRangeFilter,
            ChangeLogFilter,
            ActionFilter,
            RelationshipFilter,
            IntersectionFilter,
            UnionFilter,
            IdFilter,
            DefaultFilter
        };
};


#endif // AUICONTACTFILTERTYPE_H
