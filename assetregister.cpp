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

AssetRegister::AssetRegister() {
}
