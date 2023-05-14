#ifndef __Map
#define __Map

#include "ofMain.h"
#include "TileLoader.h"
#include "FeatureNode.h"

class Map {
    
public:
    Map();
    void Load(string url);

    virtual void draw();

    void update();

    void setup();



    vector<unique_ptr<TileLoader>> tileLoaders;
    vector<FeatureNode*> tiles;


};

#endif 