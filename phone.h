#ifndef PHONE_H
#define PHONE_H
#include<asset.h>
#include <string>
#include "custodian.h"

using std::string;

class Phone : public Asset{
public:

    Phone(const string &id, const string &brand, const string &model,
           double purchasePrice, const Date &purchaseDate, const string &serial,const string &operatingSystem,
          const string &phoneNumber, const string &buildIdentifier);

    string serialNumber() const;

    string operatingSystem() const;

    string phoneNumber() const;

    string buildIdentifier() const;

    Custodian custodian() const;

    void setCustodian(const Custodian &custodian);

private:
    string _serialNumber;       /**< an unique serial number for the phn */
    string _operatingSystem;    /**< operating system of the phone */
    string _phoneNumber;        /**< Phone number */
    string _buildIdentifier;    /**< this is to identify the builder of the phone */
    Custodian _custodian;       /**< Each phone needs a custodean */
};

#endif // PHONE_H
