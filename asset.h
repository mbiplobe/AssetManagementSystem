#ifndef ASSET_H
#define ASSET_H
#include <string>
#include<date.h>
using std::string;
class Asset
{
public:
    string id() const;
     Date disposalDate() const;
     string brand() const;
     string model() const;
     double purchasePrice() const;
     Date purchaseDate() const;


     Asset(const string &id, const string &brand, const string &model,
     double purchasePrice, const Date &purchaseDate);




//protected:


private:
     string _id;
     Date _purchaseDate;
     Date _disposalDate;
     string _brand;
     string _model;
     double _purchasePrice;
     char _type;

};



#endif // ASSET_H
