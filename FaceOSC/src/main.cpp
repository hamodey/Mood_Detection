#include "ofApp.h"


int main() {
    ofSetupOpenGL( 2560, 480, OF_WINDOW);
    return ofRunApp(std::make_shared<ofApp>());
}
