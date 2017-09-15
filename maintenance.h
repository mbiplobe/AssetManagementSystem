#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include<date.h>
#include<string>
using std::string;

class Maintenance
{
public:
    Maintenance(const string &id,const string &name,const Date &date);

     string assetId() const;

     string personNumber() const;

     Date serviceDate() const;


private:
    string _id;
     string _personName;
     Date _serviceDate;
};
#endif // MAINTENANCE_H
