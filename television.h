#ifndef TELEVISION_H
#define TELEVISION_H
#include "asset.h"
#include<custodian.h>
#include <string>

using std::string;

class Television : public Asset
{
public:
    Television(const string &id, const string &brand, const string &model, double purchasePrice,
               const Date &purchaseDate, const string &serialNumber, const string &location);

    string serialNumber() const;
    Custodian custodian() const;

    void setCustodian(const Custodian &custodian);

    string location() const;

private:
    string _serialNumber;        /**< an unique serial number for the television */
    string _location;
    Custodian _custodian;   /**< to locate where the televion is */
};

#endif // TELEVISION_H
