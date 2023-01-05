//  Define a class to represent lecture details. Include the following members and
// the program should handle at least details of 5 lecturer.
// Data members:
// a) Name of the lecturer
// b) Name of the subject
// c) Name of course
// d) Number of lecturers
//  Data functions:
// a) To assign initial values
// b) To add a lecture details
// c) To display name and lecture details

#include <iostream>
using namespace std;

struct lec
{
    char lec_name[30], lec_sub[30], course[30];

    int no_of_lec;
};

class lecture
{
public:
    struct lec l[10];
    int i, no_of_lecturers;
    char lect_info_name;
    string lect_info;
    void initial_values()
    {
        cout << "Enter the no of lecturers you ant to enter details about : ";
        cin >> no_of_lecturers;
        for (i = 1; i <= no_of_lecturers; i++)
        {
            cout << "Enter Details for " << i << " lecturer : " << endl;
            cout << "-------------------------------------" << endl;
            cout << "Enter Name : ";
            cin >> l[i].lec_name;
            cout << "Enter Subject Name : ";
            cin >> l[i].lec_sub;
            cout << "Enter Course Name : ";
            cin >> l[i].course;
            cout << "Enter no of lectures : ";
            cin >> l[i].no_of_lec;
        }
    }
    // void lecture_details()
    // {
    //     for (i = 1; i <= no_of_lecturers; i++)
    //     {
    //         cout << "-------------------------------------" << endl;
    //         cout << "Enter Name : ";
    //         cin >> l[i].lec_name;
    //         cout << "Enter the info about your subject :";
    //         cin >> lect_info;
    //     }
    // }
    void display_lec_details()
    {
        for (i = 1; i <= no_of_lecturers; i++)
        {
            cout << "Enter Details : " << endl;
            cout << "-------------------------------------" << endl;
            cout << "Name : " << l[i].lec_name << endl;
            cout << "Subject Name : " << l[i].lec_sub << endl;
            cout << "Course Name : " << l[i].course << endl;
            cout << "No of lectures : " << l[i].no_of_lec << endl;
            void lecture_details();
            {
                for (i = 1; i <= no_of_lecturers; i++)
                {
                    cout << "-------------------------------------" << endl;
                    cout << "Enter Name : ";
                    cin >> l[i].lec_name;
                    cout << "Enter the info about your subject :";
                    cin >> lect_info;
                    cout << "-------------------------------------" << endl;
                    cout << "Lecture Details : " << lect_info << endl;
                }
            }
        }
    }
};

int main()
{
    lecture lect;
    lect.initial_values();
    lect.display_lec_details();
    return 0;
}