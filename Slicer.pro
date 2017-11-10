QT = core gui widgets opengl

TARGET = Slicer
TEMPLATE = app


SOURCES = \
    main.cpp\
    GUI/MainWindow.cpp \
    CORE/Vertix.cpp \
    CORE/Triangle.cpp \
    CORE/STL.cpp \
    GUI/GL.cpp \
    CORE/Cut.cpp \
    CORE/PolyLine.cpp \
    CORE/Node.cpp \
    Tests/Test.cpp \
    Tests/test_1.cpp \
    Tests/test_2.cpp \
    Tests/test_3.cpp \
    CORE/NodeGraph.cpp \
    Tests/test_4.cpp \
    Tests/test_5.cpp \
    Tests/test_6.cpp

HEADERS = \
    GUI/MainWindow.h \
    CORE/Vertix.h \
    CORE/Triangle.h \
    CORE/STL.h \
    GUI/GL.h \
    CORE/Cut.h \
    CORE/PolyLine.h \
    CORE/Node.h \
    Tests/Test.h \
    Tests/test_1.h \
    Tests/test_2.h \
    Tests/test_3.h \
    CORE/NodeGraph.h \
    Tests/test_4.h \
    Tests/test_5.h \
    Tests/test_6.h \
    CORE/Сore.h

INCLUDEPATH = \
    GUI \
    CORE \
    Tests
