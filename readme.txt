Training Haar Cascade

This project describes how to train Haar Cascade

It can be divided to two parts:
Training Haar Cascade.
Application of Haar Cascade (code in detector.cpp)

Technical specifications:
System: WSL Ubuntu-18.04

Training Haar Cascade
Please read file buildOpenCV.txt to build opencv version 3.x.
Than read the file training.txt to train the HaarCascade

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