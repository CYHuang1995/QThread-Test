#include "QThreadUser.h"
#include <assert.h> 
#include <windows.h> 

MyThread::MyThread(QObject *parent)
{
	number = 0;
}

MyThread::~MyThread()
{

}

//MyThread::MyThread(int num)
//{
//	number = num;
//}


void MyThread::stop()
{
	threadStop = true;
	qDebug("[%d] Thread stop", number);
}


void MyThread::run()
{
	
	threadStop = false;
	int i = 0;
	while (!threadStop)
	{
		mutex.lock();
		/*nx = +1;
		ny = +1;
		nz = +1;*/
		
		str = QString::number((nx+ny+nz),'f',1);
		emit UpdateSignal(str);
		i++;
		sleep(1);
		mutex.unlock();
	}
	i = 12;
	i = 13;
}
