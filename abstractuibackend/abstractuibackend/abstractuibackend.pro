TEMPLATE = lib
TARGET = abstractuibackend
QT += declarative
CONFIG += qt plugin

TARGET = $$qtLibraryTarget($$TARGET)
uri = org.flyingsheep.abstractui.backend

# Input
SOURCES += \
    abstractuibackendplugin.cpp

HEADERS += \
    auicontactdetailtype.h \
    auicontactnametype.h \
    abstractuibackendplugin.h \
    auicontactfiltertype.h \
    auicontactmatchflagtype.h \
    auicontactblankpolicytype.h


# DISPLAY QML FILES IN PROJECT: Work in Progress
# auiqmls is a symlink from the current directory($$PWD) to the directory containing the qmls
# The directory and symlink was created from the current directory with:
# mkdir ../../org/flyingsheep/abstractui/backend
# ln -s ../../org/flyingsheep/abstractui/backend auibackendqmls

OTHER_FILES = $$PWD/auibackendqmls/*.qml \
    $$PWD/auibackendqmls/qmldir \
    auibackendqmls/AUICompass.qml \
    auibackendqmls/AUIHapticsEffect.qml \
    auibackendqmls/AUIContactSortOrder.qml \
    auibackendqmls/AUIContactModel.qml \
    auibackendqmls/AUIContactDetail.qml \
    auibackendqmls/AUIContact.qml \
    auibackendqmls/AUISoundEffect.qml \
    auibackendqmls/AUIUnionFilter.qml \
    auibackendqmls/AUIDetailFilter.qml \
    auibackendqmls/Name.qml \
    auibackendqmls/DisplayLabel.qml



contains(MEEGO_EDITION,harmattan) {
    target.path = /opt/abstractuibackend/lib
    INSTALLS += target
}
