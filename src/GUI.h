#ifndef GUI_H
#define GUI_H
#include "ofxGui.h"
#include "ofMain.h"

class GUI
{
public:
    GUI();
    void setup(const vector<string>& toggleNames);
    void update();
    void draw();
    void setEnabled(bool enabled=true);
    void toggleEnabled();
    void printFeatureMask();
    void log(string message);
    bool isEnabled();
    const vector<bool> getFeatureMask();
protected:

    void _updateFeatureMask();
    int _featureIndex2ToggleIndex(int featIndex);
    void _drawLog();

    bool _enabled;
    ofxPanel _panel;
    vector<string> _log;
    vector<ofxToggle*> _toggles;
    vector<bool> _featureMask;
};

#endif // GUI_H
