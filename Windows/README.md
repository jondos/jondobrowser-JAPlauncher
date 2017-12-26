Prerequisites:
	This project depends on Dev-C++ 4.9.9.2 and launch4j 3.11.

Usage:
	After installing above prerequisites, copy guihead.c into 'launch4j/head_src/guihead/'.
	Open guihead.dev via Dev-C++ and rebuild the project. (This will replace guihead.o and head.o in 'launch4j/head/').
	Launch launch4j and open JAPlauncher.xml.
	Check 'Output file' and 'Icon' fields and click 'Build wrapper'. (This will make JonDoLauncher.exe inside project directory.)

Note: 
	JonDoLauncher.exe goes into jondobrowser-build/projects/tor-browser/JonDo/JonDo_Windows/