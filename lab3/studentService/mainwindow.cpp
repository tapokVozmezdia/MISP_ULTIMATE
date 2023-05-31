#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>
#include <iostream>
#include <QFileDialog>
#include <fstream>

std::string ca_path = "C:\\forUni\\mispOld\\lab3\\studentService\\Caffe-and-cinema.csv";
std::string co_path = "C:\\forUni\\mispOld\\lab3\\studentService\\Costs.csv";
std::string in_path = "C:\\forUni\\mispOld\\lab3\\studentService\\Institute.csv";
std::string tr_path = "C:\\forUni\\mispOld\\lab3\\studentService\\Transport.csv";

DataBase newBase(ca_path, co_path, in_path, tr_path);
StudentService service(&newBase);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->calculateButton, SIGNAL(clicked()), this, SLOT(changePrice()));
    QObject::connect(ui->folderButton, SIGNAL(clicked()), this, SLOT(openExplorer()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changePrice()
{
    service.setMonth(ui->monthPick->currentIndex());
    int price = service.getCosts(getCity(), getAdress(), getInstitute(),getCinema(), getCaffe(), getAge());
    std::string str_price = std::to_string(price);
    const QString totalCost = QString::fromStdString(str_price);
    ui->totalCost->setText(totalCost);
}

bool pathFound(std::string path)
{
    std::ifstream checker_1;
    std::ifstream checker_2;
    std::ifstream checker_3;
    std::ifstream checker_4;
    checker_1.open(path + "/" + "Transport.csv");
    checker_2.open(path + "/" + "Caffe-and-cinema.csv");
    checker_3.open(path + "/" + "Costs.csv");
    checker_4.open(path + "/" + "Institute.csv");
    if (checker_1.is_open() == 0 || checker_2.is_open() == 0
        || checker_3.is_open() == 0 || checker_4.is_open() == 0)
    {
        std::cout << "ERROR, FOLDER DOES NOT CONTAIN DEEDED DATA" << std::endl;
        return false;
    }
    return true;
}

void MainWindow::openExplorer()
{
    std::string path;
    do {
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                        | QFileDialog::DontResolveSymlinks);
        path = dir.toStdString();
    }
    while (pathFound(path) == false);
    service.changePath(path);
}

std::string MainWindow::getCity()
{
    return (ui->lineEdit_1->text().toStdString());
}

std::string MainWindow::getAdress()
{
    return (ui->lineEdit_2->text().toStdString());
}
std::string MainWindow::getInstitute()
{
    return (ui->lineEdit_3->text().toStdString());
}
std::string MainWindow::getCaffe()
{
    return (ui->lineEdit_4->text().toStdString());
}
std::string MainWindow::getCinema()
{
    return (ui->lineEdit_5->text().toStdString());
}
int MainWindow::getAge()
{
    return std::stoi((ui->lineEdit_6->text()).toStdString());
}
