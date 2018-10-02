#include "ofApp.h"

void ofApp::setup()
{
    ofSetFrameRate(30);

    player.load("fingers.mp4");
    player.play();
    player.setLoopState(OF_LOOP_NORMAL);

    ofxHTTP::SimpleIPVideoServerSettings settings;
    settings.setPort(7890);
    settings.ipVideoRouteSettings.setMaxClientConnections(5);
    server.setup(settings);
    server.start();
}

void ofApp::update()
{

    player.update();

    if (player.isFrameNew())
    {
        server.send(player.getPixels());
    }
}
