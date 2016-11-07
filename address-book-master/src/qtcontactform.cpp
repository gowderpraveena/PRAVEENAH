#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        bloodgroupField(new QLineEdit())
{
    addRow("<FONT STYLE='background-color:violet;color:black;'>First Name</font>", firstNameField);
    addRow("<FONT STYLE='background-color:violet;color:black;'>Last Name</font>", lastNameField);
    addRow("<FONT STYLE='background-color:violet;color:black;'>Address</font>", addressField);
    addRow("<FONT STYLE='background-color:violet;color:black;'>Phone Number</font>", phoneNumberField);
    addRow("<FONT STYLE='background-color:violet;color:black;'>Email ID</font>", emailField);
    addRow("<FONT STYLE='background-color:violet;color:black;'>Blod Group</font>", bloodgroupField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    bloodgroupField->setText("");
}
