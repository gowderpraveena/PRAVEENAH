#include <QApplication>
#include <QtWidgets>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setFixedSize(300,200);
    QPushButton *welcomeButton = new QPushButton("welcome to Qt", &window);
    QLabel *Label1= new QLabel("ENTER YOUR NAME",&window);
    Label1->setToolTip("Tool Tip to welcome Label");
    QCommandLinkButton *command= new QCommandLinkButton("CLICK",&window);
    welcomeButton->setGeometry(10,200,100,30);
    welcomeButton->setToolTip("Tool Tip to welcome Button");
    welcomeButton->setGeometry(10,80,100,30);
    welcomeButton->setGeometry(10,10,80,30);
    window.show();
      return app.exec();
}
















































