#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VideoManage.h"

class VideoManage : public QMainWindow
{
	Q_OBJECT

public:
	VideoManage(QWidget *parent = Q_NULLPTR);

private:
	Ui::VideoManageClass ui;
};
