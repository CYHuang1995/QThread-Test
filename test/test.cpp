#include "test.h"

test::test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	thread1 = new MyThread;
	//thread2 = new MyThread();
	connect(thread1, SIGNAL(UpdateSignal(QString)),
		this, SLOT(UpdateSlot(QString)));

}


void test::btn_start()
{
	//ui.textBrowser->append("[1] Thread is running");


	thread1->start();
	isRuning = true;
	ui.textBrowser->append((thread1->str));
	//thread2->start();
	/*while (isDlg)
	{
		QString message = QString::number(thread1->nx,10,4)+ \
			QString::number(thread1->ny, 10, 4)+QString::number(thread1->nz, 10, 4);
		ui.textBrowser->append(message);
	}*/
}

void test::btn_stop()
{
	isRuning = false;
	thread1->stop();
	thread2->stop();
}

void test::btn_isRunning()
{
	thread1->nx = ui.doubleSpinBox->value();
	thread1->ny = ui.doubleSpinBox_2->value();
	thread1->nz = ui.doubleSpinBox_3->value();
	ui.textBrowser->append((thread1->str));
	
}

void test::UpdateSlot(QString qs)
{
	thread1->nx = ui.doubleSpinBox->value();
	thread1->ny = ui.doubleSpinBox_2->value();
	thread1->nz = ui.doubleSpinBox_3->value();
	ui.textBrowser->append((thread1->str));
}

test::~test()
{

}