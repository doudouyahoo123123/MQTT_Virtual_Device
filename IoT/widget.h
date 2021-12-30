#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mqtt/qmqtt.h"
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include "thread.h"
#include <QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pbConnectToHost_clicked();

    void on_pcSubscribeTopic_clicked();

    void on_pbUnsubscribeTopic_clicked();

    void on_pbClearRecv_clicked();

    void on_pbClearPublish_clicked();

    void on_pbPublishTopic_clicked();

    void slot_mqtt_recvived(const QMQTT::Message& msg);

    void auto_mqtt_publish();
private:
    Ui::Widget *ui;
    QMQTT::Client* m_client;
    QTimer* m_timer1s;

    Thread *thread1;

private:
    QString get_cfg_str(const QString& str);
    void config_init();

    float temperature;
    float humidity;
    int test_int;

};

#endif // WIDGET_H
