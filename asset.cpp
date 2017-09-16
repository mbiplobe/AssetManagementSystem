#include "asset.h"
using std::string;

string Asset::id() const {
  return _id;
}

Date Asset::purchaseDate() const {
    return _purchaseDate;
}

Date Asset::disposalDate() const
{
    return _disposalDate;
}

double Asset::purchasePrice() const {
  return _purchasePrice;
}

string Asset::brand() const {
  return _brand;
}

string Asset::model() const {
  return _model;
}


Asset::Asset(const string &id, const string &brand, const string &model,
             double purchasePrice, const Date &purchaseDate)
    : _id{id}, _brand(brand), _model(model), _purchasePrice(purchasePrice), _purchaseDate(purchaseDate)  {
}






