#include<maintenance.h>
using std::string;

Maintenance::Maintenance(const string &id,const string &name,const Date &date)
    :_id(id),_personName(name),_serviceDate(date)
{

}

string Maintenance::assetId() const{
    return _id;
}

string Maintenance::personNumber() const{
    return _personName;
}

Date Maintenance::serviceDate() const{
    return _serviceDate;
}
