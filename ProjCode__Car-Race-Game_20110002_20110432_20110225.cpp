#include "ProjCode__Car-Race-Game_20110002_20110432_20110225.h"
#include "ui_ProjCode__Car-Race-Game_20110002_20110432_20110225.h"
#include <QKeyEvent>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <string>
#include <string.h>
#include <QKeyEvent>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <string>
#include <string.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include<vector>
#include<list>
#include<algorithm>
#include<time.h>
#include <QSound>
#include<QDir>

using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ingame = false ;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent * event){ // key press function
      int x = ui->Toktok->x() ; // getting the x & y coordinations
      int y = ui->Toktok->y() ;

      if (ingame) {
    if (x == 470 && y == 350 && event->key() == Qt::Key_Right){
        ui->Toktok->move(QPoint(580,350)); // if user pressed right  while in the middle, go to right
    }

    if (x == 470 && y == 350 && event->key() == Qt::Key_Left){
        ui->Toktok->move(QPoint(360,350)); // if user pressed left  while in the middle, go to left
    }

    if (x == 580 && y == 350 && event->key() == Qt::Key_Left){
        ui->Toktok->move(QPoint(470,350)); // if user pressed left  while in the right, go to middle
    }

    if (x == 360 && y == 350 && event->key() == Qt::Key_Right){
        ui->Toktok->move(QPoint(470,350)); // if user pressed right  while in the left, go to middle
    }

    if (event->key() == Qt::Key_Space){
        QSound::play("D:\Horn.wav"); // if user pressed space , horn
    }

    if (event->key() == Qt::Key_Up){ // if the user want to increase speed he press up
        l+= 0.1 ;
        l2+= 0.1 ;
    }

    if (event->key() == Qt::Key_Down){ // if the user want to decrease speed he press down
        l-= 0.1;
        l2-= 0.1 ;
    }
}
}

void MainWindow::on_Exit_clicked()
{
    this->close() ; // Close The Game
}

void MainWindow::on_NewGame_clicked()
{
    if(ingame == false) { // makin' sure we rn't already in game
    ingame = true ;
    ui->Toktok->move(QPoint (470,350)); // centralize the Toktok
    ui->name->clear();
    ui->name->clearFocus();
    ui->mainwindow->hide();
    ui->NewGame->hide();
    ui->Exit->hide();
    ui->HighScores->hide();
    ui->Road->show(); // hide everything , only show the Road and Toktok
    ui->Toktok->show();
    ui->ExitHighScores->hide();
    ui->HighScoresPage->hide();
    ui->HighScoresBoard->hide();
    ui->ExitAbout->hide();
    ui->About->hide();
    ui->enemycar1->hide();
    ui->enemycar2->hide();
    ui->enemycar3->hide();
    ui->Exitgame->hide();
    ui->entername->hide() ;
    ui->name->hide();


    sc = 0; // set score to zero
    l = 1 ; // set the road's speed increment value to 1
    l2 = 1 ; // set the enemycars' speed increment to 1
    car1pos = -150 ; // set the enemycar1's position
    car2pos = -180 ; // set the enemycar2's position >> they are different to support different outcoming of cars
    car3pos = -230 ; // set the enemycar3's position
    roadspos = -200 ; // set the road's position
    times = 1 ; // set the basic speed increaser to 1
    b1 = false , b2 = false , b3 = false ; // set all enemycars hidden

    QSound::play("D:\Start.wav"); // the start engine sound
    timer = new QTimer(this); // the timer function , connected to the moveroad function
    connect(timer, SIGNAL(timeout()), this, SLOT(moveRoad()));
    timer->start(1) ;
}
}

void MainWindow::moveRoad () {
    ui->score->display(sc) ; // display the score box
    sc += (int) l ; // increment the score with l's integer value
    times++ ; // increase the times to increase l2 & l1
    car1pos += l2 ; //  >> increase enemycars' Y cord by l2 value
    car2pos += l2 ; // ^
    car3pos += l2 ; // ^
    roadspos +=  l ;

     if (roadspos > -1) {
         roadspos = -200 ; // when the road goes down , repeat it
     }

     if ( car1pos > 600) { // if enemycar1 goes down
         car1pos = -150 ; // repeat it  from above
         srand(time(NULL)); // according to time
         r  = 1 + (rand() % 6) ; // generate a random number from 1 >> 6
         if ( r == 1 || r == 3){ // if r = 1 or 3
             b1 = true ; // show the car
             ui->enemycar1->show();
         }
         // that's how we randomize cars show
         else {ui->enemycar1->hide(); b1 = false ; } // if not , hide it
     }

     if ( car2pos > 600) { // as above
         car2pos = -150 ;
         srand(time(NULL));
         r  = 1 + (rand() % 6) ;
         if ( r == 2 || r == 4){
             b2 = true ;
             ui->enemycar2->show();
         }
         else {ui->enemycar2->hide(); b2 = false ; }

     }

     if ( car3pos > 600) { // as above
         car3pos = -150 ;
         srand(time(NULL));
         r  = 1 + (rand() % 6) ;
         if ( r==6 || r==5){
             b3 = true ;
             ui->enemycar3->show();
         }
         else {ui->enemycar3->hide(); b3 = false ; }
     }


     if ( times == 300) {
         l++ ;
         l2++ ;
         times = 1 ;
     }

    ui->Road->move(QPoint(350,roadspos));           // > move the road & cars
    ui->enemycar1->move((QPoint (360,car1pos)));  //^
    ui->enemycar2->move((QPoint (470,car2pos)));  //^
    ui->enemycar3->move((QPoint (580,car3pos)));  //^




    if (ui->Toktok->x() == 360 && ui->enemycar1->y() < 510 && ui->enemycar1->y() > 210 && b1){
        //when the toktok is on the left , the enemycar1 is in the range of the toktok and it's NOT HIDDEN
       timer->stop(); // stop the timer
       ui->Toktok->move(360,349) ; // move the toktok alittle bit in order to prevent it from moving
       QSound::play("D:\Crash.wav"); // play the crash sound
       ui->Exitgame->show(); // show the exit game button
       ui->entername->show() ; // show the entername text
       ui->name->show(); // show the entername box


}

    else if (ui->Toktok->x() == 470 && ui->enemycar2->y() < 510 && ui->enemycar2->y() > 210 && b2){
        // same as above
       timer->stop();
       ui->Toktok->move(470,349) ;
       QSound::play("D:\Crash.wav");
       ui->Exitgame->show();
       ui->entername->show() ;
       ui->name->show();
    }

    else if (ui->Toktok->x() == 580 && ui->enemycar3->y() < 510 && ui->enemycar3->y() > 210 && b3){
        // same as above
       timer->stop();
       ui->Toktok->move(580,349) ;
       QSound::play("D:\Crash.wav");
       ui->Exitgame->show();
       ui->entername->show() ;
       ui->name->show();
    }

}

void MainWindow::on_actionNew_Game_activated()
{
    MainWindow::on_NewGame_clicked();
}

void MainWindow::on_actionAbout_activated()
{
    if (ingame == false) {
    ui->mainwindow->hide();
    ui->NewGame->hide();
    ui->Exit->hide();
    ui->HighScores->hide();
    ui->Toktok->hide();
    ui->Road->hide();
    ui->ExitHighScores->hide();
    ui->HighScoresPage->hide();
    ui->HighScoresBoard->hide();
    ui->About->show(); // hide everthing and show about & exit button
    ui->ExitAbout->show();
    ui->enemycar1->hide();
    ui->enemycar2->hide();
    ui->enemycar3->hide();}
}

void MainWindow::on_ExitAbout_clicked()
{
    ui->mainwindow->show();
    ui->NewGame->show();
    ui->Exit->show();
    ui->HighScores->show();
    ui->Toktok->hide();
    ui->Road->hide();
    ui->ExitHighScores->hide();
    ui->HighScoresPage->hide();
    ui->HighScoresBoard->hide();
    ui->ExitAbout->hide();
    ui->About->hide();
}

bool whosebigger(pair<string,double> i,pair<string,double> j);
// function to sort with the second value of each pair

void MainWindow::on_HighScores_clicked()
{
    ui->mainwindow->hide();
    ui->NewGame->hide();
    ui->Exit->hide();
    ui->HighScores->hide();
    ui->Toktok->hide();
    ui->Road->hide();
    ui->ExitAbout->hide();
    ui->About->hide();
    ui->ExitHighScores->show() ;
    ui->HighScoresPage->show();
    ui->HighScoresBoard->show();
    ui->enemycar1->hide();
    ui->enemycar2->hide();
    ui->enemycar3->hide();



    scores.clear(); // clear the vector
    ifstream fin ;
    fin.open("D:\HighScores.txt"); // open the highscores note

    while (!fin.eof()) { // till the end of the document , get each value
        fin >> names.first ;
        fin >> names.second ;
        scores.push_back(names);
    }
    scores.pop_back(); // remove the last one in order not to be repeated
    std::sort(scores.begin(), scores.end(),whosebigger); // sort
    fin.close(); // close the document

    ofstream fout ;
    fout.open("D:\HighScores.txt"); // open it again :D

     stringstream x ;
    for ( int i = 0 ; i < scores.size() ; i++) {
        if (i== 10) break ; // get the top ten only

        fout <<  scores[i].first ;  // put them back to the document
        fout << " ";
        fout <<  scores[i].second ;
        fout << endl ;

        x <<  scores[i].first ; // put then in astring stream as well
        x << " ";
        x <<  scores[i].second ;
        x << endl ;

    }

    ui->HighScoresBoard->setStyleSheet("QLabel { color : white; }"); // setting style for the board


    string convert ;
    convert = x.str() ; // converting to a string

    ui->HighScoresBoard->setText(QString::fromStdString(convert)); // converting to a QString and putting them to the board

}

void MainWindow::on_ExitHighScores_clicked()
{
    ui->mainwindow->show();
    ui->NewGame->show();
    ui->Exit->show();
    ui->HighScores->show();
    ui->Toktok->hide();
    ui->Road->hide();
    ui->ExitHighScores->hide();
    ui->HighScoresPage->hide();
    ui->HighScoresBoard->hide();
    ui->ExitAbout->hide();
    ui->About->hide();
}

bool whosebigger(pair<string,double> i,pair<string,double> j){
    return ( (i.second > j.second) ); // only return 1 when the score is higher , don't look at the name
}

void MainWindow::on_Exitgame_clicked()
{
    ingame = false ;
    ui->mainwindow->show();
    ui->NewGame->show();
    ui->Exit->show();
    ui->HighScores->show();
    ui->Road->hide();
    ui->Toktok->hide();
    ui->ExitHighScores->hide();
    ui->HighScoresPage->hide();
    ui->HighScoresBoard->hide();
    ui->ExitAbout->hide();
    ui->About->hide();
    ui->enemycar1->hide();
    ui->enemycar2->hide();
    ui->enemycar3->hide();
    ui->Exitgame->hide();


 // when the user finishes the game , write his name and pressed exit
    scores.clear();
    ifstream fin ;
    fin.open("D:\HighScores.txt"); // open the document

    while (!fin.eof()) { // get everthing
        fin >> names.first ;
        fin >> names.second ;
        scores.push_back(names);
    }
    scores.pop_back();

    QString str;
    str=ui->name->toPlainText(); // getting user name
    string temp = "" ; // creating an empty string
    temp = str.toStdString();
    pair<string,double> mypair ;
    if (temp == "") mypair.first = "NoName" ; // if the string still empty , user didn't input his name , assign no name instead
    else  mypair.first = temp ; // changing his name to string and assigning it to a pair's first
    mypair.second = sc ; // assigning his score to the pair's second
    scores.push_back(mypair); // add this pair to the vector

    std::sort(scores.begin(), scores.end(),whosebigger); // sort
    fin.close();

    ofstream fout ;
    fout.open("D:\HighScores.txt");

    for ( int i = 0 ; i < scores.size() ; i++) {
        if (i == 10) break ;
      // putting the top ten only in the file
        fout <<  scores[i].first ;
        fout << " ";
        fout <<  scores[i].second ;
        fout << endl ;
\
    }

}

void MainWindow::on_actionExit_activated()
{
   MainWindow::on_Exit_clicked();
}
