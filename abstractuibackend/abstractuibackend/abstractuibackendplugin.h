#ifndef ABSTRACTUIBACKENDPLUGIN_H
#define ABSTRACTUIBACKENDPLUGIN_H

#include <QDeclarativeExtensionPlugin>

class AbstractUIBackendPlugin : public QDeclarativeExtensionPlugin
{
    Q_OBJECT
#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")
#endif

public:
    void registerTypes(const char *uri);
};

#endif // ABSTRACTUIBACKENDPLUGIN_H
