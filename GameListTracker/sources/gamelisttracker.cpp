#include "headers/gamelisttracker.h"
#include "headers/warframe.h"

#include "ui_gamelisttracker.h"

GameListTracker::GameListTracker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameListTracker)
{
    ui->setupUi(this);
    Warframe *wfTab = new Warframe();

    ui->gamesTabWidget->removeTab(0);
    ui->gamesTabWidget->addTab(wfTab, tr("Warframe"));
}

GameListTracker::~GameListTracker()
{
    delete ui;
}
