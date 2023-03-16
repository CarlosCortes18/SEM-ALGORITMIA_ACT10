/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QPlainTextEdit *mallaMostrar;
    QLabel *label_2;
    QLineEdit *datoId;
    QLabel *label_3;
    QLineEdit *datoVoltaje;
    QLabel *label_4;
    QLineEdit *datoPosicionX;
    QLabel *label_5;
    QLineEdit *datoPosicionY;
    QLabel *label_6;
    QLineEdit *datoRed;
    QLabel *label_7;
    QLineEdit *datoGreen;
    QLabel *label_8;
    QLineEdit *datoBlue;
    QPushButton *mostrarNeuronas;
    QPushButton *insertarInicio;
    QPushButton *insertarFinal;
    QPushButton *sort;
    QPushButton *sortV;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QPushButton *BotonMostrardelatabla;
    QPushButton *BotonBuscardelatabla;
    QLineEdit *idBusqueda;
    QPushButton *BotonMostrarSortID;
    QPushButton *BotonMostrarSortV;
    QWidget *tab_3;
    QPushButton *dibujar;
    QPushButton *limpiar;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(809, 365);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(73, 9, 62, 16));
        mallaMostrar = new QPlainTextEdit(tab);
        mallaMostrar->setObjectName("mallaMostrar");
        mallaMostrar->setGeometry(QRect(233, 9, 541, 211));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(9, 40, 16, 16));
        datoId = new QLineEdit(tab);
        datoId->setObjectName("datoId");
        datoId->setGeometry(QRect(94, 40, 133, 22));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(9, 68, 38, 16));
        datoVoltaje = new QLineEdit(tab);
        datoVoltaje->setObjectName("datoVoltaje");
        datoVoltaje->setGeometry(QRect(94, 68, 133, 22));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(9, 96, 58, 16));
        datoPosicionX = new QLineEdit(tab);
        datoPosicionX->setObjectName("datoPosicionX");
        datoPosicionX->setGeometry(QRect(94, 96, 133, 22));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(9, 124, 58, 16));
        datoPosicionY = new QLineEdit(tab);
        datoPosicionY->setObjectName("datoPosicionY");
        datoPosicionY->setGeometry(QRect(94, 124, 133, 22));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(9, 152, 23, 16));
        datoRed = new QLineEdit(tab);
        datoRed->setObjectName("datoRed");
        datoRed->setGeometry(QRect(94, 152, 133, 22));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(9, 180, 34, 16));
        datoGreen = new QLineEdit(tab);
        datoGreen->setObjectName("datoGreen");
        datoGreen->setGeometry(QRect(94, 180, 133, 22));
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(9, 208, 26, 16));
        datoBlue = new QLineEdit(tab);
        datoBlue->setObjectName("datoBlue");
        datoBlue->setGeometry(QRect(94, 208, 133, 22));
        mostrarNeuronas = new QPushButton(tab);
        mostrarNeuronas->setObjectName("mostrarNeuronas");
        mostrarNeuronas->setGeometry(QRect(240, 230, 161, 31));
        insertarInicio = new QPushButton(tab);
        insertarInicio->setObjectName("insertarInicio");
        insertarInicio->setGeometry(QRect(9, 236, 101, 24));
        insertarFinal = new QPushButton(tab);
        insertarFinal->setObjectName("insertarFinal");
        insertarFinal->setGeometry(QRect(114, 236, 111, 24));
        sort = new QPushButton(tab);
        sort->setObjectName("sort");
        sort->setGeometry(QRect(410, 230, 171, 31));
        sortV = new QPushButton(tab);
        sortV->setObjectName("sortV");
        sortV->setGeometry(QRect(590, 230, 171, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tab_2->setEnabled(true);
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(220, 10, 521, 231));
        BotonMostrardelatabla = new QPushButton(tab_2);
        BotonMostrardelatabla->setObjectName("BotonMostrardelatabla");
        BotonMostrardelatabla->setGeometry(QRect(20, 10, 171, 31));
        BotonBuscardelatabla = new QPushButton(tab_2);
        BotonBuscardelatabla->setObjectName("BotonBuscardelatabla");
        BotonBuscardelatabla->setGeometry(QRect(20, 170, 171, 31));
        idBusqueda = new QLineEdit(tab_2);
        idBusqueda->setObjectName("idBusqueda");
        idBusqueda->setGeometry(QRect(20, 210, 171, 31));
        idBusqueda->setClearButtonEnabled(false);
        BotonMostrarSortID = new QPushButton(tab_2);
        BotonMostrarSortID->setObjectName("BotonMostrarSortID");
        BotonMostrarSortID->setGeometry(QRect(20, 50, 171, 31));
        BotonMostrarSortV = new QPushButton(tab_2);
        BotonMostrarSortV->setObjectName("BotonMostrarSortV");
        BotonMostrarSortV->setGeometry(QRect(20, 90, 171, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        dibujar = new QPushButton(tab_3);
        dibujar->setObjectName("dibujar");
        dibujar->setGeometry(QRect(124, 233, 141, 31));
        limpiar = new QPushButton(tab_3);
        limpiar->setObjectName("limpiar");
        limpiar->setGeometry(QRect(284, 233, 141, 31));
        graphicsView = new QGraphicsView(tab_3);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(45, 10, 561, 211));
        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 809, 22));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
#if QT_CONFIG(shortcut)
        actionAbrir->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "NEURONAS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Voltaje:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n X:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n Y:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Red:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Green:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Blue:", nullptr));
        mostrarNeuronas->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        insertarInicio->setText(QCoreApplication::translate("MainWindow", "Insertar Inicio", nullptr));
        insertarFinal->setText(QCoreApplication::translate("MainWindow", "Insertar Final", nullptr));
        sort->setText(QCoreApplication::translate("MainWindow", "Ordenar por ID", nullptr));
        sortV->setText(QCoreApplication::translate("MainWindow", "Ordenar por Voltaje", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        BotonMostrardelatabla->setText(QCoreApplication::translate("MainWindow", "Mostrar de la tabla", nullptr));
        BotonBuscardelatabla->setText(QCoreApplication::translate("MainWindow", "Buscar por ID", nullptr));
        idBusqueda->setPlaceholderText(QCoreApplication::translate("MainWindow", " ID", nullptr));
        BotonMostrarSortID->setText(QCoreApplication::translate("MainWindow", "Clasificar por ID", nullptr));
        BotonMostrarSortV->setText(QCoreApplication::translate("MainWindow", "Clasificar por Voltaje", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        dibujar->setText(QCoreApplication::translate("MainWindow", "Dibujar", nullptr));
        limpiar->setText(QCoreApplication::translate("MainWindow", "Limpiar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Gr\303\241fica", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
