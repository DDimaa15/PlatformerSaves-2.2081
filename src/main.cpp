#if defined(GEODE_IS_WINDOWS)
#include <Geode/Geode.hpp>
#include <sabe.persistenceapi/include/PersistenceAPI.hpp>

using namespace geode::prelude;
using namespace persistenceAPI;

#include <geode.custom-keybinds/include/Keybinds.hpp>

void setupKeybinds();

$on_mod(Loaded) {
    setupKeybinds();
}

void setupKeybinds() {
    using namespace keybinds;

    BindManager::get()->registerBindable({
        "save-game"_spr,
        "Save game",
        "Hotkey for quick saving",
        { keybinds::Keybind::create(KEY_K, Modifier::None) },
        Category::PLAY,
    });
}
#endif