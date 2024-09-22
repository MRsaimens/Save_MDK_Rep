#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->number_one->setValidator(new QDoubleValidator(this));
    ui->number_two->setValidator(new QDoubleValidator(this));

    connect(ui->pushButton_division, SIGNAL(clicked()), this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_multiplication, SIGNAL(clicked()), this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_save, SIGNAL(clicked()), this,SLOT(on_pushButton_clicked()));

    ui->pushButton_multiplication->setCheckable(true);
    ui->pushButton_division->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_save->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *keyEvent)
{
    if(keyEvent->key()==Qt::Key_Escape)
    {
        ui->number_one->setText("");
        ui->number_two->setText("");
        ui->rezult_text->setText("");
    }
    update();
}

void MainWindow::on_pushButton_clicked()
{
    double num1 = ui->number_one->text().toDouble();
    double num2 = ui->number_two->text().toDouble();
    double rezult;
    QFile file("test.txt");
    QTextStream stream (&file);

    if(num1 == 0 || num2 == 0){
        ui->rezult_text->setText("Error number 0");
    }
    else if(ui->pushButton_plus->isChecked()){
        rezult = num1 + num2;
        ui->rezult_text->setText(QString::number(rezult));
        if (file.open(QIODevice::Append))
        {
            stream <<num1<<"+"<< num2<<"="<<rezult<<"\n";
                    file.close();
        }

    }

    else if(ui->pushButton_minus->isChecked()){
        rezult = num1 - num2;
        ui->rezult_text->setText(QString::number(rezult));
        if (file.open(QIODevice::Append))
        {
            stream <<num1<<"-"<< num2<<"="<<rezult<<"\n";
                    file.close();
            //stream += file.readLine();
        }


    }

    else if(ui->pushButton_multiplication->isChecked()){
        rezult = num1 * num2;
        ui->rezult_text->setText(QString::number(rezult));
        if (file.open(QIODevice::Append))
        {
            stream <<num1<<"*"<< num2<<"="<<rezult<<"\n";
                    file.close();
        }
    }

    else if(ui->pushButton_division->isChecked()){
        rezult = num1 / num2;
        ui->rezult_text->setText(QString::number(rezult));
        if (file.open(QIODevice::Append))
        {
            stream <<num1<<"/"<< num2<<"="<<rezult<<"\n";
            file.close();
        }
    }

    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_division->setChecked(false);
    ui->pushButton_multiplication->setChecked(false);
    ui->pushButton_save->setChecked(false);
}
