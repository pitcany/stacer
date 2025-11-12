/********************************************************************************
** Form generated from reading UI file 'unity_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNITY_SETTINGS_H
#define UI_UNITY_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UnitySettings
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaUnityContents;
    QGridLayout *gridLayout;
    QGroupBox *grpSearchApplications;
    QGridLayout *gridLayout_5;
    QCheckBox *checkSearchYourFiles;
    QLabel *lblHomeIcon_9;
    QCheckBox *checkMoreSuggestions;
    QLabel *lblHomeIcon_11;
    QCheckBox *checkRecentlyUsed;
    QLabel *lblHomeIcon_8;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QGroupBox *grpPanelGeneral;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QSlider *sliderPanelOpacity;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *grpLauncherBehaviour;
    QGridLayout *gridLayout_2;
    QCheckBox *checkLauncherAutoHide;
    QLabel *lblHomeIcon;
    QRadioButton *radioRevealLeft;
    QSlider *sliderRevealSensitivy;
    QLabel *lblMountedIcon;
    QRadioButton *radioRevealTopLeft;
    QLabel *lblTrashIcon;
    QCheckBox *checkMinimizeApps;
    QLabel *lblNetworkIcon;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QGroupBox *grpLauncherAppearance;
    QGridLayout *gridLayout_3;
    QRadioButton *radioLauncherPositionLeft;
    QRadioButton *radioLauncherPositionBottom;
    QLabel *lblNetworkIcon_3;
    QRadioButton *radioLauncherVisiblePrimaryDesktop;
    QSpinBox *spinIconSize;
    QSlider *sliderLauncherOpacity;
    QLabel *lblMountedIcon_4;
    QRadioButton *radioLauncherVisibleAllDesktop;
    QLabel *lblNetworkIcon_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *grpSearchGeneral;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBackgroundBlur;
    QLabel *lblHomeIcon_5;
    QCheckBox *checkSearchOnlineResource;
    QLabel *lblHomeIcon_15;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QGroupBox *grpPanelIndicator;
    QGridLayout *gridLayout_7;
    QCheckBox *checkDate;
    QCheckBox *checkCalendar;
    QLabel *lblHomeIcon_3;
    QLabel *lblHomeIcon_4;
    QCheckBox *checkWeekday;
    QLabel *lblHomeIcon_14;
    QCheckBox *checkSeconds;
    QLabel *lblHomeIcon_16;
    QLabel *lblHomeIcon_17;
    QCheckBox *checkDateTime;
    QCheckBox *check24Hour;
    QCheckBox *checkShowMyName;
    QCheckBox *checkVolume;
    QSpacerItem *horizontalSpacer_7;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *UnitySettings)
    {
        if (UnitySettings->objectName().isEmpty())
            UnitySettings->setObjectName(QString::fromUtf8("UnitySettings"));
        UnitySettings->resize(809, 817);
        UnitySettings->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(UnitySettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(UnitySettings);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaUnityContents = new QWidget();
        scrollAreaUnityContents->setObjectName(QString::fromUtf8("scrollAreaUnityContents"));
        scrollAreaUnityContents->setGeometry(QRect(0, 0, 807, 815));
        gridLayout = new QGridLayout(scrollAreaUnityContents);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        grpSearchApplications = new QGroupBox(scrollAreaUnityContents);
        grpSearchApplications->setObjectName(QString::fromUtf8("grpSearchApplications"));
        gridLayout_5 = new QGridLayout(grpSearchApplications);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(30);
        gridLayout_5->setVerticalSpacing(10);
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        checkSearchYourFiles = new QCheckBox(grpSearchApplications);
        checkSearchYourFiles->setObjectName(QString::fromUtf8("checkSearchYourFiles"));
        checkSearchYourFiles->setCursor(QCursor(Qt::PointingHandCursor));
        checkSearchYourFiles->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(checkSearchYourFiles, 1, 1, 1, 1);

        lblHomeIcon_9 = new QLabel(grpSearchApplications);
        lblHomeIcon_9->setObjectName(QString::fromUtf8("lblHomeIcon_9"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblHomeIcon_9->sizePolicy().hasHeightForWidth());
        lblHomeIcon_9->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(lblHomeIcon_9, 0, 2, 1, 1);

        checkMoreSuggestions = new QCheckBox(grpSearchApplications);
        checkMoreSuggestions->setObjectName(QString::fromUtf8("checkMoreSuggestions"));
        checkMoreSuggestions->setCursor(QCursor(Qt::PointingHandCursor));
        checkMoreSuggestions->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(checkMoreSuggestions, 0, 1, 1, 1);

        lblHomeIcon_11 = new QLabel(grpSearchApplications);
        lblHomeIcon_11->setObjectName(QString::fromUtf8("lblHomeIcon_11"));
        sizePolicy.setHeightForWidth(lblHomeIcon_11->sizePolicy().hasHeightForWidth());
        lblHomeIcon_11->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(lblHomeIcon_11, 1, 0, 1, 1);

        checkRecentlyUsed = new QCheckBox(grpSearchApplications);
        checkRecentlyUsed->setObjectName(QString::fromUtf8("checkRecentlyUsed"));
        checkRecentlyUsed->setCursor(QCursor(Qt::PointingHandCursor));
        checkRecentlyUsed->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(checkRecentlyUsed, 0, 3, 1, 1);

        lblHomeIcon_8 = new QLabel(grpSearchApplications);
        lblHomeIcon_8->setObjectName(QString::fromUtf8("lblHomeIcon_8"));
        sizePolicy.setHeightForWidth(lblHomeIcon_8->sizePolicy().hasHeightForWidth());
        lblHomeIcon_8->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(lblHomeIcon_8, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 4, 1, 1);


        gridLayout->addWidget(grpSearchApplications, 15, 0, 1, 1);

        label_3 = new QLabel(scrollAreaUnityContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
#if QT_CONFIG(accessibility)
        label_3->setAccessibleName(QString::fromUtf8("general-title"));
#endif // QT_CONFIG(accessibility)
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 11, 0, 1, 1);

        grpPanelGeneral = new QGroupBox(scrollAreaUnityContents);
        grpPanelGeneral->setObjectName(QString::fromUtf8("grpPanelGeneral"));
        gridLayout_6 = new QGridLayout(grpPanelGeneral);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(30);
        gridLayout_6->setVerticalSpacing(10);
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        label_5 = new QLabel(grpPanelGeneral);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        sliderPanelOpacity = new QSlider(grpPanelGeneral);
        sliderPanelOpacity->setObjectName(QString::fromUtf8("sliderPanelOpacity"));
        sliderPanelOpacity->setCursor(QCursor(Qt::PointingHandCursor));
        sliderPanelOpacity->setFocusPolicy(Qt::NoFocus);
        sliderPanelOpacity->setMinimum(1);
        sliderPanelOpacity->setMaximum(10);
        sliderPanelOpacity->setPageStep(2);
        sliderPanelOpacity->setValue(1);
        sliderPanelOpacity->setSliderPosition(1);
        sliderPanelOpacity->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(sliderPanelOpacity, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout->addWidget(grpPanelGeneral, 20, 0, 1, 1);

        grpLauncherBehaviour = new QGroupBox(scrollAreaUnityContents);
        grpLauncherBehaviour->setObjectName(QString::fromUtf8("grpLauncherBehaviour"));
        gridLayout_2 = new QGridLayout(grpLauncherBehaviour);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(30);
        gridLayout_2->setVerticalSpacing(15);
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        checkLauncherAutoHide = new QCheckBox(grpLauncherBehaviour);
        checkLauncherAutoHide->setObjectName(QString::fromUtf8("checkLauncherAutoHide"));
        checkLauncherAutoHide->setCursor(QCursor(Qt::PointingHandCursor));
        checkLauncherAutoHide->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkLauncherAutoHide, 0, 1, 1, 1, Qt::AlignLeft);

        lblHomeIcon = new QLabel(grpLauncherBehaviour);
        lblHomeIcon->setObjectName(QString::fromUtf8("lblHomeIcon"));
        sizePolicy.setHeightForWidth(lblHomeIcon->sizePolicy().hasHeightForWidth());
        lblHomeIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblHomeIcon, 0, 0, 1, 1);

        radioRevealLeft = new QRadioButton(grpLauncherBehaviour);
        buttonGroup = new QButtonGroup(UnitySettings);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioRevealLeft);
        radioRevealLeft->setObjectName(QString::fromUtf8("radioRevealLeft"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioRevealLeft->sizePolicy().hasHeightForWidth());
        radioRevealLeft->setSizePolicy(sizePolicy1);
        radioRevealLeft->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(radioRevealLeft, 1, 1, 1, 1, Qt::AlignLeft);

        sliderRevealSensitivy = new QSlider(grpLauncherBehaviour);
        sliderRevealSensitivy->setObjectName(QString::fromUtf8("sliderRevealSensitivy"));
        sliderRevealSensitivy->setCursor(QCursor(Qt::PointingHandCursor));
        sliderRevealSensitivy->setFocusPolicy(Qt::NoFocus);
        sliderRevealSensitivy->setMinimum(1);
        sliderRevealSensitivy->setMaximum(10);
        sliderRevealSensitivy->setPageStep(1);
        sliderRevealSensitivy->setValue(1);
        sliderRevealSensitivy->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderRevealSensitivy, 2, 1, 1, 1);

        lblMountedIcon = new QLabel(grpLauncherBehaviour);
        lblMountedIcon->setObjectName(QString::fromUtf8("lblMountedIcon"));
        sizePolicy.setHeightForWidth(lblMountedIcon->sizePolicy().hasHeightForWidth());
        lblMountedIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblMountedIcon, 3, 0, 1, 1);

        radioRevealTopLeft = new QRadioButton(grpLauncherBehaviour);
        buttonGroup->addButton(radioRevealTopLeft);
        radioRevealTopLeft->setObjectName(QString::fromUtf8("radioRevealTopLeft"));
        sizePolicy1.setHeightForWidth(radioRevealTopLeft->sizePolicy().hasHeightForWidth());
        radioRevealTopLeft->setSizePolicy(sizePolicy1);
        radioRevealTopLeft->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(radioRevealTopLeft, 1, 2, 1, 1, Qt::AlignLeft);

        lblTrashIcon = new QLabel(grpLauncherBehaviour);
        lblTrashIcon->setObjectName(QString::fromUtf8("lblTrashIcon"));
        sizePolicy.setHeightForWidth(lblTrashIcon->sizePolicy().hasHeightForWidth());
        lblTrashIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblTrashIcon, 2, 0, 1, 1);

        checkMinimizeApps = new QCheckBox(grpLauncherBehaviour);
        checkMinimizeApps->setObjectName(QString::fromUtf8("checkMinimizeApps"));
        checkMinimizeApps->setCursor(QCursor(Qt::PointingHandCursor));
        checkMinimizeApps->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(checkMinimizeApps, 3, 1, 1, 1, Qt::AlignLeft);

        lblNetworkIcon = new QLabel(grpLauncherBehaviour);
        lblNetworkIcon->setObjectName(QString::fromUtf8("lblNetworkIcon"));
        sizePolicy.setHeightForWidth(lblNetworkIcon->sizePolicy().hasHeightForWidth());
        lblNetworkIcon->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblNetworkIcon, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);


        gridLayout->addWidget(grpLauncherBehaviour, 1, 0, 1, 1);

        label = new QLabel(scrollAreaUnityContents);
        label->setObjectName(QString::fromUtf8("label"));
#if QT_CONFIG(accessibility)
        label->setAccessibleName(QString::fromUtf8("general-title"));
#endif // QT_CONFIG(accessibility)
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        grpLauncherAppearance = new QGroupBox(scrollAreaUnityContents);
        grpLauncherAppearance->setObjectName(QString::fromUtf8("grpLauncherAppearance"));
        gridLayout_3 = new QGridLayout(grpLauncherAppearance);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(30);
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        radioLauncherPositionLeft = new QRadioButton(grpLauncherAppearance);
        buttonGroup_3 = new QButtonGroup(UnitySettings);
        buttonGroup_3->setObjectName(QString::fromUtf8("buttonGroup_3"));
        buttonGroup_3->addButton(radioLauncherPositionLeft);
        radioLauncherPositionLeft->setObjectName(QString::fromUtf8("radioLauncherPositionLeft"));
        sizePolicy1.setHeightForWidth(radioLauncherPositionLeft->sizePolicy().hasHeightForWidth());
        radioLauncherPositionLeft->setSizePolicy(sizePolicy1);
        radioLauncherPositionLeft->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(radioLauncherPositionLeft, 2, 1, 1, 1);

        radioLauncherPositionBottom = new QRadioButton(grpLauncherAppearance);
        buttonGroup_3->addButton(radioLauncherPositionBottom);
        radioLauncherPositionBottom->setObjectName(QString::fromUtf8("radioLauncherPositionBottom"));
        sizePolicy1.setHeightForWidth(radioLauncherPositionBottom->sizePolicy().hasHeightForWidth());
        radioLauncherPositionBottom->setSizePolicy(sizePolicy1);
        radioLauncherPositionBottom->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(radioLauncherPositionBottom, 2, 2, 1, 1);

        lblNetworkIcon_3 = new QLabel(grpLauncherAppearance);
        lblNetworkIcon_3->setObjectName(QString::fromUtf8("lblNetworkIcon_3"));
        sizePolicy.setHeightForWidth(lblNetworkIcon_3->sizePolicy().hasHeightForWidth());
        lblNetworkIcon_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lblNetworkIcon_3, 1, 0, 1, 1);

        radioLauncherVisiblePrimaryDesktop = new QRadioButton(grpLauncherAppearance);
        buttonGroup_2 = new QButtonGroup(UnitySettings);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(radioLauncherVisiblePrimaryDesktop);
        radioLauncherVisiblePrimaryDesktop->setObjectName(QString::fromUtf8("radioLauncherVisiblePrimaryDesktop"));
        sizePolicy1.setHeightForWidth(radioLauncherVisiblePrimaryDesktop->sizePolicy().hasHeightForWidth());
        radioLauncherVisiblePrimaryDesktop->setSizePolicy(sizePolicy1);
        radioLauncherVisiblePrimaryDesktop->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(radioLauncherVisiblePrimaryDesktop, 1, 2, 1, 1);

        spinIconSize = new QSpinBox(grpLauncherAppearance);
        spinIconSize->setObjectName(QString::fromUtf8("spinIconSize"));
        spinIconSize->setMinimum(8);
        spinIconSize->setMaximum(64);
        spinIconSize->setSingleStep(2);

        gridLayout_3->addWidget(spinIconSize, 3, 1, 1, 1, Qt::AlignLeft);

        sliderLauncherOpacity = new QSlider(grpLauncherAppearance);
        sliderLauncherOpacity->setObjectName(QString::fromUtf8("sliderLauncherOpacity"));
        sliderLauncherOpacity->setCursor(QCursor(Qt::PointingHandCursor));
        sliderLauncherOpacity->setFocusPolicy(Qt::NoFocus);
        sliderLauncherOpacity->setMinimum(1);
        sliderLauncherOpacity->setMaximum(10);
        sliderLauncherOpacity->setPageStep(2);
        sliderLauncherOpacity->setValue(1);
        sliderLauncherOpacity->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sliderLauncherOpacity, 0, 1, 1, 1);

        lblMountedIcon_4 = new QLabel(grpLauncherAppearance);
        lblMountedIcon_4->setObjectName(QString::fromUtf8("lblMountedIcon_4"));
        sizePolicy.setHeightForWidth(lblMountedIcon_4->sizePolicy().hasHeightForWidth());
        lblMountedIcon_4->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lblMountedIcon_4, 3, 0, 1, 1);

        radioLauncherVisibleAllDesktop = new QRadioButton(grpLauncherAppearance);
        buttonGroup_2->addButton(radioLauncherVisibleAllDesktop);
        radioLauncherVisibleAllDesktop->setObjectName(QString::fromUtf8("radioLauncherVisibleAllDesktop"));
        sizePolicy1.setHeightForWidth(radioLauncherVisibleAllDesktop->sizePolicy().hasHeightForWidth());
        radioLauncherVisibleAllDesktop->setSizePolicy(sizePolicy1);
        radioLauncherVisibleAllDesktop->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(radioLauncherVisibleAllDesktop, 1, 1, 1, 1);

        lblNetworkIcon_2 = new QLabel(grpLauncherAppearance);
        lblNetworkIcon_2->setObjectName(QString::fromUtf8("lblNetworkIcon_2"));
        sizePolicy.setHeightForWidth(lblNetworkIcon_2->sizePolicy().hasHeightForWidth());
        lblNetworkIcon_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lblNetworkIcon_2, 2, 0, 1, 1);

        label_8 = new QLabel(grpLauncherAppearance);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 3, 1, 1);


        gridLayout->addWidget(grpLauncherAppearance, 6, 0, 1, 1);

        grpSearchGeneral = new QGroupBox(scrollAreaUnityContents);
        grpSearchGeneral->setObjectName(QString::fromUtf8("grpSearchGeneral"));
        gridLayout_4 = new QGridLayout(grpSearchGeneral);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(30);
        gridLayout_4->setVerticalSpacing(10);
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        checkBackgroundBlur = new QCheckBox(grpSearchGeneral);
        checkBackgroundBlur->setObjectName(QString::fromUtf8("checkBackgroundBlur"));
        checkBackgroundBlur->setCursor(QCursor(Qt::PointingHandCursor));
        checkBackgroundBlur->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(checkBackgroundBlur, 0, 1, 1, 1);

        lblHomeIcon_5 = new QLabel(grpSearchGeneral);
        lblHomeIcon_5->setObjectName(QString::fromUtf8("lblHomeIcon_5"));
        sizePolicy.setHeightForWidth(lblHomeIcon_5->sizePolicy().hasHeightForWidth());
        lblHomeIcon_5->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(lblHomeIcon_5, 0, 2, 1, 1);

        checkSearchOnlineResource = new QCheckBox(grpSearchGeneral);
        checkSearchOnlineResource->setObjectName(QString::fromUtf8("checkSearchOnlineResource"));
        checkSearchOnlineResource->setCursor(QCursor(Qt::PointingHandCursor));
        checkSearchOnlineResource->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(checkSearchOnlineResource, 0, 3, 1, 1);

        lblHomeIcon_15 = new QLabel(grpSearchGeneral);
        lblHomeIcon_15->setObjectName(QString::fromUtf8("lblHomeIcon_15"));
        sizePolicy.setHeightForWidth(lblHomeIcon_15->sizePolicy().hasHeightForWidth());
        lblHomeIcon_15->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(lblHomeIcon_15, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 4, 1, 1);


        gridLayout->addWidget(grpSearchGeneral, 12, 0, 1, 1);

        label_7 = new QLabel(scrollAreaUnityContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
#if QT_CONFIG(accessibility)
        label_7->setAccessibleName(QString::fromUtf8("general-title"));
#endif // QT_CONFIG(accessibility)
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 19, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 27, 0, 1, 1);

        grpPanelIndicator = new QGroupBox(scrollAreaUnityContents);
        grpPanelIndicator->setObjectName(QString::fromUtf8("grpPanelIndicator"));
        gridLayout_7 = new QGridLayout(grpPanelIndicator);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(30);
        gridLayout_7->setVerticalSpacing(10);
        gridLayout_7->setContentsMargins(5, 5, 5, 5);
        checkDate = new QCheckBox(grpPanelIndicator);
        checkDate->setObjectName(QString::fromUtf8("checkDate"));
        sizePolicy1.setHeightForWidth(checkDate->sizePolicy().hasHeightForWidth());
        checkDate->setSizePolicy(sizePolicy1);
        checkDate->setCursor(QCursor(Qt::PointingHandCursor));
        checkDate->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(accessibility)
        checkDate->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_CONFIG(accessibility)

        gridLayout_7->addWidget(checkDate, 1, 2, 1, 1);

        checkCalendar = new QCheckBox(grpPanelIndicator);
        checkCalendar->setObjectName(QString::fromUtf8("checkCalendar"));
        sizePolicy1.setHeightForWidth(checkCalendar->sizePolicy().hasHeightForWidth());
        checkCalendar->setSizePolicy(sizePolicy1);
        checkCalendar->setCursor(QCursor(Qt::PointingHandCursor));
        checkCalendar->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(accessibility)
        checkCalendar->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_CONFIG(accessibility)

        gridLayout_7->addWidget(checkCalendar, 2, 2, 1, 1);

        lblHomeIcon_3 = new QLabel(grpPanelIndicator);
        lblHomeIcon_3->setObjectName(QString::fromUtf8("lblHomeIcon_3"));
        sizePolicy.setHeightForWidth(lblHomeIcon_3->sizePolicy().hasHeightForWidth());
        lblHomeIcon_3->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_3, 0, 0, 1, 1);

        lblHomeIcon_4 = new QLabel(grpPanelIndicator);
        lblHomeIcon_4->setObjectName(QString::fromUtf8("lblHomeIcon_4"));
        sizePolicy.setHeightForWidth(lblHomeIcon_4->sizePolicy().hasHeightForWidth());
        lblHomeIcon_4->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_4, 0, 2, 1, 1);

        checkWeekday = new QCheckBox(grpPanelIndicator);
        checkWeekday->setObjectName(QString::fromUtf8("checkWeekday"));
        sizePolicy1.setHeightForWidth(checkWeekday->sizePolicy().hasHeightForWidth());
        checkWeekday->setSizePolicy(sizePolicy1);
        checkWeekday->setCursor(QCursor(Qt::PointingHandCursor));
        checkWeekday->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(accessibility)
        checkWeekday->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_CONFIG(accessibility)

        gridLayout_7->addWidget(checkWeekday, 2, 1, 1, 1);

        lblHomeIcon_14 = new QLabel(grpPanelIndicator);
        lblHomeIcon_14->setObjectName(QString::fromUtf8("lblHomeIcon_14"));
        sizePolicy.setHeightForWidth(lblHomeIcon_14->sizePolicy().hasHeightForWidth());
        lblHomeIcon_14->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_14, 1, 0, 1, 1);

        checkSeconds = new QCheckBox(grpPanelIndicator);
        checkSeconds->setObjectName(QString::fromUtf8("checkSeconds"));
        sizePolicy1.setHeightForWidth(checkSeconds->sizePolicy().hasHeightForWidth());
        checkSeconds->setSizePolicy(sizePolicy1);
        checkSeconds->setCursor(QCursor(Qt::PointingHandCursor));
        checkSeconds->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(accessibility)
        checkSeconds->setAccessibleName(QString::fromUtf8("circle"));
#endif // QT_CONFIG(accessibility)

        gridLayout_7->addWidget(checkSeconds, 1, 1, 1, 1);

        lblHomeIcon_16 = new QLabel(grpPanelIndicator);
        lblHomeIcon_16->setObjectName(QString::fromUtf8("lblHomeIcon_16"));
        sizePolicy.setHeightForWidth(lblHomeIcon_16->sizePolicy().hasHeightForWidth());
        lblHomeIcon_16->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_16, 3, 0, 1, 1);

        lblHomeIcon_17 = new QLabel(grpPanelIndicator);
        lblHomeIcon_17->setObjectName(QString::fromUtf8("lblHomeIcon_17"));
        sizePolicy.setHeightForWidth(lblHomeIcon_17->sizePolicy().hasHeightForWidth());
        lblHomeIcon_17->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(lblHomeIcon_17, 3, 2, 1, 1);

        checkDateTime = new QCheckBox(grpPanelIndicator);
        checkDateTime->setObjectName(QString::fromUtf8("checkDateTime"));
        checkDateTime->setCursor(QCursor(Qt::PointingHandCursor));
        checkDateTime->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(checkDateTime, 0, 1, 1, 1);

        check24Hour = new QCheckBox(grpPanelIndicator);
        check24Hour->setObjectName(QString::fromUtf8("check24Hour"));
        check24Hour->setCursor(QCursor(Qt::PointingHandCursor));
        check24Hour->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(check24Hour, 0, 3, 1, 1);

        checkShowMyName = new QCheckBox(grpPanelIndicator);
        checkShowMyName->setObjectName(QString::fromUtf8("checkShowMyName"));
        checkShowMyName->setCursor(QCursor(Qt::PointingHandCursor));
        checkShowMyName->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(checkShowMyName, 3, 3, 1, 1);

        checkVolume = new QCheckBox(grpPanelIndicator);
        checkVolume->setObjectName(QString::fromUtf8("checkVolume"));
        checkVolume->setCursor(QCursor(Qt::PointingHandCursor));
        checkVolume->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(checkVolume, 3, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 0, 4, 1, 1);


        gridLayout->addWidget(grpPanelIndicator, 22, 0, 1, 1);

        scrollArea->setWidget(scrollAreaUnityContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(UnitySettings);

        QMetaObject::connectSlotsByName(UnitySettings);
    } // setupUi

    void retranslateUi(QWidget *UnitySettings)
    {
        grpSearchApplications->setTitle(QCoreApplication::translate("UnitySettings", "Applications", nullptr));
        checkSearchYourFiles->setText(QString());
        lblHomeIcon_9->setText(QCoreApplication::translate("UnitySettings", "Show \"Recently Used\" applications", nullptr));
        checkMoreSuggestions->setText(QString());
        lblHomeIcon_11->setText(QCoreApplication::translate("UnitySettings", "Enable search of your files", nullptr));
        checkRecentlyUsed->setText(QString());
        lblHomeIcon_8->setText(QCoreApplication::translate("UnitySettings", "Show \"More Suggestions\"", nullptr));
        label_3->setText(QCoreApplication::translate("UnitySettings", "Search", nullptr));
        grpPanelGeneral->setTitle(QCoreApplication::translate("UnitySettings", "General", nullptr));
#if QT_CONFIG(accessibility)
        label_5->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_5->setText(QCoreApplication::translate("UnitySettings", "Transparency Level", nullptr));
        grpLauncherBehaviour->setTitle(QCoreApplication::translate("UnitySettings", "Behaviour", nullptr));
        checkLauncherAutoHide->setText(QString());
        lblHomeIcon->setText(QCoreApplication::translate("UnitySettings", "Auto Hide", nullptr));
        radioRevealLeft->setText(QCoreApplication::translate("UnitySettings", "Left Side", nullptr));
        lblMountedIcon->setText(QCoreApplication::translate("UnitySettings", "Minimize applications with clicking", nullptr));
        radioRevealTopLeft->setText(QCoreApplication::translate("UnitySettings", "Top-Left Corner", nullptr));
        lblTrashIcon->setText(QCoreApplication::translate("UnitySettings", "Reveal Sensitivity", nullptr));
        checkMinimizeApps->setText(QString());
        lblNetworkIcon->setText(QCoreApplication::translate("UnitySettings", "Reveal Location", nullptr));
        label->setText(QCoreApplication::translate("UnitySettings", "Launcher", nullptr));
        grpLauncherAppearance->setTitle(QCoreApplication::translate("UnitySettings", "Appearance", nullptr));
        radioLauncherPositionLeft->setText(QCoreApplication::translate("UnitySettings", "Left", nullptr));
        radioLauncherPositionBottom->setText(QCoreApplication::translate("UnitySettings", "Bottom", nullptr));
        lblNetworkIcon_3->setText(QCoreApplication::translate("UnitySettings", "Visibility", nullptr));
        radioLauncherVisiblePrimaryDesktop->setText(QCoreApplication::translate("UnitySettings", "Primary Desktop", nullptr));
        lblMountedIcon_4->setText(QCoreApplication::translate("UnitySettings", "Icon size", nullptr));
        radioLauncherVisibleAllDesktop->setText(QCoreApplication::translate("UnitySettings", "All Desktops", nullptr));
        lblNetworkIcon_2->setText(QCoreApplication::translate("UnitySettings", "Position", nullptr));
#if QT_CONFIG(accessibility)
        label_8->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_8->setText(QCoreApplication::translate("UnitySettings", "Transparency Level", nullptr));
        grpSearchGeneral->setTitle(QCoreApplication::translate("UnitySettings", "General", nullptr));
        checkBackgroundBlur->setText(QString());
        lblHomeIcon_5->setText(QCoreApplication::translate("UnitySettings", "Search online sources", nullptr));
        checkSearchOnlineResource->setText(QString());
        lblHomeIcon_15->setText(QCoreApplication::translate("UnitySettings", "Background Blur", nullptr));
        label_7->setText(QCoreApplication::translate("UnitySettings", "Panel", nullptr));
        grpPanelIndicator->setTitle(QCoreApplication::translate("UnitySettings", "Indicators", nullptr));
        checkDate->setText(QCoreApplication::translate("UnitySettings", "Date", nullptr));
        checkCalendar->setText(QCoreApplication::translate("UnitySettings", "Calendar", nullptr));
        lblHomeIcon_3->setText(QCoreApplication::translate("UnitySettings", "Date & Time", nullptr));
        lblHomeIcon_4->setText(QCoreApplication::translate("UnitySettings", "24-Hour Time", nullptr));
        checkWeekday->setText(QCoreApplication::translate("UnitySettings", "Weekday", nullptr));
        lblHomeIcon_14->setText(QCoreApplication::translate("UnitySettings", "Include", nullptr));
        checkSeconds->setText(QCoreApplication::translate("UnitySettings", "Seconds", nullptr));
        lblHomeIcon_16->setText(QCoreApplication::translate("UnitySettings", "Volume", nullptr));
        lblHomeIcon_17->setText(QCoreApplication::translate("UnitySettings", "Show my name", nullptr));
        checkDateTime->setText(QString());
        check24Hour->setText(QString());
        checkShowMyName->setText(QString());
        checkVolume->setText(QString());
        (void)UnitySettings;
    } // retranslateUi

};

namespace Ui {
    class UnitySettings: public Ui_UnitySettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNITY_SETTINGS_H
