#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "qnetrequest.h"
#include "qflexiblejsonobject.h"

#include <QDebug>
#include <QSslSocket>
#include <QNetworkReply>
#include <QNetworkAccessManager>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    testQFlexibleJsonObject();
    testQNetRequest();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::testQFlexibleJsonObject()
{
    qDebug() << "testQFlexibleJsonObject()";
    QJsonObject object;
    object["uno"] = 1;
    object["dos"] = 2;
    qDebug() << QFlexibleJsonObject::value(object, "UNO").toInt();
    qDebug() << QFlexibleJsonObject::value(object, "DoS").toInt();
    qDebug() << object.value("UNO").toInt();
    qDebug() << object.value("DoS").toInt();
}

void MainWindow::testQNetRequest()
{
    qDebug() << "testQNetRequest()";
    qDebug() << "QSslSocket::supportsSSL():" << QSslSocket::supportsSsl();
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, [&](QNetworkReply *reply)
    {
        if (reply->error() != QNetworkReply::NoError)
        {
            qDebug() << "QNetworkReply.error =" << reply->errorString();
        }
        else
        {
            qDebug() << "reply ok!";
            qDebug() << reply->readAll();
        }
    });
    manager->get(QNetRequest(QUrl("https://github.com/cedoduarte")));
}
