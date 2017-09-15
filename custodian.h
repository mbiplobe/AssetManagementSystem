#ifndef CUSTODIAN_H
#define CUSTODIAN_H
#include "date.h"
#include<string>
using std::string;

class Custodian
{
public:
    Custodian(const string &name, const string &department, const int &phnNum, const Date &employmentStartDate);

    Custodian();

    string name() const;

    string department() const;

    int phnNum() const;

    Date employmentStartDate() const;

private:
    string _name;
    string _department;
    int _phnNum;
    Date _employmentStartDate;
};

#endif // CUSTODIAN_H

