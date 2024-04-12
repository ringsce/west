import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Qt6 Android Window Example"

    Rectangle {
        width: 200
        height: 100
        color: "lightblue"
        anchors.centerIn: parent

        Text {
            text: "Hello, Android!"
            anchors.centerIn: parent
        }
    }
}
