#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        cityField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())


{
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:pink' color='black'>* First Name</font>", firstNameField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:pink' color='black'>* Last Name</font>", lastNameField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:pink' color='black'>Address</font>", addressField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:pink' color='black'>City</font>", cityField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:pink' color='black'>* Phone Number</font>", phoneNumberField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:pink' color='black'>Email</font>", emailField);

}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    cityField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");


}



