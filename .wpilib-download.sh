#!/bin/bash

# This script downloads the latest (known) file of the WPI C++ plugin.
# The .jar file (really a .zip) contains a cpp.zip that has the
# include/ and lib/ folders necessary to build/link an executable FRC robot.

# The resulting wpilib/include/ folder should be used as a g++ -I statement
# The wpilib/lib folder should be used as a g++ -L statement

# TODO: script determining the latest .jar file based on the date string
# rather than a hard coded file name.
# The latest version can be determined from
# http://first.wpi.edu/FRC/roborio/release/eclipse/site.xml

version="$(wget --quiet http://first.wpi.edu/FRC/roborio/release/eclipse/plugins/ && cat index.html | grep wpilib.plugins.cpp | sed -r 's/^.*wpilib.plugins.cpp_(.*).jar.*$/\1/')"
echo $?
echo $downloaded_version
source wpilib/version.txt

if [ ! "$version" = "$downloaded_version" ] ; then
	wget --quiet -O wpicpp.zip http://first.wpi.edu/FRC/roborio/release/eclipse/plugins/edu.wpi.first.wpilib.plugins.cpp_$version.jar
	unzip -qq wpicpp.zip resources/cpp.zip
	mkdir wpilib
	mv resources/cpp.zip ./
	rm -rf resources
	unzip -qqd wpilib/ cpp.zip

	rm -rf cpp.zip
	rm -rf wpicpp.zip
	echo "downloaded_version=$version" > wpilib/version.txt
else
	echo "Already at latest version"
fi
rm index.html
echo "Version = $version"
