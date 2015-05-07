/****************************************************************************
** Meta object code from reading C++ file 'ProjCode__Car-Race-Game_20110002_20110432_20110225.h'
**
** Created: Sat Dec 22 20:56:22 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjCode__Car-Race-Game_20110002_20110432_20110225/ProjCode__Car-Race-Game_20110002_20110432_20110225.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjCode__Car-Race-Game_20110002_20110432_20110225.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   30,   11,   11, 0x08,
      62,   11,   11,   11, 0x08,
      83,   11,   11,   11, 0x08,
     113,   11,   11,   11, 0x08,
     140,   11,   11,   11, 0x08,
     163,   11,   11,   11, 0x08,
     187,   11,   11,   11, 0x08,
     215,   11,   11,   11, 0x08,
     237,   11,   11,   11, 0x08,
     263,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_Exit_clicked()\0event\0"
    "keyPressEvent(QKeyEvent*)\0"
    "on_NewGame_clicked()\0on_actionNew_Game_activated()\0"
    "on_actionAbout_activated()\0"
    "on_ExitAbout_clicked()\0on_HighScores_clicked()\0"
    "on_ExitHighScores_clicked()\0"
    "on_Exitgame_clicked()\0on_actionExit_activated()\0"
    "moveRoad()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_Exit_clicked(); break;
        case 1: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: _t->on_NewGame_clicked(); break;
        case 3: _t->on_actionNew_Game_activated(); break;
        case 4: _t->on_actionAbout_activated(); break;
        case 5: _t->on_ExitAbout_clicked(); break;
        case 6: _t->on_HighScores_clicked(); break;
        case 7: _t->on_ExitHighScores_clicked(); break;
        case 8: _t->on_Exitgame_clicked(); break;
        case 9: _t->on_actionExit_activated(); break;
        case 10: _t->moveRoad(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
