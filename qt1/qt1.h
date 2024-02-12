#include "ui_qt1.h"
#include <QtWidgets/QMainWindow>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QDate>
#include <unordered_map>
#include <vector>
#include <list>
#include <set>

using namespace std;

class qt1 : public QMainWindow
{
	Q_OBJECT

public:
	qt1(QWidget* parent = nullptr);
	~qt1();

public:
	Ui::qt1Class ui;
	void closeEvent(QCloseEvent* event);
};



class news {
public:
	string title, id;
	string description;
	QDate date;
	double rate;
	int numOfRate;
	string category;
	vector<pair <string, string>> comments;
	int numOfSpam = 0;
	int numOfcomments = 0;
	bool f = false;
	unordered_map<string, double> urate;

	news(void);
	string ftitle();
	string fdescription();
	QDate fdate()const;
	double frate() const;
	string fcategory();
	void setRate(double num, string u);
	void incNumOfRate();
};

struct setComparator {
	bool operator()(const news* n1, const news* n2)const {
		return n1->fdate() > n2->fdate();
	}
};


class user {
public:

	QGroupBox* groupBox = new QGroupBox;
	int nspam = 0;
	string username, pass;
	string pc1, pc2, pc3;
	user(string us, string pas);
	unordered_map<string, bool> uspam;

	user(void);
	void displayByRate(list<news*>& dis_rate, string filteredCategory, qt1* w);
	void displayByDate(string filteredCategory, qt1* w, multiset<news*, setComparator>& dis_date);
	string getSelectedCategory(qt1* w);
	void addComments(QHBoxLayout* rowLayout2, news* n);
	void spam(QHBoxLayout* rowLayout2, news* a);
	void prefCat(qt1* w, multiset<news*, setComparator>& dis_date);
	void dis_ui(qt1* w, news* n, QVBoxLayout* verticalLayout, QHBoxLayout* rowLayout);
};


class admin {

public:
	QGroupBox* groupBoxa = new QGroupBox;
	string username;
	string pass;
	admin(void);
	admin(string us, string pas);

	void update(unordered_map<string, news*>& m, multiset<news*, setComparator>& disdate, qt1* w);
	void add(qt1* w, list<news*>& disrate, multiset<news*, setComparator>& disdate, unordered_map<string, news*>& upd, unordered_map<string, list<news*>>& title_news);
	void removeNew(qt1* w, list<news*>& disrate, multiset<news*, setComparator>& disdate, unordered_map<string, news*>& upd, unordered_map<string, list<news*>>& title_news);
	void displayAverageRate(qt1* w, unordered_map<string, list<news*>> m);
	void AddCategory(qt1* w, set<string>& categories);
	void Assign(qt1* w, set<string>& categories, unordered_map<string, news*>& upd);
	void displayByDate(qt1* w, multiset<news*, setComparator>& dis_date);
};