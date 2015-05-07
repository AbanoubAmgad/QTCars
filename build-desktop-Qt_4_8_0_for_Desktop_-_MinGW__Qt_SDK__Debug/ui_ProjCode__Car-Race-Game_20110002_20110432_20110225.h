/********************************************************************************
** Form generated from reading UI file 'ProjCode__Car-Race-Game_20110002_20110432_20110225.ui'
**
** Created: Wed Dec 19 13:16:51 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJCODE__CAR_2D_RACE_2D_GAME_20110002_20110432_20110225_H
#define UI_PROJCODE__CAR_2D_RACE_2D_GAME_20110002_20110432_20110225_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Game;
    QAction *actionAbout;
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *mainwindow;
    QPushButton *NewGame;
    QPushButton *HighScores;
    QPushButton *Exit;
    QLabel *Road;
    QLabel *Toktok;
    QLabel *About;
    QPushButton *ExitAbout;
    QLabel *HighScoresPage;
    QPushButton *ExitHighScores;
    QLabel *HighScoresBoard;
    QLabel *enemycar1;
    QLabel *enemycar2;
    QLabel *enemycar3;
    QPushButton *Exitgame;
    QLabel *Score;
    QLCDNumber *score;
    QLabel *entername;
    QTextEdit *name;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1081, 580);
        MainWindow->setMinimumSize(QSize(1081, 580));
        MainWindow->setMaximumSize(QSize(1081, 580));
        MainWindow->setCursor(QCursor(Qt::OpenHandCursor));
        actionNew_Game = new QAction(MainWindow);
        actionNew_Game->setObjectName(QString::fromUtf8("actionNew_Game"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mainwindow = new QLabel(centralWidget);
        mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->setEnabled(true);
        mainwindow->setGeometry(QRect(0, 0, 1081, 525));
        mainwindow->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Main Page.jpg")));
        NewGame = new QPushButton(centralWidget);
        NewGame->setObjectName(QString::fromUtf8("NewGame"));
        NewGame->setEnabled(true);
        NewGame->setGeometry(QRect(700, 60, 247, 57));
        NewGame->setCursor(QCursor(Qt::PointingHandCursor));
        NewGame->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/New Game - j.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/new/prefix1/New Game - Pointed j.jpg"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8(":/new/prefix1/New Game - Pointed j.jpg"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QString::fromUtf8(":/new/prefix1/New Game - Pointed j.jpg"), QSize(), QIcon::Selected, QIcon::On);
        NewGame->setIcon(icon);
        NewGame->setIconSize(QSize(247, 57));
        HighScores = new QPushButton(centralWidget);
        HighScores->setObjectName(QString::fromUtf8("HighScores"));
        HighScores->setEnabled(true);
        HighScores->setGeometry(QRect(630, 120, 345, 69));
        HighScores->setCursor(QCursor(Qt::PointingHandCursor));
        HighScores->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/High Scores - j.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        HighScores->setIcon(icon1);
        HighScores->setIconSize(QSize(345, 69));
        Exit = new QPushButton(centralWidget);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(950, 260, 87, 40));
        Exit->setCursor(QCursor(Qt::PointingHandCursor));
        Exit->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Exit - j.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Exit->setIcon(icon2);
        Exit->setIconSize(QSize(87, 40));
        Road = new QLabel(centralWidget);
        Road->setObjectName(QString::fromUtf8("Road"));
        Road->setGeometry(QRect(350, -200, 341, 721));
        Road->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Road.jpg")));
        Toktok = new QLabel(centralWidget);
        Toktok->setObjectName(QString::fromUtf8("Toktok"));
        Toktok->setGeometry(QRect(470, 350, 99, 157));
        Toktok->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Toktok.jpg")));
        About = new QLabel(centralWidget);
        About->setObjectName(QString::fromUtf8("About"));
        About->setGeometry(QRect(0, 0, 1081, 525));
        About->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/About.jpg")));
        ExitAbout = new QPushButton(centralWidget);
        ExitAbout->setObjectName(QString::fromUtf8("ExitAbout"));
        ExitAbout->setGeometry(QRect(10, 470, 87, 40));
        ExitAbout->setCursor(QCursor(Qt::PointingHandCursor));
        ExitAbout->setFocusPolicy(Qt::NoFocus);
        ExitAbout->setIcon(icon2);
        ExitAbout->setIconSize(QSize(87, 40));
        HighScoresPage = new QLabel(centralWidget);
        HighScoresPage->setObjectName(QString::fromUtf8("HighScoresPage"));
        HighScoresPage->setGeometry(QRect(0, 0, 1081, 525));
        HighScoresPage->setContextMenuPolicy(Qt::NoContextMenu);
        HighScoresPage->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/High Scores.jpg")));
        ExitHighScores = new QPushButton(centralWidget);
        ExitHighScores->setObjectName(QString::fromUtf8("ExitHighScores"));
        ExitHighScores->setGeometry(QRect(20, 460, 87, 40));
        ExitHighScores->setCursor(QCursor(Qt::PointingHandCursor));
        ExitHighScores->setFocusPolicy(Qt::NoFocus);
        ExitHighScores->setIcon(icon2);
        ExitHighScores->setIconSize(QSize(87, 40));
        HighScoresBoard = new QLabel(centralWidget);
        HighScoresBoard->setObjectName(QString::fromUtf8("HighScoresBoard"));
        HighScoresBoard->setGeometry(QRect(100, 100, 291, 311));
        QFont font;
        font.setPointSize(18);
        HighScoresBoard->setFont(font);
        HighScoresBoard->setAutoFillBackground(false);
        HighScoresBoard->setFrameShape(QFrame::NoFrame);
        HighScoresBoard->setFrameShadow(QFrame::Plain);
        HighScoresBoard->setMidLineWidth(0);
        HighScoresBoard->setTextFormat(Qt::AutoText);
        HighScoresBoard->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        enemycar1 = new QLabel(centralWidget);
        enemycar1->setObjectName(QString::fromUtf8("enemycar1"));
        enemycar1->setGeometry(QRect(360, -150, 81, 145));
        enemycar1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Enemycar.jpg")));
        enemycar2 = new QLabel(centralWidget);
        enemycar2->setObjectName(QString::fromUtf8("enemycar2"));
        enemycar2->setGeometry(QRect(470, -150, 81, 145));
        enemycar2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Enemycar.jpg")));
        enemycar3 = new QLabel(centralWidget);
        enemycar3->setObjectName(QString::fromUtf8("enemycar3"));
        enemycar3->setGeometry(QRect(580, -150, 81, 145));
        enemycar3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Enemycar.jpg")));
        Exitgame = new QPushButton(centralWidget);
        Exitgame->setObjectName(QString::fromUtf8("Exitgame"));
        Exitgame->setGeometry(QRect(40, 440, 87, 40));
        Exitgame->setCursor(QCursor(Qt::PointingHandCursor));
        Exitgame->setFocusPolicy(Qt::NoFocus);
        Exitgame->setIcon(icon2);
        Exitgame->setIconSize(QSize(87, 40));
        Score = new QLabel(centralWidget);
        Score->setObjectName(QString::fromUtf8("Score"));
        Score->setGeometry(QRect(20, 60, 251, 161));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        Score->setFont(font1);
        Score->setWordWrap(true);
        score = new QLCDNumber(centralWidget);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(182, 122, 101, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        score->setFont(font2);
        score->setNumDigits(12);
        entername = new QLabel(centralWidget);
        entername->setObjectName(QString::fromUtf8("entername"));
        entername->setGeometry(QRect(20, 290, 211, 91));
        entername->setFont(font1);
        entername->setWordWrap(true);
        name = new QTextEdit(centralWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(200, 330, 121, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        name->setFont(font3);
        name->setFocusPolicy(Qt::ClickFocus);
        MainWindow->setCentralWidget(centralWidget);
        entername->raise();
        name->raise();
        score->raise();
        Score->raise();
        Exitgame->raise();
        Road->raise();
        enemycar3->raise();
        enemycar2->raise();
        enemycar1->raise();
        About->raise();
        HighScoresPage->raise();
        Toktok->raise();
        ExitHighScores->raise();
        ExitAbout->raise();
        HighScoresBoard->raise();
        mainwindow->raise();
        Exit->raise();
        NewGame->raise();
        HighScores->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1081, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew_Game);
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Need For Fakka", 0, QApplication::UnicodeUTF8));
        actionNew_Game->setText(QApplication::translate("MainWindow", "New Game", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        mainwindow->setText(QString());
        NewGame->setText(QString());
        HighScores->setText(QString());
        Exit->setText(QString());
        Road->setText(QString());
        Toktok->setText(QString());
        About->setText(QString());
        ExitAbout->setText(QString());
        HighScoresPage->setText(QString());
        ExitHighScores->setText(QString());
        HighScoresBoard->setText(QString());
        enemycar1->setText(QString());
        enemycar2->setText(QString());
        enemycar3->setText(QString());
        Exitgame->setText(QString());
        Score->setText(QApplication::translate("MainWindow", "Score = ", 0, QApplication::UnicodeUTF8));
        entername->setText(QApplication::translate("MainWindow", "Please Enter Your Name :", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJCODE__CAR_2D_RACE_2D_GAME_20110002_20110432_20110225_H
