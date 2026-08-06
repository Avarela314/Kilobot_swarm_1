#ifndef __VUSBCONN_H__
#define __VUSBCONN_H__

#include <libusb-compat/usb.h>
#include <QObject>
#include <QString>
#include <QElapsedTimer>
#include "intelhex.h"

class VUSBConnection: public QObject {
    Q_OBJECT

private:
    struct usb_dev_handle *handle;
    intelhex::hex_data data;

    QElapsedTimer delay;
    int mode;
    int page;
    int page_total;

public:
    VUSBConnection(QObject *p=0);

signals:
    void status(QString);
    void error(QString);

public slots:
    void sendCommand(QByteArray);
    void sendProgram(QString);
    void open();
    void close();

private slots:
    void programLoop();
};

#endif//__VUSBCONN_H__
