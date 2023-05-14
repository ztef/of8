#ifndef __TileLoader
#define __TileLoader

#include "ofThread.h"
#include "ofMain.h"
#include "FeatureLeafNode.h"
#include "FeatureCollectionNode.h"
#include "JsonLoader.h"


class TileLoader: public ofThread{
    
  public:

    TileLoader();

    void load(string tilePath);

    void threadedFunction();

    FeatureNode* tile;
    JsonLoader jsonLoader;

    string path;
    bool loading;
    bool loaded;
    
    ofMutex mutex;
};

#endif 