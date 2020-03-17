//
// Created by Matthieu on 12/03/2020.
//
#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>


#ifndef TP2_MAINWINDOW_H
#define TP2_MAINWINDOW_H

class SQLClientWindow :public QMainWindow{
Q_OBJECT
public :
    SQLClientWindow ();
};


class ButtonsPanel : public QWidget {
    Q_OBJECT
public :
    QPushButton* Configure = new QPushButton ("Configure");
    QPushButton* Correct = new QPushButton ("Correct");
    QPushButton* Disconnect = new QPushButton ("Disconnect");
    ButtonsPanel();
};




#endif //TP2_MAINWINDOW_H
