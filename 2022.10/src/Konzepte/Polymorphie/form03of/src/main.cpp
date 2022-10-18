#include "ofApp.h"

int main(){
	const int breite = 1024;
	const int hoehe = 768;
	const ofWindowMode modus = OF_WINDOW;
	ofSetupOpenGL(breite,hoehe,modus);
	ofRunApp(new ofApp());
}
