QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adashb.cpp \
    adminlg.cpp \
    edit.cpp \
    form1.cpp \
    form2.cpp \
    form3.cpp \
    form4.cpp \
    form5.cpp \
    global.cpp \
    history.cpp \
    index.cpp \
    instruction.cpp \
    main.cpp \
    mainwindow.cpp \
    messagelist.cpp \
    sdashb.cpp \
    signup.cpp \
    studentlg.cpp \
    studentlist.cpp \
    studentpass.cpp \
    tclist.cpp \
    tdashb.cpp \
    teacherlg.cpp \
    teacherpass.cpp \
    tselection.cpp

HEADERS += \
    adashb.h \
    adminlg.h \
    edit.h \
    form1.h \
    form2.h \
    form3.h \
    form4.h \
    form5.h \
    global.h \
    history.h \
    index.h \
    instruction.h \
    mainwindow.h \
    messagelist.h \
    sdashb.h \
    signup.h \
    studentlg.h \
    studentlist.h \
    studentpass.h \
    tclist.h \
    tdashb.h \
    teacherlg.h \
    teacherpass.h \
    tselection.h

FORMS += \
    adashb.ui \
    adminlg.ui \
    edit.ui \
    form1.ui \
    form2.ui \
    form3.ui \
    form4.ui \
    form5.ui \
    global.ui \
    history.ui \
    index.ui \
    instruction.ui \
    mainwindow.ui \
    messagelist.ui \
    sdashb.ui \
    signup.ui \
    studentlg.ui \
    studentlist.ui \
    studentpass.ui \
    tclist.ui \
    tdashb.ui \
    teacherlg.ui \
    teacherpass.ui \
    tselection.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Assets.qrc
