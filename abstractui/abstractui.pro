TEMPLATE = lib
TARGET = abstractui
QT += declarative
CONFIG += qt plugin

TARGET = $$qtLibraryTarget($$TARGET)
uri = org.flyingsheep.abstractui

# Input
SOURCES += \
    plugin.cpp

HEADERS += \
    auimdialogstatus.h \
    auimpagestatus.h \
    auimpageorientation.h \
    plugin.h

# DISPLAY QML FILES IN PROJECT: Work in Progress
# auiqmls is a symlink from the current directory($$PWD) to the directory containing the qmls
# The symlink was created from the current directory with:
# ln -s ../org/flyingsheep/abstractui/ auiqmls

OTHER_FILES = $$PWD/auiqmls/*.qml \
    qmldir \
    auiqmls/AUICheckBox.qml \
    auiqmls/AUILabel.qml \
    auiqmls/AUIBackgroundRectangle.qml \
    auiqmls/AUIHighlightRectangle.qml \
    auiqmls/AUIRedButtonStyle.qml \
    auiqmls/AUIGreenButtonStyle.qml \
    auiqmls/AUIWhiteButtonStyle.qml \
    auiqmls/AUIYellowButtonStyle.qml \
    auiqmls/AUIGreyButtonStyle.qml \
    auiqmls/AUITransparentButtonStyle.qml \
    auiqmls/AUISwitch.qml \
    auiqmls/AUISelectionDialog.qml \
    ../org/flyingsheep/abstractui/backend/AUICoordinate.qml \
    auiqmls/backend/AUIPositionSource.qml \
    auiqmls/AUIScrollDecorator.qml




contains(MEEGO_EDITION,harmattan) {
    target.path = /opt/abstractui/lib
    INSTALLS += target
}
