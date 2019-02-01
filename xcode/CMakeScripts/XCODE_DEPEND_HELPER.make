# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.asteroids.Debug:
/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/xcode/Debug/asteroids:\
	/usr/local/lib/libsfml-graphics.dylib\
	/usr/local/lib/libsfml-window.dylib\
	/usr/local/lib/libsfml-system.dylib
	/bin/rm -f /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/xcode/Debug/asteroids


PostBuild.asteroids.Release:
/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/xcode/Release/asteroids:\
	/usr/local/lib/libsfml-graphics.dylib\
	/usr/local/lib/libsfml-window.dylib\
	/usr/local/lib/libsfml-system.dylib
	/bin/rm -f /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/xcode/Release/asteroids


PostBuild.asteroids.MinSizeRel:
/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/xcode/MinSizeRel/asteroids:\
	/usr/local/lib/libsfml-graphics.dylib\
	/usr/local/lib/libsfml-window.dylib\
	/usr/local/lib/libsfml-system.dylib
	/bin/rm -f /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/xcode/MinSizeRel/asteroids


PostBuild.asteroids.RelWithDebInfo:
/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/xcode/RelWithDebInfo/asteroids:\
	/usr/local/lib/libsfml-graphics.dylib\
	/usr/local/lib/libsfml-window.dylib\
	/usr/local/lib/libsfml-system.dylib
	/bin/rm -f /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/xcode/RelWithDebInfo/asteroids




# For each target create a dummy ruleso the target does not have to exist
/usr/local/lib/libsfml-graphics.dylib:
/usr/local/lib/libsfml-system.dylib:
/usr/local/lib/libsfml-window.dylib:
