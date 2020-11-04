#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QTimer>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QVector<QVector<int>> men = {{0, 5}, {14, 0}};
    QVector<QVector<int>> car = {{7, 0}, {0, 11}};
    QTableWidget *road;
    QStringList m_TableHeader;


private slots:
    void moveM(QString m, QVector<QVector<int>> men);
    void moveC(QString c, QVector<QVector<int>> car);
};
#endif // MAINWINDOW_H
