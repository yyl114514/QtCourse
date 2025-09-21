#ifndef QT_PROJECT1_H
#define QT_PROJECT1_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class qt_project1;
}
QT_END_NAMESPACE

class qt_project1 : public QMainWindow
{
    Q_OBJECT

public:
    qt_project1(QWidget *parent = nullptr);
    ~qt_project1();

private slots:
    void onOkButtonClicked();

private:
    Ui::qt_project1 *ui;
    QLabel *developerLabel;
    QPushButton *okButton;
};
#endif // QT_PROJECT1_H
