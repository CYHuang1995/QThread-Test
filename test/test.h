#ifndef TEST_H
#define TEST_H

#include <QtWidgets/QMainWindow>
#include "ui_test.h"
#include <QThread>
#include <QMutex>
#include "QThreadUser.h"


//class mythread : public qthread
//{
//	q_object
//public:
//	mythread(int num);
//
//private:
//	bool threadstop;
//	double str=0;
//	int number;
//	qmutex mutex;
//
//public:
//	void stop();
//	//void run();
//protected:
//	void run();
//
//};

class test : public QMainWindow
{
	Q_OBJECT

public:
	test(QWidget *parent = 0);
	~test();

	MyThread  *thread1;
	MyThread  *thread2;


private slots:
    void btn_start();
    void btn_stop();
    void btn_isRunning();
 

private:
	Ui::testClass ui;
	bool isRuning=false;

public slots:
    void UpdateSlot(QString qs);

};


#endif // TEST_H