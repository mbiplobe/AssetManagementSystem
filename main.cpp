#include <QCoreApplication>
#include<iostream>
#include<date.h>
#include<asset.h>
#include<string.h>
#include<custodian.h>
#include<computer.h>
#include<hmd.h>
#include<phone.h>
#include<television.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    Asset(const string &id, const string &brand, const string &model,
//    double purchasePrice, const Date &purchaseDate);

//    Date date;
//    Asset asset("540","RANG","SEL",152.30,date.currentDate());

//    std::cout<<asset.id()+"";

    Date date;



//    Custodian(const string &name, const string &department, const int &phnNum, const Date &employmentStartDate);
//    Custodian custodian("Rasel","CSE",1756,date.currentDate());

//    std::cout<<custodian.name();

//    Computer(const std::string &id, const std::string &brand, const std::string &model,
//             double purchasePrice, const Date &purchaseDate, const std::string &serial,
//             const std::string &operatingSystem);

//    Custodian custodian("Rasel","CSE",1756,date.currentDate());
//   Computer computer("354","DEL","EL-04",150.2,date.currentDate(),"12458FD","Windows");
//   computer.setNetworkIdentifier("SHAHHAH");
//   computer.setCustodian(custodian);

//   std::cout<<computer.custodian().department()+" "+computer.networkIdentifier()+" "+computer.model();



//    HMD(const string &id, const string &brand, const string &model,
//        double purchasePrice, const Date &purchaseDate, const string &serialNumber);

//     Custodian custodian("Rasel","CSE",1756,date.currentDate());
//       HMD hmd("354","DEL","EL-04",150.2,date.currentDate(),"12458FD");
//       hmd.setCustodian(custodian);

//       std::cout<<hmd.custodian().department()+" "+hmd.serialNumber()+" "+hmd.model();



//    Phone(const string &id, const string &brand, const string &model, double purchasePrice,
//          const Date &purchaseDate, const string &serialNumber, const string &operatingSystem,
//          const string phoneNumber, const string boildIdentifier);


//        Custodian custodian("Rasel","CSE",1756,date.currentDate());
//        Phone phone("354","DEL","EL-04",150.2,date.currentDate(),"12458FD","S","01","DF");
//        phone.setCustodian(custodian);
//         std::cout<<phone.custodian().department();


//    Television(const string &id, const string &brand, const string &model, double purchasePrice,
//               const Date &purchaseDate, const string &serialNumber, const string &location);
    Custodian custodian("Rasel","CSE",1756,date.currentDate());
    Television television("354","DEL","EL-04",150.2,date.currentDate(),"12458FD","Dhaka");
    television.setCustodian(custodian);
     std::cout<<television.custodian().department()+""+television.location();

    return a.exec();
}
