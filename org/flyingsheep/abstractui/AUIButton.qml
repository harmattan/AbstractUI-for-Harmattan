import QtQuick 1.1
import com.nokia.meego 1.0

Button {
    id: thisButton;
    property color primaryColor: "black"

    onPrimaryColorChanged: {
        console.log ("AUIButton.onPrimaryColorChanged: " + primaryColor)
        if (primaryColor == "#ff0000") {
            //"red"
            thisButton.platformStyle = redButton;
        }
        else if (primaryColor == "#ffffff") {
            //"white"
            thisButton.platformStyle = whiteButton;
        }
        else if (primaryColor == "#ffff00") {
            //"yellow"
            thisButton.platformStyle = yellowButton;
        }
        else if (primaryColor == "#008000") {
            //"green"
            thisButton.platformStyle = greenButton;
        }
        else if (primaryColor == "#808080") {
            //"grey"
            thisButton.platformStyle = greyButton;
        }

    }
//TODO: Is it better to have one style, and a case statement setting properties for each possible colour
    //or have one style per color (as below)?

//TODO: In Sailfish Equivalent, don't use style, just set color of label text to primaryColor.
    AUIRedButtonStyle {
        id: redButton
    }
    AUIGreenButtonStyle {
        id: greenButton
    }
    AUIGreyButtonStyle {
        id: greyButton
    }
    AUIWhiteButtonStyle {
        id: whiteButton
    }
    AUIYellowButtonStyle {
        id: yellowButton
    }
}
