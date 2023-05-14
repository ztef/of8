#include "TileLoader.h"



    TileLoader::TileLoader(){
        loading = false;
    }

    void TileLoader::load(string tilePath){
        this->path = tilePath;
        loading = true;
        startThread();
    }

    void TileLoader::threadedFunction(){
        mutex.lock();
        tile = jsonLoader.loadTile(path);
        loaded = true;
        mutex.unlock();
    }

    
