#include "widgets.hpp"

#include <MyGUI_FactoryManager.h>

#include "list.hpp"
#include "numericeditbox.hpp"
#include "box.hpp"
#include "imagebutton.hpp"
#include "sharedstatebutton.hpp"

namespace Gui
{

    void registerAllWidgets()
    {
        MyGUI::FactoryManager::getInstance().registerFactory<Gui::MWList>("Widget");
        MyGUI::FactoryManager::getInstance().registerFactory<Gui::HBox>("Widget");
        MyGUI::FactoryManager::getInstance().registerFactory<Gui::VBox>("Widget");
        MyGUI::FactoryManager::getInstance().registerFactory<Gui::AutoSizedTextBox>("Widget");
        MyGUI::FactoryManager::getInstance().registerFactory<Gui::AutoSizedEditBox>("Widget");
        MyGUI::FactoryManager::getInstance().registerFactory<Gui::AutoSizedButton>("Widget");
        MyGUI::FactoryManager::getInstance().registerFactory<Gui::ImageButton>("Widget");
        MyGUI::FactoryManager::getInstance().registerFactory<Gui::NumericEditBox>("Widget");
        MyGUI::FactoryManager::getInstance().registerFactory<Gui::SharedStateButton>("Widget");
    }

}
