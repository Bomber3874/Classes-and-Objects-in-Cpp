/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string branch;
    string subject;
    string year;
    float cgpa;
};

int main(){
    Student s1;
    s1.name = "Sanidhya Singh";
    s1.branch = "ENTC";
    s1.subject = "CDS";
    s1.year = "2";
    s1.cgpa = 9.5;
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "CGPA: " << s1.cgpa << endl;

    Student s2;
    s2.name = "John Doe";
    s2.branch = "CSE";
    s2.subject = "Data Structures";
    s2.year = "3";
    s2.cgpa = 8.7;
    cout << "Name: " << s2.name << endl;
    cout << "Branch: " << s2.branch << endl;
    cout << "Subject: " << s2.subject << endl;
    cout << "Year: " << s2.year << endl;
    cout << "CGPA: " << s2.cgpa << endl;
    return 0;
}

/*Output
Name: Sanidhya Singh
Branch: ENTC
Subject: CDS
Year: 2
CGPA: 9.5
Name: John Doe
Branch: CSE
Subject: Data Structures
Year: 3
CGPA: 8.7
*/