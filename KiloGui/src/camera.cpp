#include "camera.h"

#include <QVBoxLayout>
#include <QImage>
#include <QPixmap>

CameraWindow::CameraWindow(QWidget *parent)
    : QWidget(nullptr)   // nullptr makes this a separate top-level window
{
    setWindowTitle("Kilobot Camera");
    resize(640, 480);

    imageLabel = new QLabel("Opening camera...", this);
    imageLabel->setAlignment(Qt::AlignCenter);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(imageLabel);

    timer = new QTimer(this);

    connect(timer, &QTimer::timeout,
            this, &CameraWindow::updateFrame);

    // Start updating the camera approximately 30 times per second
    timer->start(33);
}

CameraWindow::~CameraWindow()
{
    timer->stop();

    if (camera.isOpened())
        camera.release();
}

void CameraWindow::updateFrame()
{
    // Open the camera once
    if (!camera.isOpened()) {
        camera.open(0);

        if (!camera.isOpened()) {
            imageLabel->setText("Could not open camera");
            return;
        }
    }

    cv::Mat frame;
    camera >> frame;

    if (frame.empty()) {
        imageLabel->setText("Could not read camera frame");
        return;
    }

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
