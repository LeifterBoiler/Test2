#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include <QMdiArea>

#include <QMessageBox>

QT_BEGIN_NAMESPACE
//class QAction;
//class QMenu;
class QMdiArea;
//class QMdiSubWindow;
QT_END_NAMESPACE


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QMdiArea *mdiArea;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionEcho_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
