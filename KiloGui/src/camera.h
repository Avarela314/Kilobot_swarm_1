#ifndef CAMERA_H
#define CAMERA_H

#include <QWidget>
#include <QLabel>
#include <QTimer>

#include <opencv2/opencv.hpp>

class CameraWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CameraWindow(QWidget *parent = nullptr);
    ~CameraWindow();

private slots:
    void updateFrame();

private:
    QLabel *imageLabel;
    QTimer *timer;
    cv::VideoCapture camera;
};

#endif
