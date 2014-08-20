#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <SFML/Graphics.hpp>

#include "Map.hpp"
#include "TileMap.hpp"
#include "Entity.hpp"

class Game
{
public :

    Game();
    void run();
    void runEditor(const std::string& initialMap = "Maps/test_2.lvl");// cette fonction permet de lancer l'editeur
    /**Attention : Cette fonction ne peut pas etre lancer en paralelle avec run() ( c'est soit afficher l'editeur
    soit le fentre du jeu ;) si je veut lancer l'editeur Exemple :
    #include <SFML/Graphics.hpp>
    #include "Game.hpp"

    int main()
    {
        Game game;
        game.runEditor();

    return 0;
    }
    **/
    void handlePlayerInput(sf::Keyboard key, bool isPressed);

private :

    void processEvents();
    void update(sf::Time);
    void render();

private :
    sf::RenderWindow mWindow;
    zt::TileMap mMap;
    zt::Editor mEditor;
};

#endif // GAME_HPP_INCLUDED
