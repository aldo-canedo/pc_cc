#include "plantilla.h"



//--------------------------------------------------------------
void plantilla::stateEnter(){
    
    video_test.load("ESSENTIAL_HYDRATION (Converted)_2.mov");
    
     video_test.play();
     video_test.setFrame(400);
   
}

//--------------------------------------------------------------
void plantilla::setup(){

}

//--------------------------------------------------------------
void plantilla::update(){
    
    video_test.update();
    
}

//--------------------------------------------------------------
void plantilla::draw(){
    
    ofScale(getSharedData().escalaX,getSharedData().escalaY);
    
    ////////////////////////////////////pantalla 1
    ofSetColor(150);
    ofDrawRectangle(0, 0, 1536,896);
    ////////////////////////////////////banner 1
    ofSetColor(100);
    ofDrawRectangle(1536, 0, 512, 896);
    ///////////////////////////////////pantalla 2
     ofSetColor(150);
    ofDrawRectangle(2048, 0, 1536, 896);
    ////////////////////////////////////banner 2
     ofSetColor(100);
    ofDrawRectangle(3584, 0, 512, 896);
    ///////////////////////////////////pantalla 3
     ofSetColor(150);
    ofDrawRectangle(4096, 0, 1536, 896);
    ////////////////////////////////////////////////////////////
    
    
    ofPushMatrix();
    ofPushStyle();
    
    ///todo lo que se dibuja va en ésta area
    
   
    video_test.draw(0, 0, 5632, 896);
  
    
   
    
    
    ofPopStyle();
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void plantilla::keyPressed(int key){
    
    changeState("dos");
}

//--------------------------------------------------------------
void plantilla::stateExit(){
    
    video_test.closeMovie();
    
}

string plantilla::getName()
{
    return "plantilla";
}

