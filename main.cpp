#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AddressBook addressBook;
    AddressBookController controller(&addressBook);
    MainWindow w(&controller);

//    std::cout << w.m_controller;


    w.show();

    return a.exec();
}
