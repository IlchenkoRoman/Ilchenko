#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QHeaderView>
#include <QMessageBox>
#include <QStandardItem>
#include <QDebug>
#include <QBrush>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      road(NULL)
{
    bool s1 = false, s2 = true;
    QString m = "0";
    QString c = "1";
     road = new QTableWidget(this);
     road->setRowCount(40);
     road->setColumnCount(80);
     road->setEditTriggers(QAbstractItemView::NoEditTriggers);
     road->setSelectionBehavior(QAbstractItemView::SelectRows);
     road->setSelectionMode(QAbstractItemView::SingleSelection);
     road->setShowGrid(false);
     road->setGeometry(QApplication::desktop()->screenGeometry());
     for (int i = 0; i < 7; i++) {
         road->setItem(9, i, new QTableWidgetItem("    ___"));
         road->setItem(15, i - 1, new QTableWidgetItem("   ___"));
     }
     for (int i = 0; i < 10; i++) {
     road->setItem(i, 6, new QTableWidgetItem("    |"));
     road->setItem(i, 8, new QTableWidgetItem("    |"));
     }
     for (int i = 15; i < 25; i++) {
     road->setItem(i, 6, new QTableWidgetItem("    |"));
     road->setItem(i, 8, new QTableWidgetItem("    |"));
     }
     for (int i = 9; i < 16; i++) {
         road->setItem(9, i, new QTableWidgetItem("______"));
         road->setItem(15, i, new QTableWidgetItem("______"));
     }

}
MainWindow::~MainWindow()
{
    delete tmr;
}

void MainWindow::moveM(QString m, QVector<QVector<int>> men) {

}

void MainWindow::moveC(QString c, QVector<QVector<int>> car) {

}
