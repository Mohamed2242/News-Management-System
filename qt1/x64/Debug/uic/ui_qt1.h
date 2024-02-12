/********************************************************************************
** Form generated from reading UI file 'qt1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT1_H
#define UI_QT1_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt1Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *loginpage;
    QWidget *widget;
    QLabel *label_3;
    QGroupBox *loginform;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QLineEdit *password_2;
    QLineEdit *username_2;
    QPushButton *pushButton_4;
    QWidget *register_2page;
    QLabel *label_2;
    QGroupBox *registerform;
    QLineEdit *username;
    QLabel *label_5;
    QLineEdit *password;
    QPushButton *pushButton_7;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLabel *label_17;
    QWidget *page;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_18;
    QLabel *label_14;
    QLineEdit *lineEdit_2;
    QLabel *label_12;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QDateEdit *dateEdit;
    QLabel *label_19;
    QComboBox *comboBox_5;
    QLabel *label_16;
    QTextEdit *textEdit;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton_6;
    QFormLayout *formLayout_3;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QPushButton *pushButton_8;
    QWidget *updatepage;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *id_edit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *Title_edit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *Description_edit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QDateEdit *dateEdit_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLineEdit *Category_edit;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btn_save;
    QPushButton *btn_cancel;
    QWidget *userpage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_14;
    QComboBox *comboBox;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton_21;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QWidget *page_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_16;
    QLabel *label_15;
    QPushButton *pushButton_17;
    QWidget *page_3;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_4;
    QPushButton *pushButton_12;
    QGroupBox *groupBox_4;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_13;
    QPushButton *pushButton_19;
    QWidget *adminpage;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_15;
    QPushButton *pushButton_20;
    QVBoxLayout *verticalLayout_9;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qt1Class)
    {
        if (qt1Class->objectName().isEmpty())
            qt1Class->setObjectName("qt1Class");
        qt1Class->resize(820, 581);
        centralWidget = new QWidget(qt1Class);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(720, 407));
        stackedWidget->setStyleSheet(QString::fromUtf8("#page_4{\n"
"border-image:url(:/qt1/C:/Users/LENOVO/Downloads/design20.png)}"));
        loginpage = new QWidget();
        loginpage->setObjectName("loginpage");
        QFont font;
        font.setBold(true);
        loginpage->setFont(font);
        loginpage->setStyleSheet(QString::fromUtf8("#loginpage{\n"
"border-image:url(:/qt1/design20.png)}"));
        widget = new QWidget(loginpage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 30, 1321, 80));
        widget->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(500, 0, 481, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(26);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        loginform = new QGroupBox(loginpage);
        loginform->setObjectName("loginform");
        loginform->setGeometry(QRect(570, 140, 301, 371));
        loginform->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(141, 132, 126);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 8px;\n"
"\n"
""));
        label_7 = new QLabel(loginform);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 30, 201, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font2.setPointSize(18);
        font2.setBold(true);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(loginform);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 110, 201, 71));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_3 = new QPushButton(loginform);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 280, 241, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Rockwell")});
        font3.setPointSize(12);
        font3.setBold(true);
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;}\n"
"#pushButton_3:hover{\n"
"	background-color: rgb(85, 85, 127);\n"
"}"));
        password_2 = new QLineEdit(loginform);
        password_2->setObjectName("password_2");
        password_2->setGeometry(QRect(20, 180, 271, 31));
        password_2->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"background-color: rgb(255, 255, 255);"));
        password_2->setEchoMode(QLineEdit::Password);
        password_2->setClearButtonEnabled(true);
        username_2 = new QLineEdit(loginform);
        username_2->setObjectName("username_2");
        username_2->setGeometry(QRect(20, 80, 271, 31));
        username_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);border-radius: 8px;"));
        username_2->setClearButtonEnabled(true);
        pushButton_4 = new QPushButton(loginform);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 320, 241, 31));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4\n"
"{color: rgb(0, 0, 0);\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;}\n"
"#pushButton_4:hover{\n"
"	background-color: rgb(85, 85, 127);\n"
"}"));
        stackedWidget->addWidget(loginpage);
        register_2page = new QWidget();
        register_2page->setObjectName("register_2page");
        register_2page->setStyleSheet(QString::fromUtf8("#register_2page{\n"
"border-image:url(:/qt1/design20.png)}"));
        label_2 = new QLabel(register_2page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, -30, 771, 121));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Rockwell")});
        font4.setPointSize(26);
        font4.setBold(true);
        font4.setUnderline(false);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        registerform = new QGroupBox(register_2page);
        registerform->setObjectName("registerform");
        registerform->setGeometry(QRect(340, 60, 321, 421));
        registerform->setStyleSheet(QString::fromUtf8("#registerform{\n"
"	\n"
"	\n"
"	background-color: rgb(116, 104, 99);\n"
"border-radius: 8px;\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        username = new QLineEdit(registerform);
        username->setObjectName("username");
        username->setGeometry(QRect(10, 60, 301, 31));
        username->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));
        label_5 = new QLabel(registerform);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 110, 143, 28));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        password = new QLineEdit(registerform);
        password->setObjectName("password");
        password->setGeometry(QRect(10, 150, 301, 31));
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);border-radius: 8px;"));
        password->setEchoMode(QLineEdit::Password);
        pushButton_7 = new QPushButton(registerform);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(120, 380, 75, 27));
        pushButton_7->setFont(font3);
        pushButton_7->setStyleSheet(QString::fromUtf8("#pushButton {border-radius: 8px;color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);}\n"
"#pushButton:hover{\n"
"	\n"
"	background-color: rgb(85, 85, 127);\n"
"}"));
        label_4 = new QLabel(registerform);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 20, 152, 28));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        comboBox_2 = new QComboBox(registerform);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(40, 230, 241, 22));
        comboBox_3 = new QComboBox(registerform);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(40, 280, 241, 22));
        comboBox_4 = new QComboBox(registerform);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(40, 330, 241, 22));
        label_17 = new QLabel(registerform);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 190, 291, 28));
        label_17->setFont(font2);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(register_2page);
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_7 = new QVBoxLayout(page);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        pushButton_18 = new QPushButton(page);
        pushButton_18->setObjectName("pushButton_18");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Sitka Small")});
        font5.setPointSize(16);
        pushButton_18->setFont(font5);

        verticalLayout_7->addWidget(pushButton_18);

        label_14 = new QLabel(page);
        label_14->setObjectName("label_14");
        QFont font6;
        font6.setPointSize(14);
        label_14->setFont(font6);

        verticalLayout_7->addWidget(label_14);

        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName("lineEdit_2");
        QFont font7;
        font7.setPointSize(12);
        lineEdit_2->setFont(font7);

        verticalLayout_7->addWidget(lineEdit_2);

        label_12 = new QLabel(page);
        label_12->setObjectName("label_12");
        label_12->setFont(font6);

        verticalLayout_7->addWidget(label_12);

        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font7);

        verticalLayout_7->addWidget(lineEdit);

        label_13 = new QLabel(page);
        label_13->setObjectName("label_13");
        label_13->setFont(font6);

        verticalLayout_7->addWidget(label_13);

        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setMaximumDate(QDate(2023, 5, 30));
        dateEdit->setMinimumDate(QDate(2000, 1, 15));

        verticalLayout_7->addWidget(dateEdit);

        label_19 = new QLabel(page);
        label_19->setObjectName("label_19");
        label_19->setFont(font6);

        verticalLayout_7->addWidget(label_19);

        comboBox_5 = new QComboBox(page);
        comboBox_5->setObjectName("comboBox_5");

        verticalLayout_7->addWidget(comboBox_5);

        label_16 = new QLabel(page);
        label_16->setObjectName("label_16");
        label_16->setFont(font6);

        verticalLayout_7->addWidget(label_16);

        textEdit = new QTextEdit(page);
        textEdit->setObjectName("textEdit");
        textEdit->setFont(font7);

        verticalLayout_7->addWidget(textEdit);

        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font5);

        verticalLayout_7->addWidget(pushButton_5);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setStyleSheet(QString::fromUtf8("#page_2{\n"
"border-image:url(:/qt1/design20.png)}"));
        verticalLayout_11 = new QVBoxLayout(page_2);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName("verticalLayout_10");
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName("pushButton_6");
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font8.setPointSize(14);
        pushButton_6->setFont(font8);

        verticalLayout_10->addWidget(pushButton_6);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName("formLayout_3");
        nameLabel = new QLabel(page_2);
        nameLabel->setObjectName("nameLabel");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(page_2);
        nameLineEdit->setObjectName("nameLineEdit");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, nameLineEdit);


        verticalLayout_10->addLayout(formLayout_3);

        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName("pushButton_8");
        QFont font9;
        font9.setFamilies({QString::fromUtf8("System")});
        font9.setPointSize(12);
        font9.setBold(true);
        pushButton_8->setFont(font9);

        verticalLayout_10->addWidget(pushButton_8);


        verticalLayout_11->addLayout(verticalLayout_10);

        stackedWidget->addWidget(page_2);
        updatepage = new QWidget();
        updatepage->setObjectName("updatepage");
        updatepage->setStyleSheet(QString::fromUtf8("#updatepage{\n"
"border-image:url(:/qt1/design20.png)}"));
        groupBox = new QGroupBox(updatepage);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(350, 60, 441, 381));
        groupBox->setStyleSheet(QString::fromUtf8("border-image:none"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font10;
        font10.setPointSize(18);
        font10.setBold(true);
        label->setFont(font10);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)"));

        horizontalLayout_4->addWidget(label);

        id_edit = new QLineEdit(groupBox);
        id_edit->setObjectName("id_edit");

        horizontalLayout_4->addWidget(id_edit);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);

        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setFont(font10);
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)"));

        horizontalLayout_6->addWidget(label_6);

        Title_edit = new QLineEdit(groupBox);
        Title_edit->setObjectName("Title_edit");

        horizontalLayout_6->addWidget(Title_edit);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 4);

        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setFont(font10);
        label_9->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)"));

        horizontalLayout_7->addWidget(label_9);

        Description_edit = new QLineEdit(groupBox);
        Description_edit->setObjectName("Description_edit");

        horizontalLayout_7->addWidget(Description_edit);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 4);

        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Segoe UI")});
        font11.setPointSize(18);
        font11.setBold(true);
        font11.setItalic(false);
        label_10->setFont(font11);
        label_10->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0);\n"
"font: 700 18pt \"Segoe UI\";"));

        horizontalLayout_8->addWidget(label_10);

        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName("dateEdit_2");

        horizontalLayout_8->addWidget(dateEdit_2);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 4);

        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setFont(font10);
        label_11->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)"));

        horizontalLayout_9->addWidget(label_11);

        Category_edit = new QLineEdit(groupBox);
        Category_edit->setObjectName("Category_edit");

        horizontalLayout_9->addWidget(Category_edit);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        btn_save = new QPushButton(groupBox);
        btn_save->setObjectName("btn_save");

        horizontalLayout_10->addWidget(btn_save);

        btn_cancel = new QPushButton(groupBox);
        btn_cancel->setObjectName("btn_cancel");

        horizontalLayout_10->addWidget(btn_cancel);


        verticalLayout_3->addLayout(horizontalLayout_10);

        stackedWidget->addWidget(updatepage);
        userpage = new QWidget();
        userpage->setObjectName("userpage");
        verticalLayout_4 = new QVBoxLayout(userpage);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_14 = new QPushButton(userpage);
        pushButton_14->setObjectName("pushButton_14");

        horizontalLayout_3->addWidget(pushButton_14);

        comboBox = new QComboBox(userpage);
        comboBox->setObjectName("comboBox");

        horizontalLayout_3->addWidget(comboBox);

        pushButton1 = new QPushButton(userpage);
        pushButton1->setObjectName("pushButton1");

        horizontalLayout_3->addWidget(pushButton1);

        pushButton2 = new QPushButton(userpage);
        pushButton2->setObjectName("pushButton2");

        horizontalLayout_3->addWidget(pushButton2);

        pushButton_21 = new QPushButton(userpage);
        pushButton_21->setObjectName("pushButton_21");

        horizontalLayout_3->addWidget(pushButton_21);


        verticalLayout_4->addLayout(horizontalLayout_3);

        scrollArea = new QScrollArea(userpage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 782, 456));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName("verticalLayout_5");

        verticalLayout_6->addLayout(verticalLayout_5);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        stackedWidget->addWidget(userpage);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        page_4->setStyleSheet(QString::fromUtf8("#page_4{\n"
"border-image:url(:/qt1/design20.png)}"));
        lineEdit_3 = new QLineEdit(page_4);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(290, 130, 371, 41));
        pushButton_16 = new QPushButton(page_4);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(400, 210, 151, 31));
        label_15 = new QLabel(page_4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(390, 260, 161, 61));
        pushButton_17 = new QPushButton(page_4);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(430, 350, 75, 24));
        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setStyleSheet(QString::fromUtf8("#page_3{\n"
"border-image:url(:/qt1/design20.png)}"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(280, 130, 511, 181));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 30, 191, 131));
        textEdit_4 = new QTextEdit(groupBox_2);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(50, 30, 111, 31));
        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(70, 70, 75, 24));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(260, 30, 241, 131));
        textEdit_2 = new QTextEdit(groupBox_4);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(10, 30, 104, 31));
        textEdit_3 = new QTextEdit(groupBox_4);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(130, 30, 101, 31));
        pushButton_13 = new QPushButton(groupBox_4);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(80, 70, 75, 24));
        pushButton_19 = new QPushButton(page_3);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(370, 330, 341, 24));
        stackedWidget->addWidget(page_3);
        adminpage = new QWidget();
        adminpage->setObjectName("adminpage");
        verticalLayout_2 = new QVBoxLayout(adminpage);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea_2 = new QScrollArea(adminpage);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 782, 488));
        scrollAreaWidgetContents_2->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents_2{\n"
"border-image:url(:/qt1/design20.png)}"));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_2 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_10->setObjectName("pushButton_10");

        horizontalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_11->setObjectName("pushButton_11");

        horizontalLayout->addWidget(pushButton_11);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_9->setObjectName("pushButton_9");

        horizontalLayout->addWidget(pushButton_9);

        pushButton_15 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_15->setObjectName("pushButton_15");

        horizontalLayout->addWidget(pushButton_15);

        pushButton_20 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_20->setObjectName("pushButton_20");

        horizontalLayout->addWidget(pushButton_20);


        verticalLayout_8->addLayout(horizontalLayout);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName("verticalLayout_9");

        verticalLayout_8->addLayout(verticalLayout_9);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea_2);

        stackedWidget->addWidget(adminpage);

        verticalLayout->addWidget(stackedWidget);

        qt1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qt1Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 820, 22));
        qt1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qt1Class);
        mainToolBar->setObjectName("mainToolBar");
        qt1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qt1Class);
        statusBar->setObjectName("statusBar");
        qt1Class->setStatusBar(statusBar);

        retranslateUi(qt1Class);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(qt1Class);
    } // setupUi

    void retranslateUi(QMainWindow *qt1Class)
    {
        qt1Class->setWindowTitle(QCoreApplication::translate("qt1Class", "qt1", nullptr));
        label_3->setText(QCoreApplication::translate("qt1Class", "Login And Registration System", nullptr));
        loginform->setTitle(QCoreApplication::translate("qt1Class", "Login", nullptr));
        label_7->setText(QCoreApplication::translate("qt1Class", "User name", nullptr));
        label_8->setText(QCoreApplication::translate("qt1Class", "Password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("qt1Class", "Login", nullptr));
        password_2->setPlaceholderText(QCoreApplication::translate("qt1Class", "password", nullptr));
        username_2->setPlaceholderText(QCoreApplication::translate("qt1Class", "username", nullptr));
        pushButton_4->setText(QCoreApplication::translate("qt1Class", "Register", nullptr));
        label_2->setText(QCoreApplication::translate("qt1Class", "Register", nullptr));
        registerform->setTitle(QCoreApplication::translate("qt1Class", "Register", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("qt1Class", "username", nullptr));
        label_5->setText(QCoreApplication::translate("qt1Class", "Password", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("qt1Class", "password", nullptr));
        pushButton_7->setText(QCoreApplication::translate("qt1Class", "Register", nullptr));
        label_4->setText(QCoreApplication::translate("qt1Class", "User name", nullptr));
        label_17->setText(QCoreApplication::translate("qt1Class", "prefered categories", nullptr));
        pushButton_18->setText(QCoreApplication::translate("qt1Class", "back", nullptr));
        label_14->setText(QCoreApplication::translate("qt1Class", "ID", nullptr));
        label_12->setText(QCoreApplication::translate("qt1Class", "Titel", nullptr));
        label_13->setText(QCoreApplication::translate("qt1Class", "Date", nullptr));
        label_19->setText(QCoreApplication::translate("qt1Class", "category", nullptr));
        label_16->setText(QCoreApplication::translate("qt1Class", "Description", nullptr));
        pushButton_5->setText(QCoreApplication::translate("qt1Class", "Add news", nullptr));
        pushButton_6->setText(QCoreApplication::translate("qt1Class", "back", nullptr));
        nameLabel->setText(QCoreApplication::translate("qt1Class", "ID", nullptr));
        pushButton_8->setText(QCoreApplication::translate("qt1Class", "delete", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("qt1Class", "ID", nullptr));
        label_6->setText(QCoreApplication::translate("qt1Class", "Title", nullptr));
        label_9->setText(QCoreApplication::translate("qt1Class", "Description", nullptr));
        label_10->setText(QCoreApplication::translate("qt1Class", "Date", nullptr));
        label_11->setText(QCoreApplication::translate("qt1Class", "Category", nullptr));
        btn_save->setText(QCoreApplication::translate("qt1Class", "Save", nullptr));
        btn_cancel->setText(QCoreApplication::translate("qt1Class", "back", nullptr));
        pushButton_14->setText(QCoreApplication::translate("qt1Class", "Prefered Category", nullptr));
        pushButton1->setText(QCoreApplication::translate("qt1Class", "Display By Rate", nullptr));
        pushButton2->setText(QCoreApplication::translate("qt1Class", "Display By Date", nullptr));
        pushButton_21->setText(QCoreApplication::translate("qt1Class", "Log out", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("qt1Class", "enter title", nullptr));
        pushButton_16->setText(QCoreApplication::translate("qt1Class", "display", nullptr));
        label_15->setText(QCoreApplication::translate("qt1Class", "TextLabel", nullptr));
        pushButton_17->setText(QCoreApplication::translate("qt1Class", "back", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("qt1Class", "GroupBox", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("qt1Class", "Add", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("qt1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_4->setPlaceholderText(QCoreApplication::translate("qt1Class", "enter category", nullptr));
        pushButton_12->setText(QCoreApplication::translate("qt1Class", "Add", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("qt1Class", "Assign", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("qt1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_2->setPlaceholderText(QCoreApplication::translate("qt1Class", "enter category", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("qt1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_3->setPlaceholderText(QCoreApplication::translate("qt1Class", "enter news id", nullptr));
        pushButton_13->setText(QCoreApplication::translate("qt1Class", "Assign ", nullptr));
        pushButton_19->setText(QCoreApplication::translate("qt1Class", "back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("qt1Class", "display average rate", nullptr));
        pushButton->setText(QCoreApplication::translate("qt1Class", "update news", nullptr));
        pushButton_10->setText(QCoreApplication::translate("qt1Class", "Add News", nullptr));
        pushButton_11->setText(QCoreApplication::translate("qt1Class", "Delete News", nullptr));
        pushButton_9->setText(QCoreApplication::translate("qt1Class", "Display News", nullptr));
        pushButton_15->setText(QCoreApplication::translate("qt1Class", "Add/Assign Category", nullptr));
        pushButton_20->setText(QCoreApplication::translate("qt1Class", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qt1Class: public Ui_qt1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT1_H
