#include "qt_project1.h"
#include "./ui_qt_project1.h"

qt_project1::qt_project1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::qt_project1)
{
    ui->setupUi(this);

    this->setWindowTitle("samp2_4");


    developerLabel = new QLabel("开发人员：叶礼铭", this);
    developerLabel->setGeometry(50, 50, 200, 30);
    developerLabel->setStyleSheet("font-size: 14px; font-weight: bold;");


    okButton = new QPushButton("OK", this);
    okButton->setGeometry(width() - 100, height() - 70, 80, 30);
    okButton->setStyleSheet("QPushButton { background-color: #4CAF50; color: white; border-radius: 5px; }");


    connect(okButton, &QPushButton::clicked, this, &qt_project1::onOkButtonClicked);
}

qt_project1::~qt_project1()
{
    delete ui;
}

void qt_project1::onOkButtonClicked()
{

    QMessageBox::about(this, "关于",
                       "姓名: 叶礼铭\n"
                       "学号: 2023414290332\n"
                       "班级: 23级软件3班\n" );
}

