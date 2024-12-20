#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    int counter = 0;
    Ui::MainWindow *ui;

private slots:
    void on_btnCount_clicked();
    void on_btnReset_clicked();
};
#endif // MAINWINDOW_H
