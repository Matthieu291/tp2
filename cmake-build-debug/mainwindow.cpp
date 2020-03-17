//
// Created by Matthieu on 12/03/2020.
//

#include "mainwindow.h"

SQLClientWindow::SQLClientWindow() {
    setWindowTitle("Titre");
    setMinimumSize(600, 400);
    QWidget *WidgetParent = new QWidget;
    QLayout *layout1 = new QVBoxLayout;
    WidgetParent->setLayout(layout1);
    setCentralWidget(WidgetParent);
}


ButtonsPanel::ButtonsPanel() {
    QLayout * layout2 = new QHBoxLayout;
    layout2->addWidget(Configure);
    layout2->addWidget(Correct);
    layout2->addWidget(Disconnect);
}
