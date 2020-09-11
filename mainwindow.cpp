#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPainter>
#include <QPixmap>
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow),
	m_background( ":/resources/background.png" )
{
	ui->setupUi(this);
//	LoadPermAdhesionsCSV();
}

MainWindow::~MainWindow()
{
	delete ui;
}
/*
class TestModel : public QAbstractTableModel
{
		Q_OBJECT

public:
		TestModel(QObject *parent = 0);

		void populateData(const QList<QString> &contactName,const QList<QString> &contactPhone);

		int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
		int columnCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;

		QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
		QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;

private:
		QList<QString> tm_contact_name;
		QList<QString> tm_contact_phone;

};*/

void MainWindow::LoadPermAdhesionsCSV( QByteArray & _adhesionDatas )
{
	QString csv;
	csv.fromUtf8( _adhesionDatas );
	QStringList lines = csv.split("\n");
//	ui->tableur->setModel( );
}

void MainWindow::paintEvent(QPaintEvent * _pe) {
	QPainter paint(this);
	int widWidth = width();
	int widHeight = height();
	QPixmap scaledPixmap = m_background.scaled(widWidth, widHeight, Qt::KeepAspectRatioByExpanding);
	paint.drawPixmap(0, 0, scaledPixmap);
}
