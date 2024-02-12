#include<iostream>
#include "qt1.h"
#include "ui_qt1.h"
#include <QtWidgets/QApplication>
#include <QLabel>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include<QStackedLayout>
#include<fstream>
#include <QMessageBox>
#include<unordered_map>
#include<string>
#include<QDate>
#include<list>
#include<set>
using namespace std;
user* a; admin* d;
fstream f_admin, f_user, f_news, f_cat;

unordered_map<string, string>admins;
unordered_map<string, user*>users;
list<news*>disrate;
multiset<news*, setComparator>disdate;
unordered_map<string, news*>upd;
set<string> categories;
unordered_map<string, list<news*>> title_news;

void admin_read()
{
	string user, pass;
	f_admin.open("admin.txt", ios::in);
	while (getline(f_admin, user, '#'))
	{
		getline(f_admin, pass);
		admins.insert({ user,pass });
	}
	f_admin.close();
}

void admin_write() {
	f_admin.open("admin.txt", ios::out);
	unordered_map<string, string>::iterator it;
	it = admins.begin();
	while (it != admins.end())
	{
		f_admin << it->first << "#" << it->second << "\n";
		it++;
	}
	f_admin.close();
}

void user_write() {
	f_user.open("user.txt", ios::out);
	unordered_map<string, user*>::iterator it;
	it = users.begin();
	while (it != users.end())
	{
		f_user << it->first << "#" << it->second->pass << "#" << it->second->pc1 << "#" << it->second->pc2
			<< "#" << it->second->pc3 << "#" << it->second->nspam << "#";

		for (auto i : it->second->uspam)
		{
			if (i.second == 1)
				f_user << i.first << "#" << i.second << "#";
		}

		it++;
	}
	f_user.close();
}

void user_read()
{
	string usern, pass, fa1, fa2, fa3, a, f, n;
	int x;
	bool ff;


	f_user.open("user.txt", ios::in);
	while (getline(f_user, usern, '#')) //  adm_size is the numder of admins
	{
		user* us = new user();
		getline(f_user, pass, '#');
		getline(f_user, fa1, '#');
		getline(f_user, fa2, '#');
		getline(f_user, fa3, '#');
		getline(f_user, n, '#');

		x = stoi(n);

		for (size_t i = 0; i < x; i++)
		{
			getline(f_user, a, '#');
			getline(f_user, f, '#');
			if (f == "1")
			{
				ff = true;
			}
			else
			{
				ff = false;
			}
			us->uspam[a] = ff;
		}
		us->pc1 = fa1;
		us->pc2 = fa2;
		us->pc3 = fa3;
		us->pass = pass;
		us->nspam = x;
		us->username = usern;

		users[usern] = us;

	}
	f_user.close();
}

void news_read() {
	string title, desc,d, rate, nr, ns, caa, nco, s1, s2, id;
	int x, numspam, numrate;
	double r;
	QDate date1;
	f_news.open("news.txt", ios::in);
	while (getline(f_news, id, '#'))
	{
		getline(f_news, title, '#');
		news* n = new news();
		getline(f_news, desc, '#');
		getline(f_news, d, '#');
		getline(f_news, rate, '#');
		getline(f_news, nr, '#');
		getline(f_news, caa, '#');
		getline(f_news, ns, '#');
		getline(f_news, nco, '#');
		x = stoi(nco);

		numspam = stoi(ns);
		numrate = stoi(nr);
		date1 = QDate::fromString(QString::fromStdString(d), "dd/MM/yyyy");
		r = stod(rate);
		for (int i = 0; i < x; i++)
		{
			getline(f_news, s1, '#');
			getline(f_news, s2, '#');

			n->comments.push_back({ s1,s2 });

		}
		for (int i = 0; i < numrate; i++)
		{
			getline(f_news, s1, '#');
			getline(f_news, s2, '#');
			double d1 = stod(s2);
			n->urate[s1] = d1;
		}
		n->id = id;
		n->category = caa;
		n->date = date1;
		n->description = desc;
		n->numOfcomments = x;
		n->rate = r;
		n->title = title;
		n->numOfRate = numrate;
		n->numOfSpam = numspam;
		upd[id] = n;
		disrate.push_back(n);
		disdate.insert(n);
		title_news[n->title].push_back(n);
	}
	f_news.close();

}
void news_write() {
	f_news.open("news.txt", ios::out);
	unordered_map<string, news*>::iterator it;
	it = upd.begin();
	while (it != upd.end())
	{
		f_news << it->first << "#" << it->second->title << "#"
			<< it->second->description << "#" << it->second->date.toString("dd/MM/yyyy").toStdString()
			<< "#" << it->second->rate << "#" << it->second->numOfRate
			<< "#" << it->second->category << "#" << it->second->numOfSpam << "#"
			<< it->second->numOfcomments << "#";
		for (auto i : it->second->comments)
		{
			f_news << i.first << "#" << i.second << "#";
		}
		for (auto i : it->second->urate)
		{
			f_news << i.first << "#" << i.second << "#";
		}
		it++;
	}
	f_news.close();
}

void catread() {
	string ca;
	f_cat.open("cat.txt", ios::in);
	while (getline(f_cat, ca, '#')) {
		categories.insert(ca);
	}
	f_cat.close();
}
void catwrite() {
	f_cat.open("cat.txt", ios::out);
	for (auto i : categories)
	{
		f_cat << i << "#";
	}
	f_cat.close();
}

void login(qt1* w) {

	string use, pass;

	use = w->ui.username_2->text().toStdString();
	pass = w->ui.password_2->text().toStdString();

	if (admins.find(use) != admins.end()) {
		if (admins.at(use) == pass) {
			w->ui.stackedWidget->setCurrentIndex(8);
			d = new admin(use, pass);
		}
		else
		{
			QMessageBox messageBox;
			messageBox.setIcon(QMessageBox::Warning);
			messageBox.setText(" Password is not correct");
			messageBox.setWindowTitle("Warning");
			// Add the "Ok" button and set the default button to "Ok"
			messageBox.addButton(QMessageBox::Ok);
			messageBox.setDefaultButton(QMessageBox::Ok);

			// Show the message box and wait for the user to dismiss it
			messageBox.exec();
		}
	}
	else if (users.find(use) != users.end())
	{
		if (users[use]->pass == pass) {
			a = users[use];
			a->prefCat(w, disdate);
			w->ui.stackedWidget->setCurrentIndex(5);
		}

		else
		{
			QMessageBox messageBox;
			messageBox.setIcon(QMessageBox::Warning);
			messageBox.setText(" Password is not correct");
			messageBox.setWindowTitle("Warning");
			// Add the "Ok" button and set the default button to "Ok"
			messageBox.addButton(QMessageBox::Ok);
			messageBox.setDefaultButton(QMessageBox::Ok);

			// Show the message box and wait for the user to dismiss it
			messageBox.exec();
		}
	}
	else
	{
		QMessageBox messageBox;
		messageBox.setIcon(QMessageBox::Warning);
		messageBox.setText(" Username is not exist try to SignUp");
		messageBox.setWindowTitle("Warning");
		// Add the "Ok" button and set the default button to "Ok"
		messageBox.addButton(QMessageBox::Ok);
		messageBox.setDefaultButton(QMessageBox::Ok);

		// Show the message box and wait for the user to dismiss it
		messageBox.exec();
	}




};
void reg(qt1* w) {

	string use, pass;
	user* uses = new user();
	use = w->ui.username->text().toStdString();
	pass = w->ui.password->text().toStdString();
	if (admins.find(use) != admins.end() || users.find(use) != users.end()) {
		QMessageBox messageBox;
		messageBox.setIcon(QMessageBox::Warning);
		messageBox.setText(" Username is already exist please try diffrient one");
		messageBox.setWindowTitle("Warning");
		// Add the "Ok" button and set the default button to "Ok"
		messageBox.addButton(QMessageBox::Ok);
		messageBox.setDefaultButton(QMessageBox::Ok);

		// Show the message box and wait for the user to dismiss it
		messageBox.exec();
	}
	else {
		uses->pass = pass;
		uses->username = use;
		uses->pc1 = w->ui.comboBox_2->currentText().toStdString();
		uses->pc2 = w->ui.comboBox_3->currentText().toStdString();
		uses->pc3 = w->ui.comboBox_4->currentText().toStdString();
		users[use] = uses;
		a = uses;

		a->prefCat(w, disdate);
		w->ui.stackedWidget->setCurrentIndex(5);

	}
}

void qt1::closeEvent(QCloseEvent* event)
{
	admin_write();
	user_write();
	catwrite();
	news_write();
	QMainWindow::closeEvent(event);
}

int main(int argc, char* argv[])
{

	QApplication app(argc, argv);

	admin_read();
	user_read();
	catread();
	news_read();
	// Create a main window widget
	qt1* w = new qt1;
	for (auto& it : categories)
	{
		QString s = QString::fromStdString(it);
		w->ui.comboBox_2->addItem(s);
		w->ui.comboBox_3->addItem(s);
		w->ui.comboBox_4->addItem(s);
		w->ui.comboBox_5->addItem(s);
	}
	w->ui.comboBox->addItem("All");
	for (auto& it : categories)
	{
		QString s = QString::fromStdString(it);
		w->ui.comboBox->addItem(s);
	}
	w->ui.stackedWidget->setCurrentIndex(0);

	QObject::connect(w->ui.pushButton_3, &QPushButton::clicked, [&]() {
		login(w);
		});
	QObject::connect(w->ui.pushButton_4, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(1);
		});
	QObject::connect(w->ui.pushButton_7, &QPushButton::clicked, [&]() {
		reg(w);
		});
	QObject::connect(w->ui.pushButton1, &QPushButton::clicked, [&]() {
		string s = a->getSelectedCategory(w);
		a->displayByRate(disrate, s, w);
		});
	QObject::connect(w->ui.pushButton2, &QPushButton::clicked, [&]() {
		string s = a->getSelectedCategory(w);
		a->displayByDate(s, w, disdate);
		});
	QObject::connect(w->ui.pushButton_5, &QPushButton::clicked, [&]() {
		d->add(w, disrate, disdate, upd, title_news);
		w->ui.stackedWidget->setCurrentIndex(8);
		});
	QObject::connect(w->ui.pushButton_10, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(2);
		});
	QObject::connect(w->ui.pushButton_11, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(3);
		});
	QObject::connect(w->ui.pushButton_8, &QPushButton::clicked, [&]() {
		d->removeNew(w, disrate, disdate, upd, title_news);
		w->ui.stackedWidget->setCurrentIndex(8);
		});
	QObject::connect(w->ui.pushButton, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(4);
		});
	QObject::connect(w->ui.btn_save, &QPushButton::clicked, [&]() {
		d->update(upd, disdate, w);
		w->ui.stackedWidget->setCurrentIndex(8);
		});
	QObject::connect(w->ui.btn_cancel, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(8);
		});
	QObject::connect(w->ui.pushButton_2, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(6);
		});
	QObject::connect(w->ui.pushButton_16, &QPushButton::clicked, [&]() {
		d->displayAverageRate(w, title_news);
		});
	QObject::connect(w->ui.pushButton_12, &QPushButton::clicked, [&]() {
		d->AddCategory(w, categories);
		});
	QObject::connect(w->ui.pushButton_13, &QPushButton::clicked, [&]() {
		d->Assign(w, categories, upd);
		});
	QObject::connect(w->ui.pushButton_15, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(7);
		});
	QObject::connect(w->ui.pushButton_14, &QPushButton::clicked, [&]() {
		a->prefCat(w, disdate);
		});

	QObject::connect(w->ui.pushButton_9, &QPushButton::clicked, [&]() {
		d->displayByDate(w, disdate);
		});
	QObject::connect(w->ui.pushButton_17, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(8);
		});
	QObject::connect(w->ui.pushButton_18, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(8);
		});
	QObject::connect(w->ui.pushButton_6, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(8);
		});
	QObject::connect(w->ui.pushButton_19, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(8);
		});
	QObject::connect(w->ui.pushButton_20, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(0);
		});
	QObject::connect(w->ui.pushButton_21, &QPushButton::clicked, [&]() {
		w->ui.stackedWidget->setCurrentIndex(0);
		});

	w->show();


	return app.exec();


}