TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    tests.cpp \
    dsstring.cpp

HEADERS += \
    catch.hpp \
    dsstring.h
