#pragma once

#include "ofMain.h"
#include "ofxAugmenta.h"

#ifdef __APPLE__
#include "ofxSyphon.h"
#endif

class ofApp : public ofBaseApp{
	
    public:
    
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        // event listeners
        void onPersonEntered( Augmenta::EventArgs & augmentaEvent );
        void onPersonUpdated( Augmenta::EventArgs & augmentaEvent );
        void onPersonWillLeave( Augmenta::EventArgs & augmentaEvent );
    
    private:
    
        Augmenta::Receiver m_auReceiver;
        bool m_bDebug;
        ofPoint m_MouseClick;
        int m_iPort;
    
#ifdef __APPLE__
    ofxSyphonServer m_oSyphonServer;
#endif

};
