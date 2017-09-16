#include "assetregister.h"

AssetRegister &AssetRegister::instance() {
  static AssetRegister s_instance;
  return s_instance;
}

std::shared_ptr<Asset> AssetRegister::retrieveAsset(const std::string &assetId) {
  auto assetIt = _assets.find(assetId);
  if (assetIt != _assets.end()) {
    return assetIt->second;
  }
  return nullptr;
}

std::shared_ptr<Maintenance> AssetRegister::retrieveServiceRecord(const std::string &assetId) {
  auto assetIt = _serviceRecords.find(assetId);
  if (assetIt != _serviceRecords.end()) {
    return assetIt->second;
  }
  return nullptr;
}
std::shared_ptr<Custodian> AssetRegister::retrieveCustodian(const std::string &assetId) {
  auto assetIt = _custodianRecords.find(assetId);
  if (assetIt != _custodianRecords.end()) {
    return assetIt->second;
  }
  return nullptr;
}

std::shared_ptr<std::string> AssetRegister::retrieveLocation(const std::string &assetId) {
  auto assetIt = _locationRecords.find(assetId);
  if (assetIt != _locationRecords.end()) {
    return assetIt->second;
  }
  return nullptr;
}

bool AssetRegister::storeAsset(std::shared_ptr<Asset> asset) {
  if (!_assets.count(asset->id())) {
    _assets[asset->id()] = std::shared_ptr<Asset>{asset};
    return true;
  }
  return false;
}

bool AssetRegister::storeServiceRecord(std::shared_ptr<Maintenance> serviceRecord) {
  if (!_serviceRecords.count(serviceRecord->assetId())) {
    _serviceRecords[serviceRecord->assetId()] = std::shared_ptr<Maintenance>{serviceRecord};
    return true;
  }
  return false;
}

bool AssetRegister::storeCustodianRecord(std::shared_ptr<Custodian> custodianRecord) {
  if (!_custodianRecords.count(custodianRecord->getAssetId())) {
    _custodianRecords[custodianRecord->getAssetId()] = std::shared_ptr<Custodian>{custodianRecord};
    return true;
  }
  return false;
}

bool AssetRegister::updateCustodianRecord(std::shared_ptr<Custodian> custodianRecord) {
   _custodianRecords[custodianRecord->getAssetId()] = std::shared_ptr<Custodian>{custodianRecord};
  return true;
}

//bool AssetRegister::storeLocationRecord(std::shared_ptr<std::string> locationRecord,std::shared_ptr<std::string> assetId) {
//  if (!_locationRecords.count(assetId)) {
//    _locationRecords[assetId] = std::shared_ptr<std::string>{locationRecord};
//    return true;
//  }
//  return false;
//}

AssetRegister::AssetRegister() {
}
