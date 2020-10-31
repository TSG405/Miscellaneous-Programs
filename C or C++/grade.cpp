#include <iostream>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    int k;
    for(auto i = grades.begin();i < grades.end();i++)
    {
        k = *i;
        if(*i > 38)
        {
            if(k%5 != 0)
            {
                int nextnum = ((k/5) + 1)*5;
                if(nextnum - *i < 3)
                    *i = nextnum;
            }
        }
    }
    return grades;    
}

int main()
{
    int grades_count;
    cin >> grades_count;
    vector<int> grades(grades_count);
    for(auto i = grades.begin();i < grades.end();i++)
        cout << *i << " ";

    cout << "\nModified array: ";
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    vector<int> grade;
    for(int i=0;i<n;i++)
        cin >> grade[i];
    grade = gradingStudents(grade);
    cout << "Modified grades:\n";
    for(int i=0;i<n;i++)
        cout << grade[i];

    return 0;
}
