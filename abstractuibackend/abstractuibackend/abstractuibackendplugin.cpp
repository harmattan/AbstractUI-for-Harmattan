#include "abstractuibackendplugin.h"
#include "auicontactdetailtype.h"
#include "auicontactnametype.h"
#include "auicontactfiltertype.h"
#include "auicontactmatchflagtype.h"
#include "auicontactblankpolicytype.h"

#include <qdeclarative.h>

void AbstractUIBackendPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QLatin1String("org.flyingsheep.abstractui.backend"));
    qmlRegisterUncreatableType<AUIContactDetailType>(uri, 1, 0, "AUIContactDetailType", "");
    qmlRegisterUncreatableType<AUIContactNameType>(uri, 1, 0, "AUIContactNameType", "");
    qmlRegisterUncreatableType<AUIContactFilterType>(uri, 1, 0, "AUIContactFilterType", "");
    qmlRegisterUncreatableType<AUIContactMatchFlagType>(uri, 1, 0, "AUIContactMatchFlagType", "");
    qmlRegisterUncreatableType<AUIContactBlankPolicyType>(uri, 1, 0, "AUIContactBlankPolicyType", "");
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(abstractuibackendplugin, AbstractUIBackendPlugin)
#endif
