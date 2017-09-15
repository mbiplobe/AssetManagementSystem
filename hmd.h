#ifndef HMD_H
#define HMD_H
#include "asset.h"
#include "custodian.h"
#include <string>
using std::string;

class HMD : public Asset
{
public:
    HMD(const string &id, const string &brand, const string &model,
        double purchasePrice, const Date &purchaseDate, const string &serialNumber);

    string serialNumber() const;

    Custodian custodian() const;

    void setCustodian(const Custodian &custodian);

private:
    string _serialNumber;       /**< an unique serial number for HDM */
     Custodian _custodian;          /**< custodian for HDM*/
};

#endif // HMD_H
