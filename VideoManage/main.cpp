#include "VideoManage.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VideoManage w;
	w.show();
	return a.exec();
}
