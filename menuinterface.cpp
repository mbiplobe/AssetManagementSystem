#include "menuinterface.h"
#include "assetregister.h"
#include <limits>
#include<iostream>
#include<computer.h>
#include<phone.h>
#include<television.h>
#include<hmd.h>
#include <memory>
#include<vector>
#include<ostream>
#include<maintenance.h>

MenuInterface::MenuInterface(std::ostream &display, std::istream &input)
    : _display{display}, _input{input} {
}

void MenuInterface::displayMainMenu() const {
  _display << "What would you like to do?" << std::endl;
  _display << " (a)dd an asset" << std::endl;
  _display << " (d)ispose an asset" << std::endl;
  _display << " (u)pdate asset custodian or location" << std::endl;
  _display << " (m)aintenance record" << std::endl;
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
  case 'a':{
    addAsset();
    break;
  }
  case 'd':{
    disposeAsset();
    break;
  }

  case 'u':{
    updateAsset();
    break;
  }

  case 'm':
  {
   addMaintenance ();
    break;
  }

  case 'l':{
    listAssetsByType();
    break;
  }
  case 'c':{
    listAssetsByCustodian();
    break;
  }
  case 'f':{
    findAsset();
    break;}
  case 'q':{
    return false;
  }
  default:{
    _display << "Sorry, \'" << selection << "\' is not a valid option, please try again."
             << std::endl;
  displayMainMenu();
  }
  }
  return true;
}

bool MenuInterface::addAssetTypeSelection(char selection) {
  switch (selection) {
  case 'c':
  {
      assetEntry('c');
      break;
  }


  case 'p':
  {
      assetEntry('p');
    break;
  }

  case 't':
  {
    assetEntry('t');
    break;
 }

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
    _display<<"Add Maintenance Record : "<<std::endl;

    std::string assetId;
    std::string serviceProvider;
     Date serviceDate(30, Date::June, 2015);

    _display<<"Asset Id : ";
    std::getline (_input,assetId);
    _display << std::endl;

    _display<<"Service Provider Name : ";
    std::getline (_input,serviceProvider);
    _display << std::endl;

    Maintenance maintenance(assetId,serviceProvider,serviceDate);
    AssetRegister &am = AssetRegister::instance();
    am.storeServiceRecord(std::make_shared<Maintenance>(maintenance));



    if(am.storeServiceRecord(std::make_shared<Maintenance>(maintenance))){
         _display <<"Service Record save Successfully"<< std::endl;
          displayMainMenu();
     }else{
         _display <<"Sorry try again"<< std::endl;
         displayMainMenu();
    }

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

   std::string assetId;
   std::string assetBrand;
   std::string assetModel;
   double purchasePrice ;
    Date parchessDate(15, Date::June, 2014);

    _display<<"Enter Asset Details : "<<std::endl;

    _display<<"Id : ";
    std::getline (_input,assetId);
    _display << std::endl;

    _display<<"Brand Name : ";
    std::getline (_input,assetBrand);
    _display << std::endl;

    _display<<"Model Name : ";
    std::getline (_input,assetModel);
    _display << std::endl;

    _display<<"Price : ";
     _input>>purchasePrice;
    _display << std::endl;


    switch(assetType){
    case 'c':
    {
       std::string serialNumber;
       std::string operatingSystem;
       std::string networkIdentifier;

       _display<<"Operating System : ";
        std::getline (_input,operatingSystem);
       _display << std::endl;

       _display<<"Serial Number : ";
        std::getline (_input,serialNumber);
       _display << std::endl;


       _display<<"Network Identifier : ";
        std::getline (_input,networkIdentifier);
       _display << std::endl;



       Computer computer(assetId,assetBrand,assetModel,purchasePrice,parchessDate,serialNumber,operatingSystem);
       computer.setNetworkIdentifier(networkIdentifier);
       computer.setCustodian(custodianEntry());

       AssetRegister &am = AssetRegister::instance();
       if(am.storeAsset(std::make_shared<Computer>(computer))){
            _display <<"Asset Information Save Successfully"<< std::endl;
             displayMainMenu();
        }else{
            _display <<"Sorry try again"<< std::endl;
            displayAddAssetSubMenu();
       }

      break;
    }

    case 'p':
    {
        std::string serialNumber;
        std::string operatingSystem;
        std::string phoneNumber;
        std::string billingIdentifier;

        _display<<"Operating System : ";
         std::getline (_input,operatingSystem);
        _display << std::endl;

        _display<<"Serial Number : ";
         std::getline (_input,serialNumber);
        _display << std::endl;


        _display<<"Phone Number : ";
         std::getline (_input,phoneNumber);
        _display << std::endl;

        _display<<"Billing Identifier : ";
         std::getline (_input,billingIdentifier);
        _display << std::endl;


        Phone phone(assetId,assetBrand,assetModel,purchasePrice,parchessDate,serialNumber,operatingSystem,phoneNumber,billingIdentifier);
        phone.setCustodian(custodianEntry());


        AssetRegister &am = AssetRegister::instance();
        if(am.storeAsset(std::make_shared<Phone>(phone))){
             _display <<"Asset Information Save Successfully"<< std::endl;
              displayMainMenu();
         }else{
             _display <<"Sorry try again"<< std::endl;
             displayAddAssetSubMenu();
        }
       break;
    }

    case 't':
    {
        std::string serialNumber;
        std::string location;

        _display<<"Serial Number : ";
         std::getline (_input,serialNumber);
        _display << std::endl;


        _display<<"Location : ";
         std::getline (_input,location);
        _display << std::endl;



        Television television(assetId,assetBrand,assetModel,purchasePrice,parchessDate,serialNumber,location);



        AssetRegister &am = AssetRegister::instance();
        if(am.storeAsset(std::make_shared<Television>(television))){
             _display <<"Asset Information Save Successfully"<< std::endl;
              displayMainMenu();
         }else{
             _display <<"Sorry try again"<< std::endl;
             displayAddAssetSubMenu();
        }
       break;
      break;

    }
    case 'b':{
         displayMainMenu();
        break;
    }

    default:{
         _display <<"Sorry try again"<< std::endl;
        displayAddAssetSubMenu();
    }

    }

}

Custodian MenuInterface::custodianEntry() const{

    std::string custodianName;
    std::string custodianDepartment;
    int custodianPhone;

    _display<<"Custodian Name: ";
    std::getline (_input,custodianName);
    _display << std::endl;

    _display<<"Custodian Department: ";
    std::getline (_input,custodianDepartment);
    _display << std::endl;

    _display<<"Custodian Phone Number: ";
    _input>>custodianPhone;
    _display << std::endl;

      Date employmentDate(7, Date::May, 2012);


       Custodian custodian(custodianName,custodianDepartment,custodianPhone,employmentDate);

       return custodian;
}





