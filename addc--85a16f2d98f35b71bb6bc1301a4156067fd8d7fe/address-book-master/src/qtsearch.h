/*#ifndef SEARCH_H
#define SEARCH_H

#ifndef SEARCHLOG_H
#define SEARCHLOG_H
//#include "qtsearch"

class QLineEdit;
class QPushButton;

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    SearchDialog(QWidget *parent = 0);
    QString getFindText();

public slots:
    void findClicked();

private:
    QPushButton *searchButton;
    QLineEdit *lineEdit;
    QString searchText;
};
#endif  SEARCH_H*/
