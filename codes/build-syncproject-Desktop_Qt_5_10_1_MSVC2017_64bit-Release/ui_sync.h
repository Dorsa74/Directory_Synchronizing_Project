/********************************************************************************
** Form generated from reading UI file 'sync.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNC_H
#define UI_SYNC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sync
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionStart_comparison_2;
    QAction *actionComparison_settings_2;
    QAction *actionFilter_settings;
    QAction *actionSynchronization_settings;
    QAction *actionStart_synchronization;
    QAction *actionOptions;
    QAction *actionLanquage;
    QAction *actionFind;
    QAction *actionExport_file_list;
    QAction *actionReset_layout;
    QAction *actionView_help;
    QAction *actionAbout;
    QAction *actionSave_as_batch_job;
    QAction *actionEnglish;
    QAction *action;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_5;
    QToolButton *toolButton_10;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_17;
    QToolButton *button;
    QToolButton *toolButton_12;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_16;
    QComboBox *comboBox_2;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_12;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_6;
    QHBoxLayout *horizontalLayout_11;
    QTreeView *treeView;
    QToolButton *toolButton_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QCalendarWidget *calendarWidget;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *toolButton_9;
    QComboBox *comboBox_3;
    QPushButton *pushButton_5;
    QToolButton *toolButton_3;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboBox_4;
    QPushButton *pushButton_6;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QToolButton *toolButton_4;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menuFIle;
    QMenu *menuAction;
    QMenu *menuTool;
    QMenu *menuLanguage;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sync)
    {
        if (sync->objectName().isEmpty())
            sync->setObjectName(QStringLiteral("sync"));
        sync->resize(874, 433);
        QIcon icon;
        icon.addFile(QStringLiteral("../logo (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        sync->setWindowIcon(icon);
        actionNew = new QAction(sync);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(sync);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../open-file-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(sync);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_as = new QAction(sync);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionExit = new QAction(sync);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionStart_comparison_2 = new QAction(sync);
        actionStart_comparison_2->setObjectName(QStringLiteral("actionStart_comparison_2"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_comparison_2->setIcon(icon4);
        actionComparison_settings_2 = new QAction(sync);
        actionComparison_settings_2->setObjectName(QStringLiteral("actionComparison_settings_2"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../settings (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComparison_settings_2->setIcon(icon5);
        actionFilter_settings = new QAction(sync);
        actionFilter_settings->setObjectName(QStringLiteral("actionFilter_settings"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../funnel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFilter_settings->setIcon(icon6);
        actionSynchronization_settings = new QAction(sync);
        actionSynchronization_settings->setObjectName(QStringLiteral("actionSynchronization_settings"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSynchronization_settings->setIcon(icon7);
        actionStart_synchronization = new QAction(sync);
        actionStart_synchronization->setObjectName(QStringLiteral("actionStart_synchronization"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../sync.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_synchronization->setIcon(icon8);
        actionOptions = new QAction(sync);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionLanquage = new QAction(sync);
        actionLanquage->setObjectName(QStringLiteral("actionLanquage"));
        actionFind = new QAction(sync);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../binoculars.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon9);
        actionExport_file_list = new QAction(sync);
        actionExport_file_list->setObjectName(QStringLiteral("actionExport_file_list"));
        actionReset_layout = new QAction(sync);
        actionReset_layout->setObjectName(QStringLiteral("actionReset_layout"));
        actionView_help = new QAction(sync);
        actionView_help->setObjectName(QStringLiteral("actionView_help"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../faq.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_help->setIcon(icon10);
        actionAbout = new QAction(sync);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../customer-service.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon11);
        actionSave_as_batch_job = new QAction(sync);
        actionSave_as_batch_job->setObjectName(QStringLiteral("actionSave_as_batch_job"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../terminal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as_batch_job->setIcon(icon12);
        actionEnglish = new QAction(sync);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        QIcon icon13;
        icon13.addFile(QStringLiteral("../united-kingdom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnglish->setIcon(icon13);
        action = new QAction(sync);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon14;
        icon14.addFile(QStringLiteral("../iran.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon14);
        centralWidget = new QWidget(sync);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_15->addWidget(label_5);

        toolButton_10 = new QToolButton(centralWidget);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        QIcon icon15;
        icon15.addFile(QStringLiteral("../swap.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_10->setIcon(icon15);
        toolButton_10->setIconSize(QSize(30, 30));

        horizontalLayout_15->addWidget(toolButton_10);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_15->addWidget(label_6);


        gridLayout->addLayout(horizontalLayout_15, 2, 12, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        button = new QToolButton(centralWidget);
        button->setObjectName(QStringLiteral("button"));
        QIcon icon16;
        icon16.addFile(QStringLiteral("../add.png"), QSize(), QIcon::Normal, QIcon::Off);
        button->setIcon(icon16);
        button->setIconSize(QSize(16, 16));

        horizontalLayout_17->addWidget(button);

        toolButton_12 = new QToolButton(centralWidget);
        toolButton_12->setObjectName(QStringLiteral("toolButton_12"));
        QIcon icon17;
        icon17.addFile(QStringLiteral("../minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_12->setIcon(icon17);

        horizontalLayout_17->addWidget(toolButton_12);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_17->addWidget(comboBox);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_17->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_17, 2, 11, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(30, 30));

        horizontalLayout_13->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_13, 0, 11, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_16->addWidget(comboBox_2);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_16->addWidget(pushButton_4);


        gridLayout->addLayout(horizontalLayout_16, 2, 13, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setIcon(icon8);
        pushButton_2->setIconSize(QSize(30, 30));

        horizontalLayout_14->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_14, 0, 13, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        toolButton_7 = new QToolButton(centralWidget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setIcon(icon5);
        toolButton_7->setIconSize(QSize(30, 30));

        horizontalLayout_12->addWidget(toolButton_7);

        toolButton_8 = new QToolButton(centralWidget);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        toolButton_8->setIcon(icon6);
        toolButton_8->setIconSize(QSize(30, 30));

        horizontalLayout_12->addWidget(toolButton_8);

        toolButton_6 = new QToolButton(centralWidget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setIcon(icon7);
        toolButton_6->setIconSize(QSize(30, 30));

        horizontalLayout_12->addWidget(toolButton_6);


        gridLayout->addLayout(horizontalLayout_12, 0, 12, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setInputMethodHints(Qt::ImhSensitiveData);
        treeView->setAlternatingRowColors(true);
        treeView->setSortingEnabled(true);
        treeView->setAnimated(true);
        treeView->setHeaderHidden(false);

        horizontalLayout_11->addWidget(treeView);


        gridLayout->addLayout(horizontalLayout_11, 6, 1, 1, 10);

        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setIcon(icon1);
        toolButton_5->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_5, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        gridLayout->addLayout(horizontalLayout_3, 0, 0, 7, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 5, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGridVisible(false);

        horizontalLayout_6->addWidget(calendarWidget);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 3, 10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        toolButton_9 = new QToolButton(centralWidget);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        toolButton_9->setIcon(icon17);

        horizontalLayout_7->addWidget(toolButton_9);

        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_7->addWidget(comboBox_3);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_7->addWidget(pushButton_5);


        gridLayout->addLayout(horizontalLayout_7, 3, 11, 1, 1);

        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        QIcon icon18;
        icon18.addFile(QStringLiteral("../folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon18);
        toolButton_3->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_3, 0, 4, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        comboBox_4 = new QComboBox(centralWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_8->addWidget(comboBox_4);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_8->addWidget(pushButton_6);


        gridLayout->addLayout(horizontalLayout_8, 3, 13, 1, 1);

        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setIcon(icon);
        toolButton_2->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_2, 0, 5, 1, 1);

        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setIcon(icon12);
        toolButton->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton, 0, 6, 1, 1);

        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setIcon(icon3);
        toolButton_4->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_4, 0, 3, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setAlternatingRowColors(true);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setVisible(false);

        horizontalLayout_2->addWidget(tableView);


        gridLayout->addLayout(horizontalLayout_2, 4, 11, 3, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView_2 = new QTableView(centralWidget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setAlternatingRowColors(true);
        tableView_2->setSortingEnabled(true);

        horizontalLayout->addWidget(tableView_2);


        gridLayout->addLayout(horizontalLayout, 4, 13, 3, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_4->addWidget(listWidget);

        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        horizontalLayout_4->addWidget(listWidget_2);


        gridLayout->addLayout(horizontalLayout_4, 4, 12, 3, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);


        gridLayout->addLayout(horizontalLayout_5, 3, 12, 1, 1);

        sync->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sync);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 874, 21));
        menuFIle = new QMenu(menuBar);
        menuFIle->setObjectName(QStringLiteral("menuFIle"));
        menuAction = new QMenu(menuBar);
        menuAction->setObjectName(QStringLiteral("menuAction"));
        menuTool = new QMenu(menuBar);
        menuTool->setObjectName(QStringLiteral("menuTool"));
        menuLanguage = new QMenu(menuTool);
        menuLanguage->setObjectName(QStringLiteral("menuLanguage"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        sync->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sync);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        sync->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sync);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        sync->setStatusBar(statusBar);

        menuBar->addAction(menuFIle->menuAction());
        menuBar->addAction(menuAction->menuAction());
        menuBar->addAction(menuTool->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFIle->addAction(actionNew);
        menuFIle->addAction(actionOpen);
        menuFIle->addSeparator();
        menuFIle->addAction(actionSave);
        menuFIle->addAction(actionSave_as);
        menuFIle->addAction(actionSave_as_batch_job);
        menuFIle->addSeparator();
        menuFIle->addAction(actionExit);
        menuAction->addAction(actionStart_comparison_2);
        menuAction->addSeparator();
        menuAction->addAction(actionComparison_settings_2);
        menuAction->addAction(actionFilter_settings);
        menuAction->addAction(actionSynchronization_settings);
        menuAction->addSeparator();
        menuAction->addAction(actionStart_synchronization);
        menuTool->addAction(actionFind);
        menuTool->addAction(actionExport_file_list);
        menuTool->addSeparator();
        menuTool->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(action);
        menuHelp->addAction(actionView_help);

        retranslateUi(sync);

        QMetaObject::connectSlotsByName(sync);
    } // setupUi

    void retranslateUi(QMainWindow *sync)
    {
        sync->setWindowTitle(QApplication::translate("sync", "bestsync", nullptr));
        actionNew->setText(QApplication::translate("sync", "New", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("sync", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("sync", "Open...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("sync", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("sync", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("sync", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_as->setText(QApplication::translate("sync", "Save as...", nullptr));
        actionExit->setText(QApplication::translate("sync", "Exit", nullptr));
        actionStart_comparison_2->setText(QApplication::translate("sync", "Start comparison", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStart_comparison_2->setShortcut(QApplication::translate("sync", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        actionComparison_settings_2->setText(QApplication::translate("sync", "Comparison settings", nullptr));
#ifndef QT_NO_SHORTCUT
        actionComparison_settings_2->setShortcut(QApplication::translate("sync", "F6", nullptr));
#endif // QT_NO_SHORTCUT
        actionFilter_settings->setText(QApplication::translate("sync", "Filter settings", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFilter_settings->setShortcut(QApplication::translate("sync", "F7", nullptr));
#endif // QT_NO_SHORTCUT
        actionSynchronization_settings->setText(QApplication::translate("sync", "Synchronization settings", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSynchronization_settings->setShortcut(QApplication::translate("sync", "F8", nullptr));
#endif // QT_NO_SHORTCUT
        actionStart_synchronization->setText(QApplication::translate("sync", "Start synchronization", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStart_synchronization->setShortcut(QApplication::translate("sync", "F9", nullptr));
#endif // QT_NO_SHORTCUT
        actionOptions->setText(QApplication::translate("sync", "Options", nullptr));
        actionLanquage->setText(QApplication::translate("sync", "Language", nullptr));
        actionFind->setText(QApplication::translate("sync", "Find...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFind->setShortcut(QApplication::translate("sync", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionExport_file_list->setText(QApplication::translate("sync", "Export file list", nullptr));
        actionReset_layout->setText(QApplication::translate("sync", "Reset layout", nullptr));
        actionView_help->setText(QApplication::translate("sync", "View help", nullptr));
#ifndef QT_NO_SHORTCUT
        actionView_help->setShortcut(QApplication::translate("sync", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("sync", "About", nullptr));
        actionSave_as_batch_job->setText(QApplication::translate("sync", "Save as batch job", nullptr));
        actionEnglish->setText(QApplication::translate("sync", "English", nullptr));
        action->setText(QApplication::translate("sync", "\331\201\330\247\330\261\330\263\333\214", nullptr));
        label_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_10->setToolTip(QApplication::translate("sync", "Swap", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_10->setText(QApplication::translate("sync", "...", nullptr));
        label_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        button->setToolTip(QApplication::translate("sync", "Add folder pair", nullptr));
#endif // QT_NO_TOOLTIP
        button->setText(QApplication::translate("sync", "...", nullptr));
        toolButton_12->setText(QApplication::translate("sync", "...", nullptr));
        pushButton_3->setText(QApplication::translate("sync", "Browse", nullptr));
        pushButton->setText(QApplication::translate("sync", "Compare", nullptr));
        pushButton_4->setText(QApplication::translate("sync", "Browse", nullptr));
        pushButton_2->setText(QApplication::translate("sync", "Synchronize", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton_7->setToolTip(QApplication::translate("sync", "Comparison setting", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_7->setText(QApplication::translate("sync", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton_8->setToolTip(QApplication::translate("sync", "Filter", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_8->setText(QApplication::translate("sync", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton_6->setToolTip(QApplication::translate("sync", "Synchronization setting", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_6->setText(QApplication::translate("sync", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton_5->setToolTip(QApplication::translate("sync", "New", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_5->setText(QApplication::translate("sync", "...", nullptr));
        label->setText(QApplication::translate("sync", "Last sync", nullptr));
        label_2->setText(QApplication::translate("sync", "Overview", nullptr));
        toolButton_9->setText(QApplication::translate("sync", "...", nullptr));
        pushButton_5->setText(QApplication::translate("sync", "Browse", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton_3->setToolTip(QApplication::translate("sync", "Open", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_3->setText(QApplication::translate("sync", "...", nullptr));
        pushButton_6->setText(QApplication::translate("sync", "Browse", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton_2->setToolTip(QApplication::translate("sync", "Save as", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_2->setText(QApplication::translate("sync", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("sync", "Save as batch job", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QApplication::translate("sync", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton_4->setToolTip(QApplication::translate("sync", "Save...", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_4->setText(QApplication::translate("sync", "...", nullptr));
        label_3->setText(QApplication::translate("sync", "Sourse:", nullptr));
        label_4->setText(QApplication::translate("sync", "Destination:", nullptr));
        menuFIle->setTitle(QApplication::translate("sync", "File", nullptr));
        menuAction->setTitle(QApplication::translate("sync", "Action", nullptr));
        menuTool->setTitle(QApplication::translate("sync", "Tool", nullptr));
        menuLanguage->setTitle(QApplication::translate("sync", "Language", nullptr));
        menuHelp->setTitle(QApplication::translate("sync", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sync: public Ui_sync {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNC_H
