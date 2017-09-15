#include "custodian.h"
using std::string;

Custodian::Custodian(const string &name, const string &department, const int &phnNum, const Date &employmentStartDate)
    : _name(name), _department(department), _phnNum(phnNum), _employmentStartDate(employmentStartDate)
{

}

Custodian::Custodian(){

}

string Custodian::name() const
{
    return _name;
}

string Custodian::department() const
{
    return _department;
}

int Custodian::phnNum() const
{
    return _phnNum;
}

Date Custodian::employmentStartDate() const
{
    return _employmentStartDate;
}

