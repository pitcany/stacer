/********************************************************************************
** Form generated from reading UI file 'gnome_settings_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GNOME_SETTINGS_PAGE_H
#define UI_GNOME_SETTINGS_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GnomeSettingsPage
{
public:
    QGridLayout *contentGridLayout;
    QHBoxLayout *menuLayout;
    QPushButton *btnUnitySettings;
    QPushButton *btnWindowManager;
    QPushButton *btnAppearance;
    QButtonGroup *settingsTopButtonGroup;

    void setupUi(QWidget *GnomeSettingsPage)
    {
        if (GnomeSettingsPage->objectName().isEmpty())
            GnomeSettingsPage->setObjectName(QString::fromUtf8("GnomeSettingsPage"));
        GnomeSettingsPage->resize(788, 601);
        contentGridLayout = new QGridLayout(GnomeSettingsPage);
        contentGridLayout->setObjectName(QString::fromUtf8("contentGridLayout"));
        contentGridLayout->setHorizontalSpacing(20);
        contentGridLayout->setVerticalSpacing(15);
        contentGridLayout->setContentsMargins(15, 10, 15, 20);
        menuLayout = new QHBoxLayout();
        menuLayout->setSpacing(20);
        menuLayout->setObjectName(QString::fromUtf8("menuLayout"));
        btnUnitySettings = new QPushButton(GnomeSettingsPage);
        settingsTopButtonGroup = new QButtonGroup(GnomeSettingsPage);
        settingsTopButtonGroup->setObjectName(QString::fromUtf8("settingsTopButtonGroup"));
        settingsTopButtonGroup->addButton(btnUnitySettings);
        btnUnitySettings->setObjectName(QString::fromUtf8("btnUnitySettings"));
        btnUnitySettings->setCursor(QCursor(Qt::PointingHandCursor));
        btnUnitySettings->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/static/themes/common/img/ubuntu.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUnitySettings->setIcon(icon);
        btnUnitySettings->setIconSize(QSize(20, 20));
        btnUnitySettings->setCheckable(true);
        btnUnitySettings->setChecked(true);

        menuLayout->addWidget(btnUnitySettings);

        btnWindowManager = new QPushButton(GnomeSettingsPage);
        settingsTopButtonGroup->addButton(btnWindowManager);
        btnWindowManager->setObjectName(QString::fromUtf8("btnWindowManager"));
        btnWindowManager->setCursor(QCursor(Qt::PointingHandCursor));
        btnWindowManager->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/static/themes/common/img/window.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWindowManager->setIcon(icon1);
        btnWindowManager->setIconSize(QSize(20, 20));
        btnWindowManager->setCheckable(true);

        menuLayout->addWidget(btnWindowManager);

        btnAppearance = new QPushButton(GnomeSettingsPage);
        settingsTopButtonGroup->addButton(btnAppearance);
        btnAppearance->setObjectName(QString::fromUtf8("btnAppearance"));
        btnAppearance->setCursor(QCursor(Qt::PointingHandCursor));
        btnAppearance->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/static/themes/common/img/appearance.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAppearance->setIcon(icon2);
        btnAppearance->setIconSize(QSize(20, 20));
        btnAppearance->setCheckable(true);

        menuLayout->addWidget(btnAppearance);


        contentGridLayout->addLayout(menuLayout, 0, 0, 1, 1);


        retranslateUi(GnomeSettingsPage);

        QMetaObject::connectSlotsByName(GnomeSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *GnomeSettingsPage)
    {
        GnomeSettingsPage->setWindowTitle(QCoreApplication::translate("GnomeSettingsPage", "Gnome Settings", nullptr));
        btnUnitySettings->setText(QCoreApplication::translate("GnomeSettingsPage", "Unity Settings", nullptr));
        btnWindowManager->setText(QCoreApplication::translate("GnomeSettingsPage", "Window Manager", nullptr));
        btnAppearance->setText(QCoreApplication::translate("GnomeSettingsPage", "Appearance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GnomeSettingsPage: public Ui_GnomeSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GNOME_SETTINGS_PAGE_H
