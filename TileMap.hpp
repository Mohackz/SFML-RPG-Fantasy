#ifndef INCLUDE_TILEMAP_HPP
#define INCLUDE_TILEMAP_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

namespace zt
{
    typedef std::vector<std::vector<sf::Vector2u> > Tab2D;

    class TileMap : public sf::Drawable
    {
    public:
        TileMap();
        TileMap(const std::string& mapPath);
        bool loadMap(const std::string& mapPath);
        sf::Vector2u getSize();
    private:
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
        {
            states.texture = &_tileset;
            target.draw(_vertices, states);
        }
    protected:
        void fillMap();
        Tab2D _map;
        std::string _fileMapPath , _tilesetPath ;
        sf::Vector2i _tileSize;
        sf::Vector2u _tileCount;
        sf::Texture _tileset;
        sf::VertexArray _vertices;
    };
    class Editor : public TileMap
    {
    public:
        Editor();
        Editor(const std::string& mapPath);
        void run();
        void setExtension(const std::string& ext);
    private:
        void save();
        void init_map();
        void show_tileset();
        sf::Vector2i _posMouse;
        sf::Vector2u _currentObject;
        sf::RenderWindow _window;
        std::string m_extension;
    };
}


#endif // INCLUDE_TILEMAP_HPP
