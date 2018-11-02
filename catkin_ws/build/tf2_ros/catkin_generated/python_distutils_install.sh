#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/hdcl-ros/ballbotRepo/src/geometry2/tf2_ros"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/hdcl-ros/ballbotRepo/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/hdcl-ros/ballbotRepo/install/lib/python2.7/dist-packages:/home/hdcl-ros/ballbotRepo/build/tf2_ros/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/hdcl-ros/ballbotRepo/build/tf2_ros" \
    "/usr/bin/python2" \
    "/home/hdcl-ros/ballbotRepo/src/geometry2/tf2_ros/setup.py" \
    build --build-base "/home/hdcl-ros/ballbotRepo/build/tf2_ros" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/hdcl-ros/ballbotRepo/install" --install-scripts="/home/hdcl-ros/ballbotRepo/install/bin"
