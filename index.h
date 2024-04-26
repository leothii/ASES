#ifndef INDEX_H
#define INDEX_H

#include <QMainWindow>

namespace Ui {
class Index;
}

class Index : public QMainWindow
{
    Q_OBJECT

public:
    explicit Index(QWidget *parent = nullptr);
    ~Index();
    static Index*instance;

private slots:
    void on_backButton_clicked();
    void on_nextButton_clicked();
private:
    Ui::Index *ui;
};

#endif // INDEX_H
