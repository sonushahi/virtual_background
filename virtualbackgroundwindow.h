#ifndef VIRTUALBACKGROUNDWINDOW_H
#define VIRTUALBACKGROUNDWINDOW_H

#include <QMainWindow>

namespace Ui {
class CVirtualBackGroundWindow;
}

class CVirtualBackGroundWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CVirtualBackGroundWindow(QWidget *parent = 0);
    ~CVirtualBackGroundWindow();

private:
    Ui::CVirtualBackGroundWindow *ui;
};

#endif // VIRTUALBACKGROUNDWINDOW_H
