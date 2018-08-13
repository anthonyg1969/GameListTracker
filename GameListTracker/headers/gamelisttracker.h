#ifndef GAMELISTTRACKER_H
#define GAMELISTTRACKER_H

#include <QMainWindow>

namespace Ui {
class GameListTracker;
}

class GameListTracker : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameListTracker(QWidget *parent = nullptr);
    ~GameListTracker();

private:
    Ui::GameListTracker *ui;
};

#endif // GAMELISTTRACKER_H
