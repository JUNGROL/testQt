#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->comboTable->addItem("adresse");
    ui->comboTable->addItem("employee");
    ui->comboTable->addItem("myorder");

    ui->comboField->addItem("empid");
    ui->comboField->addItem("name");
    ui->comboField->addItem("title");

    ui->comboOperation->addItem("==");
    ui->comboOperation->addItem("!=");
    ui->comboOperation->addItem(">");
    ui->comboOperation->addItem("<");
    ui->comboOperation->addItem(">=");
    ui->comboOperation->addItem("<=");
}

Dialog::~Dialog()
{
    delete ui;
}
