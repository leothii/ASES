#ifndef WINDOW_SIZE_UTILITY_H
#define WINDOW_SIZE_UTILITY_H

#include <QWidget>

// Function to set a fixed size for a window
void setFixedWindowSize(QWidget *window, int width = 424, int height = 800) {
    window->setFixedSize(width, height);
}

#endif // WINDOW_SIZE_UTILITY_H
