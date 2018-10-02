//
// Copyright (c) 2012 Christopher Baker <https://christopherbaker.net>
//
// SPDX-License-Identifier:	MIT
//

#include "ofApp.h"

int main()
{
    ofGLFWWindowSettings settings;
    settings.visible = false;
    ofCreateWindow(settings);
    ofRunApp(new ofApp);
}
