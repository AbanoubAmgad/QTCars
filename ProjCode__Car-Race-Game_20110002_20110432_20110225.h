#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QVector>
#include<list>

namespace Ui {
class QTimer ;
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_Exit_clicked();

    void keyPressEvent(QKeyEvent * event);

    void on_NewGame_clicked();

    void on_actionNew_Game_activated();

    void on_actionAbout_activated();

    void on_ExitAbout_clicked();

    void on_HighScores_clicked();

    void on_ExitHighScores_clicked();

    void on_Exitgame_clicked();

    void on_actionExit_activated();

private:
    Ui::MainWindow *ui;
    int  roadspos , car1pos , car2pos,car3pos, r  ;
    float times , l , l2 ;
    double sc ;
    bool b1 , b2 , b3 ;
    bool ingame ;
    std::pair < std::string, double > names ;
    std::vector < std::pair < std::string, double > > scores ;
    QTimer *timer;

public slots :
    void moveRoad () ;
};

#endif // MAINWINDOW_H
