#ifndef QNSIMPLELISTDATA_H
#define QNSIMPLELISTDATA_H

#include <QWidget>
#include <QNetworkReply>
#include "musicextrasglobaldefine.h"

class QLineEdit;
class QPushButton;
class QSettings;
class QTextEdit;
class QNetworkAccessManager;

class MUSIC_EXTRAS_EXPORT QNSimpleListData : public QObject
{
    Q_OBJECT
public:
    explicit QNSimpleListData(QNetworkAccessManager *networkManager,
                               QObject *parent = 0);
    void listDataToServer(const QString &bucket);

signals:
private slots:
    void receiveDataFromServer();
    void handleError(QNetworkReply::NetworkError error);

private:
    QNetworkAccessManager *m_networkManager;

};

#endif // QNSIMPLELISTDATA_H
