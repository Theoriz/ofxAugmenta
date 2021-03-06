//
//  AugmentaInteractiveArea.cpp
//
//

#include "AugmentaInteractiveArea.h"

using namespace Augmenta;

InteractiveArea::InteractiveArea()
:area(ofRectangle(0.0f, 0.0f, 1.0f, 1.0f))
{
}

void InteractiveArea::set(float x, float y, float width, float height){
    area = ofRectangle(x, y, width, height);
}

bool InteractiveArea::contains(ofPoint p){
    return (p.x > area.x && p.y > area.y && p.x < area.x+area.width && p.y < area.y+area.height);
}

void InteractiveArea::draw(){

    // Draw contours
    ofPushStyle();
    ofNoFill();
    ofSetColor(ofColor(ofColor::red));
    ofSetLineWidth(2);
    ofDrawRectangle(area.x*ofGetWidth(), area.y*ofGetHeight(), area.width*ofGetWidth(), area.height*ofGetHeight());
    ofPopStyle();
}
