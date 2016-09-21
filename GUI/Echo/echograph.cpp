#include "echograph.h"
#include "ui_echograph.h"

EchoGraph::EchoGraph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EchoGraph)
{
    ui->setupUi(this);
}

EchoGraph::~EchoGraph()
{
    delete ui;
}
