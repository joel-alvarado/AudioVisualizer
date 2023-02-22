# PA1: Openframeworks Audiovisualizer
The objective for this first project is to complete this audiovisualizer with the help of OpenFrameworks!

# What it can do out of the box
After compiling and running the project for the first time, you should be able to do a couple of things:

- Using the "P" key, you should be able to play music from "beat.wav" 
- Using different number keys, you can visualize the music in different ways:
    - 1: Rectangle Height Visualizer
    - 2: Circle Radius Visualizer
    - 3: Rectangle Width Visualizer
    - 4: Custom Visualize

# Classes
This project contains two classes that should be of your concern: ofApp and AudioVisualizer.

## ofApp
This is the class that brings most things together. Here, you will find the code that causes the audio to play and pause. It is also to where the visualization happens. Here, you can observe how the code to change between modes works, and how the song is actually played. 

## AudioVisualizer
The AudioVisualizer class provides us with the data needed to do the visualization. Using some of the tools OpenFrameworks provides us and math, we can obtain information such as the amplitude of the sound. 

# How to Compile

## Windows:

1. Download and install the following version of [openFrameworks](http://example.com "openFrameworks")
2. Install msys2 from [here](http://example.com "msys2")
3. Extract the .zip file to your preferred directory.
4. Using the MINGW32 CLI, navigate to `yourOpenFrameworksFolder/scripts/msys2` and execute the following command: `./install_dependencies.sh --noconfirm`
to install the required dependencies.
5. After installing the dependencies, execute `./compileOF.sh` to compile openFrameworks
6. Once finished, you can clone this repository in the `apps/myApps` folder inside your openFrameworks folder
7. When finished cloning, you can compile the project using the command `make` and run it using `make run`

## Linux

TODO
