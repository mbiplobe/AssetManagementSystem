#include "custodian.h"
using std::string;

Custodian::Custodian(const string &assetId,const string &name, const string &department, const int &phnNum, const Date &employmentStartDate)
    : _assetId(assetId),_name(name), _department(department), _phnNum(phnNum), _employmentStartDate(employmentStartDate)
{

}

Custodian::Custodian(){

}

string Custodian::name() const
{
    return _name;
}

string Custodian::getAssetId() const
{
    return _assetId;
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

