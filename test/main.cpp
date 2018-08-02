#include "test.h"
#include <QtWidgets/QApplication>
#include<iostream>
#include <ctime>  
#include <cstdlib>  

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test w;
	w.show();
	return a.exec();
}