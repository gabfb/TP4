TEMPLATE = app
TARGET = TP4Gui
QT += core \
    gui
HEADERS += supprimerpersonne.h \
    ajouterentraineur.h \
    ajouterjoueur.h \
    ajouterpersonne.h \
    tp4gui.h
SOURCES += supprimerpersonne.cpp \
    ajouterentraineur.cpp \
    ajouterjoueur.cpp \
    ajouterpersonne.cpp \
    main.cpp \
    tp4gui.cpp
FORMS += supprimerpersonne.ui \
    ajouterentraineur.ui \
    ajouterjoueur.ui \
    ajouterpersonne.ui \
    tp4gui.ui
RESOURCES += 
LIBS += "../TP4Lib/Debug/libTP4Lib.a"
INCLUDEPATH += "../TP4Lib/."
