#include "localserver.h"
#include <QLocalSocket>
#include <QTextStream>

LocalServer::LocalServer(QObject *parent)
    : QLocalServer(parent)
{
    mSocket = nullptr;

    connect(this, &LocalServer::newConnection, [&](){
       mSocket = nextPendingConnection();
//       QTextStream T(mSocket);
    });
}

void LocalServer::envia(const QString &msj)
{
    if(mSocket){
        QTextStream T(mSocket);
        T << msj;
        mSocket->flush();
    }
}
