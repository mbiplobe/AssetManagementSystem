#include "menuinterface.h"
#include "assetregister.h"
#include <limits>
#include<iostream>
#include<computer.h>
#include<phone.h>
#include<television.h>
#include<hmd.h>

MenuInterface::MenuInterface(std::ostream &display, std::istream &input)
    : _display{display}, _input{input} {
}

void MenuInterface::displayMainMenu() const {
  _display << "What would you like to do?" << std::endl;
  _display << " (a)dd an asset" << std::endl;
  _display << " (d)ispose an asset" << std::endl;
  _display << " (l)ist assets by type" << std::endl;
  _display << " List assets by (c)ustodian" << std::endl;
  _display << " (f)ind asset" << std::endl;
  _display << " (q)uit" << std::endl;
}

void MenuInterface::updateAssetSubMenu() const {
  _display << "What would you want to update?" << std::endl;
  _display << " update asset (c)ustodian" << std::endl;
  _display << "update (l)ocation " << std::endl;
   _display << " (b)ack to main menu" << std::endl;
}

void MenuInterface::displayDisposeAssetSubMenu() const {
  _display << "Asset Id" << std::endl;
  _display << " Brand:" << std::endl;
  _display << " Model:" << std::endl;
  _display << " Purchase Price" << std::endl;
  _display << " Purchase Date" << std::endl;
  _display << " Disposal Date" << std::endl;
  _display << " Depreciated Value" << std::endl;
   _display << " Last Maintenance" << std::endl;

   _display << " (m)aintenance history" << std::endl;
   _display << " (b)ack to main menu" << std::endl;
}

void MenuInterface::displayAddAssetSubMenu() const {
  _display << "Add an asset" << std::endl;
  _display << " add a (c)omputer" << std::endl;
  _display << " add a (p)hone" << std::endl;
  _display << " add a (t)elevision" << std::endl;
  _display << " (b)ack to main menu" << std::endl;
}

void MenuInterface::displayAssetListSubMenu() const {
  _display << "List assets by type" << std::endl;
  _display << " list (a)ll assets" << std::endl;
  _display << " list (c)omputers" << std::endl;
  _display << " list (p)hones" << std::endl;
  _display << " list (t)elevisions" << std::endl;
   _display << " (b)ack to main menu" << std::endl;
}

void MenuInterface::displayFindAssetSubMenu() const {
  _display << "Find asset" << std::endl;
  _display << " search by (a)sset id" << std::endl;
  _display << " search by (s)erial" << std::endl;
  _display << " (b)ack to main menu" << std::endl;
}


char MenuInterface::getCharacterInput() const {
  char input;
  _input >> input;
  _input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  return input;
}

bool MenuInterface::processSelection(char selection) {
  switch (selection) {
  case 'a':
    addAsset();
    break;
  case 'd':
    disposeAsset();
    break;
  case 'l':
    listAssetsByType();
    break;
  case 'c':
    listAssetsByCustodian();
    break;
  case 'f':
    findAsset();
    break;
  case 'q':
    return false;
  default:
    _display << "Sorry, \'" << selection << "\' is not a valid option, please try again."
             << std::endl;
  }
  return true;
}

bool MenuInterface::addAssetTypeSelection(char selection) {
  switch (selection) {
  case 'c':{
          break;
  }


  case 'p':{
    break;}

  case 't':{
    break;}

  case 'b':{
    displayMainMenu();
    break;}

  default:{
    _display << "Sorry, \'" << selection << "\' is not a valid option, please try again."
             << std::endl;
    return false;
  }
  }
  return true;
}

bool MenuInterface::disposeAssetSelection(char selection) {
  switch (selection) {
  case 'm':
    break;

  case 'b':
    displayMainMenu();
    break;
  default:
    _display << "Sorry, \'" << selection << "\' is not a valid option, please try again."
             << std::endl;
    return false;
  }
  return true;
}

bool MenuInterface::updateAssetSelection(char selection) {
  switch (selection) {
  case 'c':{
    break;}
  case 'l':{
    break;}
  case 'b':{
    displayMainMenu();
    break;}
  default:{
    _display << "Sorry, \'" << selection << "\' is not a valid option, please try again."
             << std::endl;
    return false;
  }
  }
  return true;
}

bool MenuInterface::assetListSelection(char selection) {
  switch (selection) {
  case 'a':
  {
    break;
  }
  case 'c':
  {
    break;
  }
  case 'p':
  {
    break;
  }
  case 'b':
  {
    displayMainMenu();
    break;
  }
  default:
  {
    _display << "Sorry, \'" << selection << "\' is not a valid option, please try again."
             << std::endl;
    return false;
  }
 }
  return true;
}

bool MenuInterface::findAssetSelection(char selection) {
  switch (selection) {
  case 'a':
  {
    break;
  }
  case 's':
  {
    break;
  }
  case 'b':
  {
    displayMainMenu();
    break;
  }
  default:
  {
    _display << "Sorry, \'" << selection << "\' is not a valid option, please try again."
             << std::endl;
    return false;
  }
 }
  return true;
}


void MenuInterface::addAsset() {
displayAddAssetSubMenu();
if(!addAssetTypeSelection(getCharacterInput())){
    displayAddAssetSubMenu();
}

}

void MenuInterface::disposeAsset() {
  // TODO: implement this member function.
    displayDisposeAssetSubMenu();
    if(!disposeAssetSelection(getCharacterInput())){
         displayDisposeAssetSubMenu();
    }

}

void MenuInterface::updateAsset() {
  // TODO: implement this member function.
    updateAssetSubMenu();

    if(!updateAssetSelection(getCharacterInput())){
        updateAssetSubMenu();
    }
}

void MenuInterface::addMaintenance() {
  // TODO: implement this member function.
}

void MenuInterface::listAssetsByType() {
  // TODO: implement this member function.
    displayAssetListSubMenu();
    if(!assetListSelection(getCharacterInput())){
         displayAssetListSubMenu();
    }
}

void MenuInterface::listAssetsByCustodian() {
  // TODO: implement this member function.

}

void MenuInterface::findAsset() {
  // TODO: implement this member function.
    displayFindAssetSubMenu();
    if(!findAssetSelection(getCharacterInput())){
         displayFindAssetSubMenu();
    }
}

void MenuInterface::assetEntry(char assetType){

//    Asset(const string &id, const string &brand, const string &model,
//       double purchasePrice, const Date &purchaseDate);

//   std::string assetId;
//   std::string assetBrand;
//   std::string assetModel;
//   double purchasePrice ;

////    Asset asset("540","RANG","SEL",152.30,date.currentDate());

//    _display<<"Id : ";
//    std::getline (_input,assetId);
//    _display << std::endl;

//    _display<<"Brand Name : ";
//    std::getline (_input,assetBrand);
//    _display << std::endl;

//    _display<<"Model Name : ";
//    std::getline (_input,assetModel);
//    _display << std::endl;

//    _display<<"Price : ";
//   _input>>purchasePrice;
//    _display << std::endl;

//    switch(assetType){
//    case 'c':
//        _display<<"Price : ";
//       _input>>purchasePrice;
//        _display << std::endl;

//      break;

//    case 'p':

//      break;
//    case 't':

//      break;
//    case 'd':
//    }


//    _display<<"Brand Name : ";
//    std::getline (_input,assetId);
//    _display << std::endl;


    switch (assetType) {
    case 'c':

      break;
    case 'p':

      break;
    case 't':
      break;

    default:
        break;
    }




}



