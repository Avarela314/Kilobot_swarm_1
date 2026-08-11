TEMPLATE = app
TARGET = kilogui

QT+= widgets

INCLUDEPATH += C:/msys64/mingw64/include
INCLUDEPATH += C:/msys64/mingw64/include/libusb-compat

INCLUDEPATH += C:/opencv-build/install/include
LIBS += -LC:/opencv-build/lib \
        -lopencv_core4150 \
        -lopencv_imgproc4150 \
        -lopencv_videoio4150 \
        -lopencv_highgui4150

LIBS += -LC:/msys64/mingw64/lib
LIBS += -lftdi1 -lusb

RESOURCES = kilogui.qrc
RC_FILE = kilogui.rc
mac:ICON = images/kilogui.icns

HEADERS += kilowindow.h calibrate.h serialwin.h ftdiconn.h vusbconn.h serialconn.h camera.h

SOURCES += kilowindow.cpp kilogui.cpp calibrate.cpp serialwin.cpp ftdiconn.cpp intelhex.cpp vusbconn.cpp serialconn.cpp camera.cpp

mystaticconfig {
    QMAKE_LIBS_QT =
    QMAKE_LIBS_QT_THREAD =
    LIBS += $(QTDIR)/lib/libqt.a -lz -framework Carbon
}

unix {
  #VARIABLES
  isEmpty(PREFIX) {
    PREFIX = /usr
  }
  BINDIR = $$PREFIX/bin
  DATADIR =$$PREFIX/share

  DEFINES += DATADIR=\\\"$$DATADIR\\\" PKGDATADIR=\\\"$$PKGDATADIR\\\"

  #MAKE INSTALL

  INSTALLS += target desktop icon48 icon64 icon128

  target.path =$$BINDIR

  desktop.path = $$DATADIR/applications
  desktop.files += $${TARGET}.desktop

  icon48.path = $$DATADIR/icons/hicolor/48x48/apps
  icon48.files += images/48x48/kilogui.png

  icon64.path = $$DATADIR/icons/hicolor/64x64/apps
  icon64.files += images/64x64/kilogui.png

  icon128.path = $$DATADIR/icons/hicolor/128x128/apps
  icon128.files += images/128x128/kilogui.png
}
