#ifndef WORKOUTAPPFINAL_QTCARDIO_H
#define WORKOUTAPPFINAL_QTCARDIO_H

#include "ui_QtCardio.h"
#include <QDialog>

class QtCardio : public QDialog, private Ui::QtCardio {
Q_OBJECT

public:
    QtCardio(QDialog *parent = nullptr);
    void printStringRep();
    void updateUI();

private:
    std::string cardioWorkoutOutput;
    int timeTest;
    std::string timeStr;

public Q_SLOTS:
    void cardioPushButtonClickedHandler();
    void timerPushButtonClickedHandler();
    void resetPushButtonClickedHandler();
    void updateTime();

};


#endif //WORKOUTAPPFINAL_QTCARDIO_H
