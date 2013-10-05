import QtQuick 1.1
import com.nokia.meego 1.0

Button {
    id: thisButton;
    property color primaryColor: "black"
    property bool transparent: false
    //platformStyle: (transparent) ? greenButton : transparentButton
    onTransparentChanged: {
        console.log ("AUIButton: onTransparentChanged: " + transparent);
        platformStyle = (transparent) ? transparentButton : greenButton;
    }

    onPrimaryColorChanged: {
        if (!transparent) {
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
            //The true code for transparent does not seem to work
            //else if (primaryColor == "#00000000") {
            else if (primaryColor == "#000000") {
                //"transparent"
                console.log ("setting transparent color")
                thisButton.platformStyle = transparentButton;
            }
        }
        else {
            console.log ("transparent is true, primaryColor will not be changed")
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
    AUITransparentButtonStyle {
        id: transparentButton
    }
}
