#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../Echo/echograph.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mdiArea(new QMdiArea)
{
    ui->setupUi(this);

    mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    setCentralWidget(mdiArea);

    /*connect(mdiArea, &QMdiArea::subWindowActivated,
            this, &MainWindow::updateMenus);
            */

    setWindowTitle(tr("Complexmed.debug"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionEcho_triggered()
{
    //QMessageBox::about(NULL, "Proverka", "Proverka");
    EchoGraph *echoGraph = new EchoGraph;
    mdiArea->addSubWindow(echoGraph);
    echoGraph->setWindowTitle(tr("Эхограф"));
    echoGraph->show();

}
