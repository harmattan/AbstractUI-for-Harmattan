import QtQuick 1.1
import com.nokia.meego 1.0

Page {
    property int hasMenu: 0
    property color backgroundColor: "lightgrey"
    AUIBackgroundRectangle {
        anchors.fill: parent
        color: parent.backgroundColor
    }
}
