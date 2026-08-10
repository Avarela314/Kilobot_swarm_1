#include "camera.h"

#include <QVBoxLayout>
#include <QImage>

CameraWindow::CameraWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Kilobot Camera");
    resize(640, 480);

    imageLabel = new QLabel(this);
    imageLabel->setAlignment(Qt::AlignCenter);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(imageLabel);
    setLayout(layout);

    camera.open(0);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateFrame()));

    timer->start(30);
}

void CameraWindow::updateFrame()
{
    cv::Mat frame;

    if (!camera.isOpened())
        return;

    camera >> frame;

    if (frame.empty())
        return;

    cv::cvtColor(frame, frame, cv::COLOR_BGR2RGB);

    QImage image(
        frame.data,
        frame.cols,
        frame.rows,
        frame.step,
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