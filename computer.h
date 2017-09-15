#ifndef COMPUTER_H
#define COMPUTER_H
#include<asset.h>
#include<string>
#include<custodian.h>
using std::string;

class Computer : public Asset {
public:
  Computer(const string &id, const string &brand, const string &model,
           double purchasePrice, const Date &purchaseDate, const string &serial,
           const string &operatingSystem);

  string serialNumber() const;

  string operatingSystem() const;

  string networkIdentifier() const;

  Custodian custodian() const;

  void setNetworkIdentifier(const std::string &networkIdentifier);

  void setCustodian(const Custodian &custodian);

private:
  string _serialNumber;
  string _operatingSystem;
  string _networkIdentifier;
  Custodian _custodian;
};

#endif // COMPUTER_H
