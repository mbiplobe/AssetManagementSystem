#include "television.h"
using std::string;

Television::Television(const std::string &id, const std::string &brand, const std::string &model,
                       double purchasePrice, const Date &purchaseDate, const std::string &serialNumber,
                       const std::string &location)
            : Asset{id, brand, model, purchasePrice, purchaseDate},
            _serialNumber(serialNumber),_location(location)
{

}

string Television::serialNumber() const
{
    return _serialNumber;
}

string Television::location() const
{
    return _location;
}

Custodian Television::custodian() const
{
    return _custodian;
}

void Television::setCustodian(const Custodian &custodian)
{
    _custodian=custodian;
}
