import QtQuick 1.1
import com.nokia.meego 1.0
//import Sailfish.Silica 1.0

Page {
    id: thisPage
    property int orientationLock: PageOrientation.Automatic

    property color backgroundColor: "white"
    AUIBackgroundRectangle {
        anchors.fill: parent
        color: parent.backgroundColor
        z: -9999
    }

    property alias menuitems: menuModel.children

    //MENU HANDLING
    //Basic idea for abstracted menu handling inspired by THP
    //@ http://thpmaemo.blogspot.ch/2013/03/porting-harmattan-apps-to-sailfish.html
    //With the following differences:
    //1) simplified and condensed
    //2) we also provide the ListView as a child of the Page, rather than expecting it to be passed from
    //the declaration of the AUIPage component

    //As this means every page would have a menu, even if not used or displayed
    //I have created two components
    //a) AUIPageWithMenu, which has this handling
    //b) AUIPage, which has no menu
    //The two are otherwise identical

    tools: ToolBarLayout {
        ToolIcon {
            visible: pageStack !== null && pageStack.depth > 1
            anchors.left: parent.left
            iconId: "icon-m-toolbar-back-white"
            onClicked: thisPage.close();
        }

        ToolIcon {
            visible: thisPage.hasMenu
            anchors.right: (parent === undefined) ? undefined : parent.right
            onClicked: (thisMenu.status === DialogStatus.Closed) ? thisMenu.open() : thisMenu.close()
            iconId: "toolbar-view-menu"
        }
    }

    ListView { id: menuListView
        anchors.fill: parent
        Item { id: menuModel }

        //Harmattan has Menu, Silica has PullDownMenu
        Menu {
            id: thisMenu
            //Harmattan has MenuLayout here as child of Menu, parent of Repeater, Silica does not.
            MenuLayout {
                id: thisMenuLayout
                Repeater {
                    model: menuModel.children
                    MenuItem {
                        text: modelData.text
                        onClicked: modelData.clicked()
                    }
                }
            }
        }
    }

    property int hasMenu: (menuitems.length > 0) ? 1 : 0
    //TODO Add a C++ enum for these values
    //0: no menu
    //1: Harmattan style toolbar pullup Menu
    //2: Sailfish PullDownMenu
    //3: Sailfish PushUpMenu

}

