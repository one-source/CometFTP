#ifndef COMET_SERVEREXPLORER_H
#define COMET_SERVEREXPLORER_H

#include <QWidget>
#include <QtWidgets>

#include "SFTPSite.h"
#include "SlidingStackedWidget.h"
#include "ServerFileModel.h"
class ServerExplorer : public QWidget
{
    Q_OBJECT
public:
    explicit ServerExplorer(QWidget *parent = 0);
    std::string _host;
    std::string _user;
    std::string _port;
    std::string _password;
signals:


public slots:

private slots:
    void bookmarkBtnPressed();
    void sftpBtnPressed();
    void connectBtnPressed();
    void rowSelected(const QModelIndex indx);

private:
    QFrame* toolbar;
    QWidget* explorerSlide;
    QWidget* siteManager;
    QWidget* bookmarkSlide;
    QWidget* connectSlide;
    void setupSiteManager();
    QPushButton* bookmarkBtn;
    QPushButton* sftpBtn;
    QPushButton* connectBtn;
    QPushButton* connectBookmarkBtn;
    SFTPSite* site;
    SlidingStackedWidget* mainSlider;
    ServerFileModel* model;
    //Connect Area
    QLineEdit* host;
    QLineEdit* user;
    QLineEdit* password;
    QLineEdit* port;
    QString mainDir;
    int animTime;
    QTableView* table;

};

#endif // COMET_SERVEREXPLORER_H
