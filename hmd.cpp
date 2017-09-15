#include "hmd.h"
using std::string;

HMD::HMD(const string &id, const string &brand, const string &model,
         double purchasePrice, const Date &purchaseDate, const string &serialNumber)
    : Asset{id, brand, model, purchasePrice, purchaseDate},
        _serialNumber(serialNumber)
{

}

void HMD::setCustodian(const Custodian &custodian)
{
    _custodian=custodian;
}

string HMD::serialNumber() const
{
    return _serialNumber;
}

Custodian HMD::custodian() const
{
    return _custodian;
}
