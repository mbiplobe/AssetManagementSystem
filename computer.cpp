#include "computer.h"
#include "custodian.h"

using std::string;

Computer::Computer(const string &id, const string &brand, const string &model,
                   double purchasePrice, const Date &purchaseDate, const string &serial,
                   const string &operatingSystem)
    : Asset{id, brand, model, purchasePrice, purchaseDate},
        _serialNumber(serial), _operatingSystem(operatingSystem)
{
}

void Computer::setNetworkIdentifier(const string &networkIdentifier)
{
    _networkIdentifier=networkIdentifier;
}
void Computer::setCustodian(const Custodian &custodian)
{
    _custodian=custodian;
}

string Computer::serialNumber() const
{
    return _serialNumber;
}

string Computer::operatingSystem() const
{
    return _operatingSystem;
}

string Computer::networkIdentifier() const
{
    return _networkIdentifier;
}

Custodian Computer::custodian() const
{
    return _custodian;
}
