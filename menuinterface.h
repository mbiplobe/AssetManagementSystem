#ifndef MENUITERFACE_H
#define MENUITERFACE_H
#include <iostream>
#include<custodian.h>
#include<memory>
#include<asset.h>

/**
 * @brief The MenuInterface class encapsulates all interaction with the asset management system.
 */
class MenuInterface {
public:
  MenuInterface(std::ostream &display, std::istream &input);
  /**
   * @brief displayMainMenu write the main menu to the display device.
   */
  void displayMainMenu() const;


 void displayAddAssetSubMenu() const;
 void displayAssetListSubMenu() const;
 void displayFindAssetSubMenu() const;
  void displayDisposeAssetSubMenu() const;
   void updateAssetSubMenu() const;



  /**L
   * @brief getCharacterInput get a single character input from the input device
   * and clear the buffer till the next newline character.
   * @return the character input.
   */
  char getCharacterInput() const;
  /**
   * @brief processSelection process the selection for the menu.
   * @param selection the single character selection.
   * @return true to continue the program, false to quit.
   */
  bool processSelection(char selection);
   bool addAssetTypeSelection(char selection);
    bool disposeAssetSelection(char selection);
     bool updateAssetSelection(char selection);
      bool assetListSelection(char selection);
       bool findAssetSelection(char selection);
        bool backMainMenuSelection(char selection);
       void displayAssetList(std::shared_ptr<Asset>) const;
        Custodian custodianEntry(const string &id) const;

private:
  std::ostream &_display; /**< the stream to pass all display output to */
  std::istream &_input;   /**< the stream to read all input from */

  /**
   * @brief addAsset display and process the add asset task.
   */
  void addAsset();

  /**
   * @brief disposeAsset display and process the dispose asset task.
   */
  void disposeAsset();

  /**
   * @brief updateAsset display and process the update asset custodian or location task.
   */
  void updateAsset();

  /**
   * @brief addMaintenance display and process the add asset maintenance record task.
   */
  void addMaintenance();

  /**
   * @brief listAssetsByType display and process the list assets by type task.
   */
  void listAssetsByType();

  /**
   * @brief listAssetsByCustodian display and process the list assets by custodian task.
   */
  void listAssetsByCustodian();

  /**
   * @brief findAsset display and process the find asset task.
   */
  void findAsset();

  void assetEntry(char selection);


};

#endif // MENUITERFACE_H
