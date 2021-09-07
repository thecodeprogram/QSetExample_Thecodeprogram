#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

#include <QSet>
#include <QSetIterator>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    system("title QSettings Example with QT C++ - Thecodeprogram");
    cout << "Welcome to QSettings example with QT C++..." << endl << endl;

    QSet<QString> set;
    set.insert("The");
    set.insert("Code");
    set.insert("Program");
    foreach (QString el, set)
        cout << el.toLatin1().constData() << endl;

    cout << endl;

    QSet<QString> set1;
    set1 << "Burak" << "Hamdi" << "TUFAN";
    foreach (QString el, set1)
        cout << el.toLatin1().constData() << endl;

    cout << endl;

    QList<QString> setList = set.toList();
    for(int i=0; i<setList.size();i++)
        cout << setList.at(i).toLatin1().constData() << endl;

    QList<QString> setListVals = set.values();
    for(int i=0; i<setListVals.size();i++)
        cout << setListVals.at(i).toLatin1().constData() << endl;

    cout << endl;

    int size = set.size();
    int size1 = set1.size();
    cout << "Size : " << size << endl;
    cout << "Size1 : " << size1 << endl;

    cout << endl;

    cout << "Is container empty : " << set.empty() << endl;
    set.clear();
    cout << "Is container empty : " << set.empty() << endl;


    cout << endl;

    QSet<int> numbers1, numbers2;
    numbers1 << 1 << 2 << 3;
    numbers2 << 4 << 5 << 6;
    cout << "Numbers intersects : " << numbers1.intersects(numbers2) << endl;
    numbers1 << 4 << 5;
    cout << "Numbers intersects : " << numbers1.intersects(numbers2) << endl;

    QSet<int> intersectList = numbers1.intersect(numbers2);
    foreach (int el, intersectList)
        cout << "Intersecting element : " << el << endl;

    cout << endl;

    QSet<int> n1, n2;
    n1 << 1 << 2 << 3 << 4 << 5;
    n2 << 4 << 5 << 6;
    QSet<int> subtracktedSet = n2.subtract(n1);
    foreach (int el, subtracktedSet)
        cout << "Rest element : " << el << endl;

    cout << endl;

    QSet<QString> sets;
    sets << "The" << "Code" << "Program" << "Burak" << "Hamdi" << "TUFAN";

    QSet<QString>::iterator i;
    for (i = sets.begin(); i != sets.end(); ++i){
       cout << (*i).toLatin1().constData() << " ";
    }

    cout << endl;


    return a.exec();
}
