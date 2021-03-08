#pragma once

#include "ofMain.h"
#include "AudioVisualizer.h"
#include <iostream>
#include <vector>

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void drawMode1(vector<float> amplitudes);
		void rectangleAmpDraw(vector<float> amplitudes);
		void rectangleAmpDraw(vector<float> amplitudes, bool sideways);
		void recording(char input);
		void playInput(vector<char> record);
		vector<char> getRecord(){return record;};
		void keyIndex(int key);
		string getCurrentMode();

		void delayExecute(int sec);
		void drawMode2(vector<float> amplitudes);
		void drawMode3(vector<float> amplitudes);
		void drawMode4(vector<float> amplitudes);
		void drawMode5(vector<float> amplitudes);
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void loadNewSound(string newSound);
		void toggleVisualizer();
		void displayVisualizerInfo();
	private:
		ofSoundPlayer sound;
		AudioVisualizer visualizer;
		
		bool playing = false;
		bool pause = false;
		bool rec = false;
		bool replay = false;
		char mode = '1';
		int replayCounter = 0;
		int tickCount = 0;
		string current_song = "beat.wav";
		string visualizerStatus = "ON";
		float volume = sound.getVolume();
		float volumePercentage = (volume/1)*100;
		vector<char> record;
		
};
