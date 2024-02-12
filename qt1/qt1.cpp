#include "qt1.h"
#include<map>
#include<vector>
#include<set>
#include<iostream>
#include <QtWidgets/QApplication>
#include <QLabel>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include<unordered_map>
#include <functional>
#include <utility>
#include<QStackedLayout>
#include<QLineEdit>
#include<QTextBrowser>
#include<QInputDialog>
#include<QPushButton>
#include<QMessageBox>
using namespace std;

qt1::qt1(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

qt1::~qt1()
{}


news::news(void) {
    numOfRate = 0;
    numOfSpam = 0;
    numOfcomments = 0;
    f = false;
    rate = 0;
}
string news::ftitle() {
    return title;
}
string news::fdescription() {
    return description;
}
QDate news::fdate() const {
    return date;
}
string news::fcategory() {
    return category;
}

double news::frate() const {
    if (numOfRate > 0)
        return rate / numOfRate;
    else
        return 0;
}
void news::incNumOfRate() {
    numOfRate++;
}
void news::setRate(double n, string u) {
    if (urate.find(u) == urate.end()) {
        incNumOfRate();
    }
    rate -= urate[u];
    rate += n;
    urate[u] = n;
}

user::user(void) {
    pc1 = "";
    pc2 = "";
    pc3 = "";
    nspam = 0;
}

user::user(string us, string pas)
{
    username = us;
    pass = pas;
}

admin::admin(void)
{
}

admin::admin(string us, string pas)
{
    username = us;
    pass = pas;
}


string user::getSelectedCategory(qt1* w)
{
    string selectedNews = w->ui.comboBox->currentText().toStdString();
    return selectedNews;
}



void user::addComments(QHBoxLayout* rowLayout2, news* n) {

    QPushButton* button2 = new QPushButton("Add Comment");
    rowLayout2->addWidget(button2);

    QPushButton* button3 = new QPushButton("Comments");
    rowLayout2->addWidget(button3);

    string username1 = username;
    QObject::connect(button2, &QPushButton::clicked, [=]() {
        bool ok;
        n->numOfcomments++;
        QString comment1 = QInputDialog::getMultiLineText(NULL, "Enter your comment", "comment:", "", &ok);
        if (ok && !comment1.isEmpty()) {
            string comm = comment1.toStdString();
            n->comments.push_back({ username1 , comm });
        }
        });

    QObject::connect(button3, &QPushButton::clicked, [=]() {
        string sCom;

        for (auto& c : n->comments) {
            // Combine username and comment
            sCom += " " + c.first + " : \n " + c.second + "\n\n";
        }

        QLabel* label = new QLabel(QString::fromStdString(sCom));

        label->setAlignment(Qt::AlignTop);
        QFont font = label->font();
        font.setPointSize(12);
        label->setFont(font);
        label->setFixedSize(550, 400);

        QScrollArea* scrollArea = new QScrollArea;
        scrollArea->setWidget(label);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        QVBoxLayout* layout = new QVBoxLayout;
        layout->addWidget(scrollArea);

        QWidget* widget = new QWidget;
        widget->setLayout(layout);

        widget->show();
        });
}

void user::spam(QHBoxLayout* rowLayout2, news* a) {
    QPushButton* button4 = new QPushButton("Spam");
    rowLayout2->addWidget(button4);
    QObject::connect(button4, &QPushButton::clicked, [=]() {
        a->numOfSpam++;
        nspam++;
        uspam[a->id] = true;
        });
}

void user::dis_ui(qt1* w, news* a, QVBoxLayout* verticalLayout, QHBoxLayout* rowLayout) {
    QTextBrowser* textEdit = new QTextBrowser;
    textEdit->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    string s = a->fdescription() + "\n\n" + a->fcategory() + "\t\t" + a->fdate().toString().toStdString() + "\t\t" + to_string(a->frate()) + "\n\n Spamed by: " + to_string(a->numOfSpam) + " user/s ";
    textEdit->setPlainText(QString::fromStdString(s));
    QGroupBox* groupBox1 = new QGroupBox(QString::fromStdString(a->ftitle()));
    QVBoxLayout* vLayout1 = new QVBoxLayout;
    QHBoxLayout* rowLayout1 = new QHBoxLayout;
    rowLayout1->addWidget(textEdit);
    vLayout1->addLayout(rowLayout1);
    QHBoxLayout* rowLayout2 = new QHBoxLayout;
    QPushButton* button1 = new QPushButton("Add Rate");
    rowLayout2->addWidget(button1);
    vLayout1->addLayout(rowLayout2);
    groupBox1->setLayout(vLayout1);
    rowLayout->addWidget(groupBox1);
    QObject::connect(button1, &QPushButton::clicked, [=]() {
        double num10 = QInputDialog::getDouble(NULL, "Number", "Number:", 0.0, 0.0, 5.0, 1);
        a->setRate(num10, username);
        string s = a->fdescription() + "\n\n" + a->fcategory() + "\t\t" + a->fdate().toString().toStdString() + "\t\t" + to_string(a->frate()) + "\n\n Spamed by: " + to_string(a->numOfSpam) + " user/s ";
        textEdit->setPlainText(QString::fromStdString(s));
        });

    addComments(rowLayout2, a);

    spam(rowLayout2, a);

    // If we have reached the maximum number of boxes in a row,
    // add the current row layout to the vertical layout and create
    // a new horizontal layout for the next row

}


bool compareByRate(const news* a, const news* b) {
    return a->frate() > b->frate();
}


void user::displayByRate(list<news*>& dis_rate, string filteredCategory, qt1* w) {

    dis_rate.sort(compareByRate);
    delete groupBox;
    groupBox = new QGroupBox;
    w->ui.verticalLayout_5->addWidget(groupBox);

    // Create a vertical layout
    QVBoxLayout* verticalLayout = new QVBoxLayout;
    // Create a horizontal layout for each row
    QHBoxLayout* rowLayout = new QHBoxLayout;

    // Create a group box
    // Create a text edit for each string in the vector
    for (auto& a : dis_rate) {
        if ((a->fcategory() == filteredCategory || filteredCategory == "All") && uspam[a->id] == false && (a->frate() >= 2 || a->numOfRate == 0)) {
            dis_ui(w, a, verticalLayout, rowLayout);
            verticalLayout->addLayout(rowLayout);
            rowLayout = new QHBoxLayout;
        }
    }

    // Add any remaining boxes to the last row
    groupBox->setLayout(verticalLayout);
    // Add the group box to the parent widget
}

void user::displayByDate(string filteredCategory, qt1* w, multiset<news*, setComparator>& dis_date) {
    delete groupBox;
    groupBox = new QGroupBox;
    w->ui.verticalLayout_5->addWidget(groupBox);
    // Create a vertical layout
    QVBoxLayout* verticalLayout = new QVBoxLayout;

    // Create a horizontal layout for each row
    QHBoxLayout* rowLayout = new QHBoxLayout;

    // Create a group box

    // Create a text edit for each string in the vector
    for (auto& a : dis_date) {
        if ((a->fcategory() == filteredCategory || filteredCategory == "All") && uspam[a->id] == false && (a->frate() >= 2 || a->numOfRate == 0)) {
            dis_ui(w, a, verticalLayout, rowLayout);
            verticalLayout->addLayout(rowLayout);
            rowLayout = new QHBoxLayout;
        }
    }
    // Add any remaining boxes to the last row
    groupBox->setLayout(verticalLayout);
    // Add the group box to the parent widget
}

void user::prefCat(qt1* w, multiset<news*, setComparator>& dis_date) {

    delete groupBox;
    groupBox = new QGroupBox;
    w->ui.verticalLayout_5->addWidget(groupBox);
    // Create a vertical layout
    QVBoxLayout* verticalLayout = new QVBoxLayout;

    // Create a horizontal layout for each row
    QHBoxLayout* rowLayout = new QHBoxLayout;

    for (auto& a : dis_date) {
        if ((a->fcategory() == pc1 || a->fcategory() == pc2 || a->fcategory() == pc3) && (uspam[a->id] == false) && (a->frate() >= 2 || a->numOfRate == 0)) {
            dis_ui(w, a, verticalLayout, rowLayout);
            verticalLayout->addLayout(rowLayout);
            rowLayout = new QHBoxLayout;
        }
    }
    // Add any remaining boxes to the last row

    groupBox->setLayout(verticalLayout);

}
void admin::displayByDate(qt1* w, multiset<news*, setComparator>& dis_date)
{
    delete groupBoxa;
    groupBoxa = new QGroupBox;
    w->ui.verticalLayout_9->addWidget(groupBoxa);
    // Create a vertical layout
    QVBoxLayout* verticalLayout = new QVBoxLayout;

    // Create a horizontal layout for each row
    QHBoxLayout* rowLayout = new QHBoxLayout;

    // Create a group box

    // Create a text edit for each string in the vector
    for (auto& a : dis_date) {
        QTextBrowser* textEdit = new QTextBrowser;
        textEdit->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        string s = a->fdescription() + "\n\n" + a->fcategory() + "\t\t" + a->fdate().toString().toStdString() + "\t\t" + to_string(a->frate()) + "\n\n Spamed by: " + to_string(a->numOfSpam) + " user/s ";
        textEdit->setPlainText(QString::fromStdString(s));
        QGroupBox* groupBox1 = new QGroupBox(QString::fromStdString(a->title));
        QVBoxLayout* vLayout1 = new QVBoxLayout;
        QHBoxLayout* rowLayout1 = new QHBoxLayout;
        rowLayout1->addWidget(textEdit);
        vLayout1->addLayout(rowLayout1);
        QHBoxLayout* rowLayout2 = new QHBoxLayout;
        QPushButton* button3 = new QPushButton("Comments");
        rowLayout2->addWidget(button3);
        vLayout1->addLayout(rowLayout2);
        groupBox1->setLayout(vLayout1);
        rowLayout->addWidget(groupBox1);


        QObject::connect(button3, &QPushButton::clicked, [=]() {
            string sCom;

            for (auto& c : a->comments) {
                // Combine username and comment
                sCom += " " + c.first + " : \n " + c.second + "\n\n";
            }

            QLabel* label = new QLabel(QString::fromStdString(sCom));

            label->setAlignment(Qt::AlignTop);
            QFont font = label->font();
            font.setPointSize(12);
            label->setFont(font);
            label->setFixedSize(550, 400);


            QScrollArea* scrollArea = new QScrollArea;
            scrollArea->setWidget(label);
            scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

            QVBoxLayout* layout = new QVBoxLayout;
            layout->addWidget(scrollArea);

            QWidget* widget = new QWidget;
            widget->setLayout(layout);

            widget->show();
            });

        // If we have reached the maximum number of boxes in a row,
        // add the current row layout to the vertical layout and create
        // a new horizontal layout for the next row

        verticalLayout->addLayout(rowLayout);
        rowLayout = new QHBoxLayout;
    }

    // Add any remaining boxes to the last row

    groupBoxa->setLayout(verticalLayout);

    // Add the group box to the parent widget
}
void admin::update(unordered_map<string, news*>& m, multiset<news*, setComparator>& disdate, qt1* w) {

    string s1 = w->ui.id_edit->text().toStdString();
    string s2 = w->ui.Title_edit->text().toStdString();
    QDate date1 = w->ui.dateEdit_2->date();
    string s4 = w->ui.Description_edit->text().toStdString();
    string s5 = w->ui.Category_edit->text().toStdString();

    if (m.find(s1) != m.end()) {
        m[s1]->date = date1;
        multiset<news*>::iterator it;
        for (it = disdate.begin(); it != disdate.end(); it++) {
            if ((*it)->id == s1) {
                disdate.erase(it);
                break;
            }
        }
        if (s2 != "") {
            m[s1]->title = s2;
        }
        if (s4 != "") {
            m[s1]->description = s4;
        }
        if (s5 != "") {
            m[s1]->category = s5;
        }
        disdate.insert(m[s1]);
    }
}

void admin::add(qt1* w, list<news*>& disrate, multiset<news*, setComparator>& disdate, unordered_map<string, news*>& upd, unordered_map<string, list<news*>>& title_news) {

    // get values from the form when button its clicked ;
    QString id1 = w->ui.lineEdit_2->text();
    QString titel1 = w->ui.lineEdit->text();
    QDate date1 = w->ui.dateEdit->date();
    QString description1 = w->ui.textEdit->toPlainText();

    // save the new in a data structer 
    if (titel1 != "" && description1 != "" && upd.find(id1.toStdString()) == upd.end()) {
        news* n1 = new news;
        n1->id = id1.toStdString();
        n1->title = titel1.toStdString();
        n1->date = date1;
        n1->category = w->ui.comboBox_5->currentText().toStdString();
        n1->description = description1.toStdString();
        disrate.push_back(n1);
        disdate.insert(n1);
        upd[n1->id] = n1;
        title_news[n1->title].push_back(n1);
        // create sucsess tap
        QMessageBox messageBox;
        messageBox.setWindowTitle("succses");
        messageBox.setText("the news is uploaded succsesflly ");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.setStandardButtons(QMessageBox::Ok);
        messageBox.setStyleSheet("QMessageBox {"
            "background-color: #f8f8f8;"
            "border: 1px solid #e8e8e8;"
            "}"
            "QMessageBox QLabel {"
            "color: #444444;"
            "}"
            "QMessageBox QPushButton {"
            "background-color: #2a82da;"
            "color: #ffffff;"
            "border: none;"
            "border-radius: 3px;"
            "padding: 5px 10px;"
            "}"
            "QMessageBox QPushButton:hover {"
            "background-color: #1e70bf;"
            "}"
            "QMessageBox QPushButton:pressed {"
            "background-color: #14568e;"
            "}");
        messageBox.exec();

    }
    else {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Warning");
        messageBox.setText("Fill all the fields to add news , or id already exist");
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.setStandardButtons(QMessageBox::Ok);
        messageBox.setStyleSheet("QMessageBox {"
            "background-color: #f8f8f8;"
            "border: 1px solid #e8e8e8;"
            "}"
            "QMessageBox QLabel {"
            "color: #444444;"
            "}"
            "QMessageBox QPushButton {"
            "background-color: #2a82da;"
            "color: #ffffff;"
            "border: none;"
            "border-radius: 3px;"
            "padding: 5px 10px;"
            "}"
            "QMessageBox QPushButton:hover {"
            "background-color: #1e70bf;"
            "}"
            "QMessageBox QPushButton:pressed {"
            "background-color: #14568e;"
            "}");
        messageBox.exec();
    }

}

void admin::removeNew(qt1* w, list<news*>& disrate, multiset<news*, setComparator>& disdate, unordered_map<string, news*>& upd, unordered_map<string, list<news*>>& title_news) {
    string id1 = w->ui.nameLineEdit->text().toStdString();
    if (upd.find(id1) != upd.end()) {
        list<news*>::iterator it;
        for (it = title_news[upd[id1]->title].begin(); it != title_news[upd[id1]->title].end(); it++) {
            if ((*it)->id == id1) {
                title_news[upd[id1]->title].erase(it);
                break;
            }
        }
        upd.erase(id1);
        list<news*>::iterator it1;
        for (it1 = disrate.begin(); it1 != disrate.end(); it1++) {
            if ((*it1)->id == id1) {
                disrate.erase(it1);
                break;
            }
        }
        multiset<news*>::iterator it2;
        for (it2 = disdate.begin(); it2 != disdate.end(); it2++) {
            if ((*it2)->id == id1) {
                disdate.erase(it2);
                break;
            }
        }
    }
    else {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Warning");
        messageBox.setText("id not found");
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.setStandardButtons(QMessageBox::Ok);
        messageBox.setStyleSheet("QMessageBox {"
            "background-color: #f8f8f8;"
            "border: 1px solid #e8e8e8;"
            "}"
            "QMessageBox QLabel {"
            "color: #444444;"
            "}"
            "QMessageBox QPushButton {"
            "background-color: #2a82da;"
            "color: #ffffff;"
            "border: none;"
            "border-radius: 3px;"
            "padding: 5px 10px;"
            "}"
            "QMessageBox QPushButton:hover {"
            "background-color: #1e70bf;"
            "}"
            "QMessageBox QPushButton:pressed {"
            "background-color: #14568e;"
            "}");
        messageBox.exec();
    }
}

void admin::displayAverageRate(qt1* w, unordered_map<string, list<news*>> m) {
    double rate = 0;
    string title = w->ui.lineEdit_3->text().toStdString();
    if (title != "" && m.find(title) != m.end() && m[title].size() > 0) {
        for (auto a : m[title]) {
            rate += a->frate();
        }
        QString s = QString::fromStdString(to_string(rate / m[title].size()));
        w->ui.label_15->setText(s);
    }
    else {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Warning");
        messageBox.setText("title not found");
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.setStandardButtons(QMessageBox::Ok);
        messageBox.setStyleSheet("QMessageBox {"
            "background-color: #f8f8f8;"
            "border: 1px solid #e8e8e8;"
            "}"
            "QMessageBox QLabel {"
            "color: #444444;"
            "}"
            "QMessageBox QPushButton {"
            "background-color: #2a82da;"
            "color: #ffffff;"
            "border: none;"
            "border-radius: 3px;"
            "padding: 5px 10px;"
            "}"
            "QMessageBox QPushButton:hover {"
            "background-color: #1e70bf;"
            "}"
            "QMessageBox QPushButton:pressed {"
            "background-color: #14568e;"
            "}");
        messageBox.exec();
    }

}

void admin::AddCategory(qt1* w, set<string>& categories)
{
    string text = w->ui.textEdit_4->toPlainText().toStdString();

    if (categories.find(text) == categories.end()) {
        categories.insert(text);
        w->ui.comboBox_5->addItem(QString::fromStdString(text));
        w->ui.comboBox_2->addItem(QString::fromStdString(text));
        w->ui.comboBox_3->addItem(QString::fromStdString(text));
        w->ui.comboBox_4->addItem(QString::fromStdString(text));
        w->ui.comboBox->addItem(QString::fromStdString(text));
        QMessageBox messageBox;
        messageBox.setIcon(QMessageBox::Warning);
        messageBox.setText("category added successfuly");
        messageBox.setWindowTitle("Warning");
        // Add the "Ok" button and set the default button to "Ok"
        messageBox.addButton(QMessageBox::Ok);
        messageBox.setDefaultButton(QMessageBox::Ok);

        // Show the message box and wait for the user to dismiss it
        messageBox.exec();
    }
    else {
        QMessageBox messageBox;
        messageBox.setIcon(QMessageBox::Warning);
        messageBox.setText(" category already exist");
        messageBox.setWindowTitle("Warning");
        // Add the "Ok" button and set the default button to "Ok"
        messageBox.addButton(QMessageBox::Ok);
        messageBox.setDefaultButton(QMessageBox::Ok);

        // Show the message box and wait for the user to dismiss it
        messageBox.exec();
    }
}

void admin::Assign(qt1* w, set<string>& categories, unordered_map<string, news*>& upd)
{
    string txt_cag = w->ui.textEdit_2->toPlainText().toStdString();
    string txt_id = w->ui.textEdit_3->toPlainText().toStdString();
    if (upd.find(txt_id) != upd.end() && categories.find(txt_cag) != categories.end()) {
        upd[txt_id]->category = txt_cag;
        QMessageBox messageBox;
        messageBox.setIcon(QMessageBox::Warning);
        messageBox.setText("Assigned successfuly");
        messageBox.setWindowTitle("Warning");
        // Add the "Ok" button and set the default button to "Ok"
        messageBox.addButton(QMessageBox::Ok);
        messageBox.setDefaultButton(QMessageBox::Ok);

        // Show the message box and wait for the user to dismiss it
        messageBox.exec();
    }
    else {
        QMessageBox messageBox;
        messageBox.setIcon(QMessageBox::Warning);
        messageBox.setText("id or category not found");
        messageBox.setWindowTitle("Warning");
        // Add the "Ok" button and set the default button to "Ok"
        messageBox.addButton(QMessageBox::Ok);
        messageBox.setDefaultButton(QMessageBox::Ok);

        // Show the message box and wait for the user to dismiss it
        messageBox.exec();
    }
}