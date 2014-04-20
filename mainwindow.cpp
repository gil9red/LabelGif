#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMovie * movie = new QMovie();
    movie->setFileName( ":/icon" );
    movie->start();

    ui->label->setMovie( movie );
    ui->label->setFixedSize( 50, 50 );
}

MainWindow::~MainWindow()
{
    delete ui;
}
