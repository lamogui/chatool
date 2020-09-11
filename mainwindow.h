#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

	void LoadPermAdhesionsCSV( QByteArray & _adhesionDatas );

protected slots:
	void paintEvent(QPaintEvent * _pe) override;

private:
	Ui::MainWindow *ui;
	QPixmap m_background;
};

#endif // MAINWINDOW_H
