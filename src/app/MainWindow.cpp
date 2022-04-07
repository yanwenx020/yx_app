#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "util/Text.h"

namespace
{
yx::Text text;
} // namespace

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText(text.text());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_updateButton_clicked()
{
    text.setText(ui->lineEdit->text());
    ui->label->setText(text.text());
}

void MainWindow::on_appendButton_clicked()
{
    text.append(ui->lineEdit->text());
    ui->label->setText(text.text());
}

void MainWindow::on_clearButton_clicked()
{
    text.clear();
    ui->label->setText(text.text());
}
