Training and Usage of Haar Cascade

Haar Cascade is a detection algorithm stored in xml file. 
This enables to distribute trained detectors without the need to train them again and again.
This repository describes how to train a detector as well as how to use it in opencv.
The detector was trained to detect hockey players. 

If you want just to try the detector, please download folder with classifier and see detector.cpp 
as an example how to use the detector in the c++ program.

To train the cascade please read training.txt. You will also need to have opencv version 3.x
(see buildOpenCV.txt or trainingOnWindows.txt decribing how to train it in Windows OS without the need to build opencv).

This repository contains help how to build OpenCV earlier versions
(Training the detector needs opencv 3.x, sicnce the later versions don't contain 
programs to train it.
However trained detector can be used on the later versions. 
So if you are not interested in training,you can skip files describing building opencv.)

To know more about how the detector works, please refer to theory.txt and the sources there.

Structure of the project

It can be divided to three parts:
Training Haar Cascade (files buildOpenCV.txt or trainingOnWindows.txt, training.txt ).
Application of Haar Cascade (file detector.cpp)
Detector itself (folder with name "classifier" with .xml files).


////////    Following text shows how the folder structure can look like and which OS has been used. //////////


Technical specifications OS:
System: WSL Ubuntu-18.04

Folder structure:
Following structure shows how and folder structure might look like.


PIA_Project
    |__build                                    # Folder for build of opencv version.
    |__opencv.zip                               # After download opencv-3.4 .
    |__opencv-3.4                               # After unzipping opecv.
    |__src                                      # Source file with program and trained detector.
        |_build                                 # build folder for src program.
        |_classifier                            # Folder with classifier.
            |_cascade.xml                       # Cascade classifier.
            |_stagex..n.xml
        |_neg                                   # Folder with negative images.
        |_pos                                   # Folder with positive images.
        |_test                                  # Folder with test images or video.
        |_objects                               # Folder with some files as result of object specification in positive images.
            |_coordinates.txt                   # File containing coordinates of objects in positive images.
            |_vector.vec                        # Vector file created from coordinates and positive images.
        |_coordinates.txt                       # File with coordinates of the objects in positive images.
        |_CMakeLists.txt                        # Cmake for build of your program in C++.
        |_detector.cpp                          # Code where you use the trained detector.
        |_vecFile._vecFile                      # Vec file from which a detector is being built


Please note that the github repository does not contain folder with opencv build
and folder src/build as well as opencv .zip file. That must be done by you.
However the files from the classifer can be used directly if you don't want to train a new one
and just used this on some image.