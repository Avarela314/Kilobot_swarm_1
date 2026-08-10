#include "camera.h"

#include <QVBoxLayout>
#include <QImage>
#include <QPixmap>

CameraWindow::CameraWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Kilobot Camera");
    resize(640, 480);

    imageLabel = new QLabel(this);
    imageLabel->setAlignment(Qt::AlignCenter);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(imageLabel);

    camera.open(0);

    timer = new QTimer(this);

    connect(timer, &QTimer::timeout,
            this, &CameraWindow::updateFrame);

    timer->start(30);
}

CameraWindow::~CameraWindow()
{
    if (camera.isOpened())
        camera.release();
}

void CameraWindow::updateFrame()
{
    if (!camera.isOpened())
        return;

    cv::Mat frame;
    camera >> frame;

    if (frame.empty())
        return;

    cv::cvtColor(frame, frame, cv::COLOR_BGR2RGB);

    QImage image(
        frame.data,
        frame.cols,
        frame.rows,
        static_cast<int>(frame.step),
        QImage::Format_RGB888
    );

    imageLabel->setPixmap(
        QPixmap::fromImage(image).scaled(
            imageLabel->size(),
            Qt::KeepAspectRatio,
            Qt::SmoothTransformation
        )
    );
}
