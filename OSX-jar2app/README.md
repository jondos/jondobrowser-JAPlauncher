Intro:
	This script builds 'JAP.app'.
	'JAP.app' should contain the following.
		'JAP.jar', which is the JonDo proxy.
		jdk 1.8.

Usage:
	Copy 'JAP.jar' into 'dist/' directory.
	Run `ant bundle-jap`.
	This will create 'JAP.app' in 'dist/' directory.

Note:
	Compress 'JAP.app' into 'JAP.app.tar.gz'. 
	JAP.app.tar.gz goes into jondobrowser-build/projects/tor-browser/JonDo/JonDo_OSX/.

Prerequisites:
	This project requires MacOS with ant, jdk installed.

Installing ant:
	Install XCode command line tool
		xcode-select --install
	Install homebrew
		ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
	Install ant
		brew install ant

When you update jdk, please update its home directory in build.xml.
