#pragma once
#include <QThread>
#include <QMutex>
#include <qstring.h>
#include <QtGui> 
#include <QtCore> 

class MyThread : public QThread
{
	Q_OBJECT
public:
	MyThread(QObject *parent = 0);
	~MyThread();
	//MyThread(int num);
    QString str = "abc";
	double nx = 0.0;
	double ny = 0.0;
	double nz = 0.0;
	double sum;
	void stop();
	//void run();
private:
	bool threadStop;
	
	
	int number;
	QMutex mutex;

protected:
	void run();

signals:
	void UpdateSignal(QString qs);


};