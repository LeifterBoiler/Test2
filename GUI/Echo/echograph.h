#ifndef ECHOGRAPH_H
#define ECHOGRAPH_H

#include <QWidget>

namespace Ui {
class EchoGraph;
}

class EchoGraph : public QWidget
{
    Q_OBJECT

public:
    explicit EchoGraph(QWidget *parent = 0);
    ~EchoGraph();

private:
    Ui::EchoGraph *ui;
};

#endif // ECHOGRAPH_H
