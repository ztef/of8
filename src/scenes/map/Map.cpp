#include "Map.h"

Map::Map() {
    
}

void Map::setup(){

}


void Map::Load(string url){
    tileLoaders.push_back(move(unique_ptr<TileLoader>(new TileLoader)));
    tileLoaders.back()->load(url);
}


void Map::update(){
    for(int i=0;i<tileLoaders.size();i++){
        if(tileLoaders[i]->loaded){
            if(tiles.size()<=i) tiles.resize(i+1);

            tiles[i] = tileLoaders[i]->tile; 
            tileLoaders[i]->loaded = false;
        }
    }
}



void Map::draw(){
    for(int i=0;i<tiles.size();i++){
        //if(tileLoaders[i]->loaded){
            tiles[i]->draw();
        //}
    }
}


