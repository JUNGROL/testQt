#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void showInput();


private slots:


    void on_m_btnOkay_clicked();

    void on_actionOpen_triggered();

    void on_actionClose_triggered();

    void on_actionExit_triggered();



    void on_m_btnOpenDialog_clicked();


    void on_m_btnCancel_clicked();

private:
    Ui::MainWindow *ui;
    QString m_str;
    Dialog* dialog;
};

#endif // MAINWINDOW_H
