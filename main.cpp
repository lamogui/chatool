#include "mainwindow.h"
#include <QApplication>

#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QFile f(":/resources/style.qss");
	f.open(QFile::ReadOnly | QFile::Text);
	QTextStream ts(&f);
	QString g_generalWidgetStyleSheet = ts.readAll();
	a.setStyleSheet( g_generalWidgetStyleSheet );

	MainWindow w;
	w.show();

	return a.exec();
}
