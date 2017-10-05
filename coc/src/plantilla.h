
#pragma once

#include "ofxState.h"
#include "SharedData.h"

class plantilla : public itg::ofxState<SharedData>
{
public:
    
    void stateEnter();
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    void stateExit();
    string getName();
    
    
    
    
    ofVideoPlayer 	video_test;
    
};
