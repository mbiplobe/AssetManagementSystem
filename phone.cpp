#include "phone.h"
using std::string;



Phone::Phone(const string &id, const string &brand, const string &model,
       double purchasePrice, const Date &purchaseDate, const string &serial,const string &operatingSystem,
             const string &phoneNumber, const string &buildIdentifier)
    : Asset{id, brand, model, purchasePrice, purchaseDate},
        _serialNumber(serial),_operatingSystem(operatingSystem),_phoneNumber(phoneNumber),_buildIdentifier(buildIdentifier)
{

}


string Phone::serialNumber() const
{
    return _serialNumber;
}

string Phone::operatingSystem() const
{
    return _operatingSystem;
}

string Phone::phoneNumber() const
{
    return _phoneNumber;
}

string Phone::buildIdentifier() const
{
    return _buildIdentifier;
}

Custodian Phone::custodian() const
{
    return _custodian;
}

void Phone::setCustodian(const Custodian &custodian)
{
    _custodian=custodian;
}
