#include "plugin.h"
#include "auimpagestatus.h"
#include "auimdialogstatus.h"
#include "auimpageorientation.h"

#include <qdeclarative.h>

void AbstractuiPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QLatin1String("org.flyingsheep.abstractui"));
    qmlRegisterUncreatableType<AUIMPageStatus>(uri, 1, 0, "AUIPageStatus", "");
    qmlRegisterUncreatableType<AUIMDialogStatus>(uri, 1, 0, "AUIDialogStatus", "");
    qmlRegisterUncreatableType<AUIMPageOrientation>(uri, 1, 0, "AUIPageOrientation", "");
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(abstractuiplugin, AbstractuiPlugin)
#endif

