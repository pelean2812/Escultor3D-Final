#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sculptor.h"
#include "vector"
#include "plotter.h"
#include <QMainWindow>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void CriaCanvas();
    void ChamaPutVoxel();
    void ChamaPutBox();
    void ChamaPutSphere();
    void ChamaPutEllipsoid();
    void ChamaCutVoxel();
    void ChamaCutBox();
    void ChamaCutSphere();
    void ChamaCutEllipsoid();
    void sair();

private:
    Ui::MainWindow *ui;
    std::vector<std::vector<Voxel>> m;
};
#endif // MAINWINDOW_H
