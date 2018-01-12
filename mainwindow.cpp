#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->m_btnOkay, SIGNAL(clicked()), this, SLOT(btn_okay_showInput()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::showInput()
{
    m_str += ui->m_edtVorname->text();
    m_str += " " + ui->m_edtNachname->text();
    m_str += " " + ui->m_edtStarsse->text();
    m_str += " " + ui->m_edtHausnummer->text();
    m_str += " " + ui->m_edtOostleitzahl->text();
    m_str += " " + ui->m_edtWohnort->text() + ";\n";
    ui->m_text->setText(m_str);
}

void MainWindow::on_m_btnOkay_clicked()
{
    showInput();
}

void MainWindow::on_actionOpen_triggered()
{
    QMessageBox::information(this, "title", QString("open database"));
}

void MainWindow::on_actionClose_triggered()
{
    QMessageBox::information(this, "title", QString("close database"));
}

void MainWindow::on_actionExit_triggered()
{

}


void MainWindow::on_m_btnOpenDialog_clicked()
{
//    Dialog dialog;
//    dialog.setModal(true);
//    dialog.exec();
    dialog = new Dialog(this);
    dialog->show();
}


void MainWindow::on_m_btnCancel_clicked()
{
    ui->m_text->clear();
    m_str.clear();
}
